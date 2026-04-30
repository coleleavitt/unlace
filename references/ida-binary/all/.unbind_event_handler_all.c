// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D90
// Name:            .unbind_event_handler_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D90 jmp     cs:unbind_event_handler_all_ptr
//
// Resolved target: unbind_event_handler_all
// Target address:  0x8D5860
// GOT/IAT slot:    0x8A1368
// Slot symbol:     unbind_event_handler_all_ptr
// Target type:     <no type info>
// ============================================================

void .unbind_event_handler_all(/* see target signature */)
{
    // Tail-call to unbind_event_handler_all via GOT/IAT indirection
    return unbind_event_handler_all(/* forwarded args */);
}

