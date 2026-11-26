use super::*;
use crate::pass::ContextPaint;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// Hand-assemble a bare-metal Cortex-M ELF32: a `.text` at `text_vma` holding
/// `n_bodies` two-halfword Thumb bodies, and a table section (`table_flags`
/// `sh_flags`) at `table_vma` carrying `words`, inside two `PT_LOAD`s whose
/// flags are `table_pf` / `PF_R|PF_X`. `e_entry` and `machine` are explicit so
/// the `word[1] == e_entry` and ARM-gate predicates can each be steered.
///
/// Assembled here because no cross toolchain on this host emits a bare-metal
/// STM32 link layout; mirrors `tests/fixtures/cortexm_ccm_vectors_le32.py`.
#[allow(clippy::too_many_arguments)]
fn build(
    table_vma: u32,
    table_flags: u32,
    table_pf: u32,
    words: &[u32],
    text_vma: u32,
    n_bodies: usize,
    e_entry: u32,
    machine: u16,
) -> Vec<u8> {
    const EHDR: u32 = 52;
    const PHDR: u32 = 32;
    const SHDR: u32 = 40;
    let table: Vec<u8> = words.iter().flat_map(|w| w.to_le_bytes()).collect();
    // `movs r0,#k ; bx lr` per body (Thumb-1: 0x20kk, 0x4770).
    let text: Vec<u8> = (0..n_bodies)
        .flat_map(|k| [k as u8, 0x20u8, 0x70, 0x47])
        .collect();
    let ph_off = EHDR;
    let table_off = ph_off + PHDR * 2;
    let text_off = table_off + table.len() as u32;

    let mut shstr = vec![0u8];
    let mut name_of = |n: &str| {
        let off = shstr.len() as u32;
        shstr.extend_from_slice(n.as_bytes());
        shstr.push(0);
        off
    };
    let n_shstrtab = name_of(".shstrtab");
    let n_table = name_of(".isr_vector");
    let n_text = name_of(".text");
    let shstr_off = text_off + text.len() as u32;
    let sh_off = shstr_off + shstr.len() as u32;

    let mut b: Vec<u8> = Vec::new();
    b.extend_from_slice(&[0x7f, b'E', b'L', b'F', 1, 1, 1]);
    b.extend_from_slice(&[0u8; 9]);
    b.extend_from_slice(&2u16.to_le_bytes()); // e_type = ET_EXEC
    b.extend_from_slice(&machine.to_le_bytes());
    b.extend_from_slice(&1u32.to_le_bytes());
    b.extend_from_slice(&e_entry.to_le_bytes());
    b.extend_from_slice(&ph_off.to_le_bytes());
    b.extend_from_slice(&sh_off.to_le_bytes());
    b.extend_from_slice(&0x0500_0200u32.to_le_bytes()); // e_flags: EABI5
    b.extend_from_slice(&(EHDR as u16).to_le_bytes());
    b.extend_from_slice(&(PHDR as u16).to_le_bytes());
    b.extend_from_slice(&2u16.to_le_bytes()); // e_phnum
    b.extend_from_slice(&(SHDR as u16).to_le_bytes());
    b.extend_from_slice(&4u16.to_le_bytes()); // e_shnum
    b.extend_from_slice(&3u16.to_le_bytes()); // e_shstrndx

    let phdr = |b: &mut Vec<u8>, off: u32, vaddr: u32, size: u32, flags: u32| {
        for v in [1u32, off, vaddr, vaddr, size, size, flags, 4] {
            b.extend_from_slice(&v.to_le_bytes());
        }
    };
    phdr(&mut b, table_off, table_vma, table.len() as u32, table_pf);
    phdr(&mut b, text_off, text_vma, text.len() as u32, 0x4 | 0x1);
    assert_eq!(b.len() as u32, table_off);
    b.extend_from_slice(&table);
    b.extend_from_slice(&text);
    b.extend_from_slice(&shstr);

    let shdr = |b: &mut Vec<u8>, name: u32, ty: u32, fl: u32, addr: u32, off: u32, sz: u32| {
        for v in [name, ty, fl, addr, off, sz, 0, 0, 4, 0] {
            b.extend_from_slice(&v.to_le_bytes());
        }
    };
    assert_eq!(b.len() as u32, sh_off);
    shdr(&mut b, 0, 0, 0, 0, 0, 0);
    shdr(
        &mut b,
        n_table,
        1,
        table_flags,
        table_vma,
        table_off,
        table.len() as u32,
    );
    shdr(
        &mut b,
        n_text,
        1,
        0x2 | 0x4,
        text_vma,
        text_off,
        text.len() as u32,
    );
    shdr(&mut b, n_shstrtab, 3, 0, 0, shstr_off, shstr.len() as u32);
    b
}

