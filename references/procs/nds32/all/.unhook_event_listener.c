// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8650
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8650 jmp     cs:off_2A310
//
// Resolved target: unhook_event_listener
// Target address:  0x2A890
// GOT/IAT slot:    0x2A310
// Slot symbol:     off_2A310
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

