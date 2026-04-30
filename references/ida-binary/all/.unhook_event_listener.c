// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118740
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118740 jmp     cs:unhook_event_listener_ptr
//
// Resolved target: unhook_event_listener
// Target address:  0x8D7C80
// GOT/IAT slot:    0x8A3040
// Slot symbol:     unhook_event_listener_ptr
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

