// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC50
// Name:            .register_undo_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC50 jmp     cs:register_undo_handlers_ptr
//
// Resolved target: register_undo_handlers
// Target address:  0x8D93F8
// GOT/IAT slot:    0x8A42C8
// Slot symbol:     register_undo_handlers_ptr
// Target type:     <no type info>
// ============================================================

void .register_undo_handlers(/* see target signature */)
{
    // Tail-call to register_undo_handlers via GOT/IAT indirection
    return register_undo_handlers(/* forwarded args */);
}

