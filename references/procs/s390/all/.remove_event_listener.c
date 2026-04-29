// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10300
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10300 jmp     cs:off_2E168
//
// Resolved target: remove_event_listener
// Target address:  0x36DF8
// GOT/IAT slot:    0x2E168
// Slot symbol:     off_2E168
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

