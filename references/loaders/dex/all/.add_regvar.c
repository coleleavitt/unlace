// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3500
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3500 jmp     cs:off_28268
//
// Resolved target: add_regvar
// Target address:  0x28718
// GOT/IAT slot:    0x28268
// Slot symbol:     off_28268
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}

