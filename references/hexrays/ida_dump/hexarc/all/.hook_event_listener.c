// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFF0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFF0 jmp     cs:off_4B9FE0
//
// Resolved target: hook_event_listener
// Target address:  0x4BCA10
// GOT/IAT slot:    0x4B9FE0
// Slot symbol:     off_4B9FE0
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

