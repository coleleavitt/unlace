// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E40
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E40 jmp     cs:hook_event_listener_ptr
//
// Resolved target: hook_event_listener
// Target address:  0x8D6298
// GOT/IAT slot:    0x8A1BC0
// Slot symbol:     hook_event_listener_ptr
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

