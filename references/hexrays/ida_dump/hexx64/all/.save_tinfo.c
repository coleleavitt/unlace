// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C870
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C870 jmp     cs:off_4EDC20
//
// Resolved target: save_tinfo
// Target address:  0x4F1F58
// GOT/IAT slot:    0x4EDC20
// Slot symbol:     off_4EDC20
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

