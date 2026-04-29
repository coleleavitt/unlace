// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB20
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB20 jmp     cs:off_4B9D78
//
// Resolved target: unhook_event_listener
// Target address:  0x4BC798
// GOT/IAT slot:    0x4B9D78
// Slot symbol:     off_4B9D78
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

