// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2B0
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2B0 jmp     cs:off_4BF140
//
// Resolved target: set_tinfo
// Target address:  0x4C2608
// GOT/IAT slot:    0x4BF140
// Slot symbol:     off_4BF140
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

