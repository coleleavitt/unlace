// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36A0
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36A0 jmp     cs:off_28338
//
// Resolved target: create_tinfo
// Target address:  0x28800
// GOT/IAT slot:    0x28338
// Slot symbol:     off_28338
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

