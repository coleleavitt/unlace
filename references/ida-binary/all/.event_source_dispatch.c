// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC30
// Name:            .event_source_dispatch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC30 jmp     cs:event_source_dispatch_ptr
//
// Resolved target: event_source_dispatch
// Target address:  0x8D93E0
// GOT/IAT slot:    0x8A42B8
// Slot symbol:     event_source_dispatch_ptr
// Target type:     <no type info>
// ============================================================

void .event_source_dispatch(/* see target signature */)
{
    // Tail-call to event_source_dispatch via GOT/IAT indirection
    return event_source_dispatch(/* forwarded args */);
}

