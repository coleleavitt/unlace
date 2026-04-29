// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF40
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF40 jmp     cs:off_4E9F88
//
// Resolved target: get_tinfo_property
// Target address:  0x4EC9D8
// GOT/IAT slot:    0x4E9F88
// Slot symbol:     off_4E9F88
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

