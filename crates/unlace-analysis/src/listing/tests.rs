use super::*;

fn insn(addr: u64) -> Insn {
    Insn {
        addr,
        len: 1,
        fall_through: addr.checked_add(1),
        flow: Default::default(),
        flows: Vec::new(),
        mnemonic: "".into(),
        operands: String::new(),
        pcode: None,
    }
}

#[test]
fn instruction_ranges_are_start_inclusive_and_end_exclusive() {
    let insns = [0x10, 0x20, u64::MAX]
        .into_iter()
        .map(|addr| (addr, insn(addr)))
        .collect();
    let listing = Listing {
        insns,
        refs: compactrefs::ReferenceIndex::default(),
        funcs: BTreeMap::new(),
        exec_ranges: Vec::new(),
        has_assembly: true,
        has_refs: true,
        stack_callback_refs: Vec::new(),
        mode_runs: Vec::new(),
        a32_extents: Vec::new(),
        x86_switch_rebuild: false,
        noreturn_targets: Default::default(),
        mips_transfers: Vec::new(),
    };
    let addrs = |start, end| {
        listing
            .instructions_in_range(start, end)
            .map(|(&addr, _)| addr)
            .collect::<Vec<_>>()
    };

    assert_eq!(addrs(0x10, Some(0x20)), vec![0x10]);
    assert_eq!(addrs(0x15, Some(u64::MAX)), vec![0x20]);
    assert_eq!(addrs(0x20, None), vec![0x20, u64::MAX]);
    assert!(addrs(0x20, Some(0x20)).is_empty());
    assert!(addrs(0x20, Some(0x10)).is_empty());
}

#[test]
fn x86_switch_resume_rebuilds_the_ordinary_partition_before_refusing_old_proofs() {
    use unlace_sleigh::{globalcontext::ContextInternal, sleigh::Sleigh};
    let root = std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../..");
    let path = root.join("crates/unlace-analysis/tests/fixtures/x86listingswitch_i386");
    let path = path.to_str().unwrap();
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let sla = unlace_slacomp::slacache::read_sla(
        root.join("specs/Ghidra/Processors/x86/data/languages/x86.sla"),
    )
    .unwrap();
    for detail in [ListingDetail::FULL, ListingDetail::PARTITION_ONLY] {
        for disable in [false, true] {
            let loader = ObjectLoadImage::from_bytes_silent(path, &bytes).unwrap();
            let mut engine = Sleigh::new(Box::new(loader), Box::new(ContextInternal::new()));
            engine.initialize_from_sla(&sla).unwrap();
            engine.base().manager().truncate_space("ram", 4).unwrap();
            engine.set_context_default("addrsize", 1);
            engine.set_context_default("opsize", 1);
            let mut loader = ObjectLoadImage::from_bytes_silent(path, &bytes).unwrap();
            loader.attach_to_space(Rc::clone(
                engine.base().manager().get_default_code_space().unwrap(),
            ));
            engine.set_loader(Box::new(loader));
            let mut arch = Architecture::new("x86:LE:32:default:gcc", engine);
            arch.unlace_options
                .set(unlace_decomp::analysisgates::X86listingswitch(true));
            let mut seeds = vec![0x100000, 0x1004f0];
            let expanded = Listing::build_with_meta_without_image(
                &file,
                &arch,
                arch.translate(),
                &seeds,
                &seeds,
                &[],
                detail,
            );
            assert!(expanded.is_instruction_start(0x100440));
            assert!(expanded.function_at(0x100510).is_some());
            if disable {
                arch.unlace_options
                    .set(unlace_decomp::analysisgates::X86listingswitch(false));
            } else {
                seeds.push(0x10040d);
            }
            let resumed = expanded.resume(
                &file,
                &arch,
                arch.translate(),
                &seeds,
                &seeds,
                &[],
                detail,
                &WalkPlan::serial(),
            );
            let fresh = Listing::build_with_meta_without_image(
                &file,
                &arch,
                arch.translate(),
                &seeds,
                &seeds,
                &[],
                detail,
            );
            for case in [0x100440, 0x100460, 0x1004b0, 0x1004d0] {
                assert!(!resumed.is_instruction_start(case));
            }
            assert!(resumed.function_at(0x100510).is_none());
            let partition = |listing: &Listing| {
                listing
                    .instructions()
                    .map(|(&at, insn)| {
                        (
                            at,
                            insn.len,
                            insn.fall_through,
                            insn.flow,
                            insn.flows.clone(),
                        )
                    })
                    .collect::<Vec<_>>()
            };
            assert_eq!(partition(&resumed), partition(&fresh));
            assert_eq!(resumed.funcs, fresh.funcs);
            assert_eq!(resumed.refs, fresh.refs);
        }
    }
}
