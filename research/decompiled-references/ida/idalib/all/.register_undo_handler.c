// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F50
// Name:            .register_undo_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F50 jmp     cs:off_2C79F90
//
// Resolved target: register_undo_handler
// Target address:  0x57F380
// GOT/IAT slot:    0x2C79F90
// Slot symbol:     off_2C79F90
// Target type:     <no type info>
// ============================================================

void .register_undo_handler(/* see target signature */)
{
    // Tail-call to register_undo_handler via GOT/IAT indirection
    return register_undo_handler(/* forwarded args */);
}