/// The shape every corpus table opens with: an initial SP, a reset vector and
/// three handler pointers into `text_vma`, then reserved zeros.
fn handler_words(sp: u32, text_vma: u32) -> Vec<u32> {
    vec![
        sp,
        text_vma | 1,
        (text_vma + 4) | 1,
        (text_vma + 8) | 1,
        (text_vma + 12) | 1,
        0,
        0,
        0,
    ]
}

const EM_ARM: u16 = 40;
const EM_X86_64: u16 = 62;

/// cleanflight / betaflight: `.isr_vector` is `A`-only inside a **read-only**
/// `PT_LOAD` and its stack word is STM32F4 CCM RAM (`0x1000fff0`), so the
/// shipped signature cannot even see the section, let alone accept word 0. The
/// widened scan finds it, harvests all four handlers, and arms the Thumb paint.
#[test]
fn ccm_stack_in_a_readonly_load_is_confirmed_only_when_widened() {
    let bytes = build(
        0x0800_0000,
        0x2, // SHF_ALLOC only
        0x4, // PF_R: not an executable load
        &handler_words(0x1000_fff0, 0x0800_8000),
        0x0800_8000,
        5,
        0x0800_8011, // e_entry is `_start`, not the reset vector
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert!(
        super::super::cortexm_vector_table_shipped(&file).is_none(),
        "THE BUG: the shipped signature must reject this image"
    );
    assert_eq!(
        vector_table(&file, false).map(|t| t.0),
        None,
        "option off is the shipped call verbatim"
    );
    assert_eq!(
        vector_table(&file, true).map(|t| t.0),
        Some(0x0800_0000),
        "THE FIX: the widened scan confirms the A-only .isr_vector"
    );
    assert_eq!(
        super::super::cortexm_vector_entries(&file, true),
        vec![0x0800_8000, 0x0800_8004, 0x0800_8008, 0x0800_800c],
        "all four Thumb handlers are harvested, masked/sorted/deduped"
    );
    assert_eq!(
        super::super::cortexm_thumb_paints(&file, true),
        vec![ContextPaint {
            addr: 0x0800_8000,
            end: Some(0x0800_8014),
            var: "TMode",
            value: 1
        }],
        "a confirmed table region-paints TMode=1 over the executable sections"
    );
}

/// betaflight: the table is linked into RAM at `0x20000000` while its handlers
/// live in flash BELOW it. The shipped harvest's "stop once the scan reaches
/// the lowest handler (the start of code)" rule then fires on the second slot
/// and the table looks one word long; the widened harvest requires the lowest
/// handler to be at or above the table base before that stop can apply.
#[test]
fn ram_relocated_table_below_its_handlers_still_harvests() {
    let words = handler_words(0x1000_fff0, 0x0800_8000);
    let bytes = build(
        0x2000_0000,
        0x2,
        0x4,
        &words,
        0x0800_8000,
        5,
        0x0800_8001,
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    let execs = executable_sections(&file);
    let in_exec = |vma: u64| in_executable_section(&execs, vma);
    let data: Vec<u8> = words.iter().flat_map(|w| w.to_le_bytes()).collect();
    assert_eq!(
        harvest_vector_slots(0x2000_0000, &data, true, &in_exec, false).len(),
        1,
        "THE BUG: the unrelaxed start-of-code stop truncates the table to one slot"
    );
    assert_eq!(
        harvest_vector_slots(0x2000_0000, &data, true, &in_exec, true).len(),
        4,
        "THE FIX: a table above the code it points at is walked to its real end"
    );
    assert_eq!(vector_table(&file, true).map(|t| t.0), Some(0x2000_0000));
}

/// crazyflie / nuttx: the table sits in an ordinary executable section with an
/// ordinary SRAM stack word, and is rejected ONLY because the link script
/// points `e_entry` somewhere other than the reset vector.
#[test]
fn reset_word_need_not_equal_e_entry() {
    let bytes = build(
        0x0800_0000,
        0x2 | 0x4, // AX: the shipped candidate set can see it
        0x4 | 0x1,
        &handler_words(0x2001_ffff, 0x0800_8000),
        0x0800_8000,
        5,
        0x0800_8011, // != word[1]
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert!(
        super::super::cortexm_vector_table_shipped(&file).is_none(),
        "THE BUG"
    );
    assert_eq!(
        vector_table(&file, true).map(|t| t.0),
        Some(0x0800_0000),
        "THE FIX"
    );
}

/// Precision floor: a `.data`-shaped section whose first word happens to land
/// in the SRAM window is NOT a table — the run of Thumb handler pointers is
/// what confirms one, and two conforming slots are not a run.
#[test]
fn sram_first_word_alone_is_not_a_table() {
    // A plausible `.data` head: a self-referential SRAM pointer, a zero, then
    // even (non-Thumb) pointers — the run ends at slot 2 with 0 handlers.
    let datalike = vec![0x2000_0004u32, 0, 0x2000_2530, 0x2000_2598, 0, 0, 0, 0];
    let bytes = build(
        0x2000_0000,
        0x2 | 0x1,
        0x4 | 0x2,
        &datalike,
        0x0800_8000,
        5,
        0x0800_8001,
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert_eq!(
        vector_table(&file, true),
        None,
        "a .data struct must not arm the oracle"
    );

    let two = vec![
        0x2000_4000u32,
        0x0800_8001,
        0x0800_8005,
        0x1234_5678,
        0,
        0,
        0,
        0,
    ];
    let bytes = build(
        0x0800_0000,
        0x2,
        0x4,
        &two,
        0x0800_8000,
        5,
        0x0800_8001,
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert_eq!(
        vector_table(&file, true),
        None,
        "two conforming slots is not a run"
    );

    let three = vec![
        0x2000_4000u32,
        0x0800_8001,
        0x0800_8005,
        0x0800_8009,
        0x1234_5678,
        0,
        0,
        0,
    ];
    let bytes = build(
        0x0800_0000,
        0x2,
        0x4,
        &three,
        0x0800_8000,
        5,
        0x0800_8001,
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert_eq!(
        vector_table(&file, true).map(|t| t.0),
        Some(0x0800_0000),
        "three is the threshold"
    );
}

/// Strict no-op off ARM: the same byte pattern on an x86-64 object confirms
/// nothing, with the flag on or off.
#[test]
fn non_arm_is_a_strict_no_op() {
    let bytes = build(
        0x0800_0000,
        0x2,
        0x4,
        &handler_words(0x1000_fff0, 0x0800_8000),
        0x0800_8000,
        5,
        0x0800_8001,
        EM_X86_64,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert_eq!(vector_table(&file, true), None);
    assert!(super::super::cortexm_vector_entries(&file, true).is_empty());
    assert!(super::super::cortexm_thumb_paints(&file, true).is_empty());
}

/// Monotonicity: when the shipped signature already matches, the widened call
/// returns that same section with the same harvest — the option can add a
/// table, never move or drop one.
#[test]
fn shipped_match_wins_over_the_widened_scan() {
    let bytes = build(
        0x0800_0000,
        0x2 | 0x4,
        0x4 | 0x1,
        &handler_words(0x2000_4000, 0x0800_8000),
        0x0800_8000,
        5,
        0x0800_8001, // == word[1]: the shipped signature matches
        EM_ARM,
    );
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    let shipped = super::super::cortexm_vector_table_shipped(&file).map(|t| t.0);
    assert_eq!(
        shipped,
        Some(0x0800_0000),
        "precondition: the shipped signature matches"
    );
    assert_eq!(
        vector_table(&file, true).map(|t| t.0),
        shipped,
        "same section either way"
    );
    assert_eq!(
        super::super::cortexm_vector_entries(&file, true),
        super::super::cortexm_vector_entries(&file, false),
        "same harvest either way"
    );
}

/// The committed fixture the console e2e drives is exactly the widened shape:
/// rejected by the shipped signature, confirmed and fully harvested by the
/// widened one. Pins the fixture so a regenerated file cannot silently drift.
#[test]
fn committed_fixture_is_the_widened_shape() {
    let bytes = fixture("cortexm_ccm_vectors_le32");
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
    assert!(super::super::cortexm_vector_table_shipped(&file).is_none());
    assert_eq!(vector_table(&file, true).map(|t| t.0), Some(0x0800_0000));
    assert_eq!(
        super::super::cortexm_vector_entries(&file, true),
        vec![0x0800_8000, 0x0800_8004, 0x0800_8008, 0x0800_800c]
    );
}
