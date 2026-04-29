// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3320
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3320 jmp     cs:off_1A178
//
// Resolved target: unhook_event_listener
// Target address:  0x1A440
// GOT/IAT slot:    0x1A178
// Slot symbol:     off_1A178
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

