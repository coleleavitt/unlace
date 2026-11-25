use super::*;

/// A load command: `cmd`, `cmdsize`, the `lc_str` offset, the words in `rest`, then the string.
fn command(cmd: u32, rest: &[u32], text: &str) -> Vec<u8> {
    let offset = 4 * (3 + rest.len()) as u32;
    let size = (offset as usize + text.len() + 1).next_multiple_of(8);
    let mut words = vec![cmd, size as u32, offset];
    words.extend_from_slice(rest);
    let mut out: Vec<u8> = words.iter().flat_map(|w| w.to_le_bytes()).collect();
    out.extend_from_slice(text.as_bytes());
    out.resize(size, 0);
    out
}

/// A little-endian 64-bit Mach-O header over `commands`.
fn image(commands: &[Vec<u8>]) -> Vec<u8> {
    let body: Vec<u8> = commands.concat();
    let header = [
        0xfeed_facf,
        0x0100_000c,
        0,
        2,
        commands.len() as u32,
        body.len() as u32,
        0,
        0,
    ];
    let mut out: Vec<u8> = header.iter().flat_map(|w| w.to_le_bytes()).collect();
    out.extend(body);
    out
}

#[test]
fn reads_dylibs_and_rpaths_in_command_order() {
    let bytes = image(&[
        command(
            0xc,
            &[0, 0x0001_0203, 0x0001_0000],
            "/usr/lib/libSystem.B.dylib",
        ),
        command(LC_RPATH, &[], "@executable_path/../Frameworks"),
        command(0x8000_001f, &[0, 1, 1], "/usr/lib/libReexport.dylib"),
        command(0x8000_0018, &[0, 0, 0], "/usr/lib/libWeak.dylib"),
        command(0x20, &[0, 0, 0], "/usr/lib/libLazy.dylib"),
        command(0x8000_0023, &[0, 0, 0], "/usr/lib/libUpward.dylib"),
    ]);
    let deps = dependencies(&bytes);
    let named: Vec<_> = deps
        .dylibs
        .iter()
        .map(|d| (d.kind, d.name.as_str()))
        .collect();
    assert_eq!(
        named,
        vec![
            (DylibKind::Load, "/usr/lib/libSystem.B.dylib"),
            (DylibKind::Reexport, "/usr/lib/libReexport.dylib"),
            (DylibKind::Weak, "/usr/lib/libWeak.dylib"),
            (DylibKind::Lazy, "/usr/lib/libLazy.dylib"),
            (DylibKind::Upward, "/usr/lib/libUpward.dylib"),
        ]
    );
    assert_eq!(deps.dylibs[0].current_version, 0x0001_0203);
    assert_eq!(deps.dylibs[0].compat_version, 0x0001_0000);
    assert_eq!(deps.dylibs[0].kind.command_name(), "LC_LOAD_DYLIB");
    assert_eq!(
        deps.rpaths,
        vec!["@executable_path/../Frameworks".to_string()]
    );
}

#[test]
fn a_command_running_past_the_input_ends_the_walk() {
    let mut bytes = image(&[
        command(0xc, &[0, 0, 0], "/usr/lib/libA.dylib"),
        command(0xc, &[0, 0, 0], "/usr/lib/libB.dylib"),
    ]);
    bytes.truncate(bytes.len() - 4);
    let names: Vec<_> = dependencies(&bytes)
        .dylibs
        .into_iter()
        .map(|d| d.name)
        .collect();
    assert_eq!(names, vec!["/usr/lib/libA.dylib".to_string()]);
}

#[test]
fn other_input_yields_nothing() {
    assert_eq!(
        dependencies(b"\x7fELF\x02\x01\x01\x00"),
        MachODependencies::default()
    );
    assert_eq!(dependencies(&[]), MachODependencies::default());
}
