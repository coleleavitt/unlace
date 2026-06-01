// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F60
// Name:            .register_undo_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F60 jmp     cs:register_undo_handler_ptr
//
// Resolved target: register_undo_handler
// Target address:  0x8D4F10
// GOT/IAT slot:    0x8A0C50
// Slot symbol:     register_undo_handler_ptr
// Target type:     <no type info>
// ============================================================

void .register_undo_handler(/* see target signature */)
{
    // Tail-call to register_undo_handler via GOT/IAT indirection
    return register_undo_handler(/* forwarded args */);
}

