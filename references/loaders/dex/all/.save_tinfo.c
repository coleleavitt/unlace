// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35C0
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35C0 jmp     cs:off_282C8
//
// Resolved target: save_tinfo
// Target address:  0x28780
// GOT/IAT slot:    0x282C8
// Slot symbol:     off_282C8
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

