// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E7E0
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E7E0 jmp     cs:off_4E9BD8
//
// Resolved target: save_tinfo
// Target address:  0x4EC608
// GOT/IAT slot:    0x4E9BD8
// Slot symbol:     off_4E9BD8
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

