// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB090
// Name:            .reset_undo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB090 jmp     cs:off_2C7B030
//
// Resolved target: reset_undo
// Target address:  0x580530
// GOT/IAT slot:    0x2C7B030
// Slot symbol:     off_2C7B030
// Target type:     <no type info>
// ============================================================

void .reset_undo(/* see target signature */)
{
    // Tail-call to reset_undo via GOT/IAT indirection
    return reset_undo(/* forwarded args */);
}

