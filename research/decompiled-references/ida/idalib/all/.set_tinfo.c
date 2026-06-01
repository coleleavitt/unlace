// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A82C0
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A82C0 jmp     cs:off_2C79948
//
// Resolved target: set_tinfo
// Target address:  0x6950F0
// GOT/IAT slot:    0x2C79948
// Slot symbol:     off_2C79948
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

