// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC1D0
// Name:            .bind_event_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC1D0 jmp     cs:off_2C7B8D0
//
// Resolved target: bind_event_handler
// Target address:  0x82F610
// GOT/IAT slot:    0x2C7B8D0
// Slot symbol:     off_2C7B8D0
// Target type:     <no type info>
// ============================================================

void .bind_event_handler(/* see target signature */)
{
    // Tail-call to bind_event_handler via GOT/IAT indirection
    return bind_event_handler(/* forwarded args */);
}

