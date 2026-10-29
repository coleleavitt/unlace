// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7410
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7410 jmp     cs:off_2C791F0
//
// Resolved target: save_tinfo
// Target address:  0x53AFF0
// GOT/IAT slot:    0x2C791F0
// Slot symbol:     off_2C791F0
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

