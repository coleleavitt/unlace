// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66B0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66B0 jmp     cs:off_1D340
//
// Resolved target: hook_event_listener
// Target address:  0x1D848
// GOT/IAT slot:    0x1D340
// Slot symbol:     off_1D340
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

