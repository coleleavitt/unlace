// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9920
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9920 jmp     cs:off_2E478
//
// Resolved target: get_tinfo_property
// Target address:  0x2EB00
// GOT/IAT slot:    0x2E478
// Slot symbol:     off_2E478
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

