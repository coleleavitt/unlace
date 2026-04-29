// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF40
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF40 jmp     cs:off_4DAF88
//
// Resolved target: remove_event_listener
// Target address:  0x4DD9B8
// GOT/IAT slot:    0x4DAF88
// Slot symbol:     off_4DAF88
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

