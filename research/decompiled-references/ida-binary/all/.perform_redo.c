// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1124B0
// Name:            .perform_redo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1124B0 jmp     cs:perform_redo_ptr
//
// Resolved target: perform_redo
// Target address:  0x8D3DD0
// GOT/IAT slot:    0x89FEF8
// Slot symbol:     perform_redo_ptr
// Target type:     <no type info>
// ============================================================

void .perform_redo(/* see target signature */)
{
    // Tail-call to perform_redo via GOT/IAT indirection
    return perform_redo(/* forwarded args */);
}

