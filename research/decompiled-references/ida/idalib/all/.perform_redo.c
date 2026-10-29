// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D50
// Name:            .perform_redo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D50 jmp     cs:off_2C79690
//
// Resolved target: perform_redo
// Target address:  0x5802D0
// GOT/IAT slot:    0x2C79690
// Slot symbol:     off_2C79690
// Target type:     <no type info>
// ============================================================

void .perform_redo(/* see target signature */)
{
    // Tail-call to perform_redo via GOT/IAT indirection
    return perform_redo(/* forwarded args */);
}

