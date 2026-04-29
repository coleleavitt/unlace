// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45D0
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45D0 jmp     cs:off_282D0
//
// Resolved target: save_tinfo
// Target address:  0x29C70
// GOT/IAT slot:    0x282D0
// Slot symbol:     off_282D0
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

