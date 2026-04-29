// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC50
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC50 jmp     cs:off_4EDE10
//
// Resolved target: unhook_event_listener
// Target address:  0x4F2150
// GOT/IAT slot:    0x4EDE10
// Slot symbol:     off_4EDE10
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

