// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1177F0
// Name:            .reset_undo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1177F0 jmp     cs:reset_undo_ptr
//
// Resolved target: reset_undo
// Target address:  0x8D72F0
// GOT/IAT slot:    0x8A2898
// Slot symbol:     reset_undo_ptr
// Target type:     <no type info>
// ============================================================

void .reset_undo(/* see target signature */)
{
    // Tail-call to reset_undo via GOT/IAT indirection
    return reset_undo(/* forwarded args */);
}

