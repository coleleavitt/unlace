// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD1A0
// Name:            .event_source_dispatch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD1A0 jmp     cs:off_2C7C0B8
//
// Resolved target: event_source_dispatch
// Target address:  0x82F7B0
// GOT/IAT slot:    0x2C7C0B8
// Slot symbol:     off_2C7C0B8
// Target type:     <no type info>
// ============================================================

void .event_source_dispatch(/* see target signature */)
{
    // Tail-call to event_source_dispatch via GOT/IAT indirection
    return event_source_dispatch(/* forwarded args */);
}

