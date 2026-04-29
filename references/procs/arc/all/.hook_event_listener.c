// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x88D0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x88D0 jmp     cs:off_2A450
//
// Resolved target: hook_event_listener
// Target address:  0x2BE78
// GOT/IAT slot:    0x2A450
// Slot symbol:     off_2A450
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

