// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1191E0
// Name:            .bind_event_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1191E0 jmp     cs:bind_event_handler_ptr
//
// Resolved target: bind_event_handler
// Target address:  0x8D82F8
// GOT/IAT slot:    0x8A3590
// Slot symbol:     bind_event_handler_ptr
// Target type:     <no type info>
// ============================================================

void .bind_event_handler(/* see target signature */)
{
    // Tail-call to bind_event_handler via GOT/IAT indirection
    return bind_event_handler(/* forwarded args */);
}

