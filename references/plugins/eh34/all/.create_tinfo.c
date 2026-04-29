// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6660
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6660 jmp     cs:off_8D318
//
// Resolved target: create_tinfo
// Target address:  0x8D8D8
// GOT/IAT slot:    0x8D318
// Slot symbol:     off_8D318
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

