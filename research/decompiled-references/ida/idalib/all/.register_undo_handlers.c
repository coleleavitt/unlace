// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD1D0
// Name:            .register_undo_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD1D0 jmp     cs:off_2C7C0D0
//
// Resolved target: register_undo_handlers
// Target address:  0x57F700
// GOT/IAT slot:    0x2C7C0D0
// Slot symbol:     off_2C7C0D0
// Target type:     <no type info>
// ============================================================

void .register_undo_handlers(/* see target signature */)
{
    // Tail-call to register_undo_handlers via GOT/IAT indirection
    return register_undo_handlers(/* forwarded args */);
}

