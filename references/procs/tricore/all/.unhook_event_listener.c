// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66E0
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66E0 jmp     cs:off_24358
//
// Resolved target: unhook_event_listener
// Target address:  0x26138
// GOT/IAT slot:    0x24358
// Slot symbol:     off_24358
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

