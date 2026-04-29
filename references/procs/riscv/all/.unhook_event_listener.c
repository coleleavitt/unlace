// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA860
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA860 jmp     cs:off_35418
//
// Resolved target: unhook_event_listener
// Target address:  0x35A78
// GOT/IAT slot:    0x35418
// Slot symbol:     off_35418
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

