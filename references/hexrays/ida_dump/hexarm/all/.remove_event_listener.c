// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF80
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF80 jmp     cs:off_4E9FA8
//
// Resolved target: remove_event_listener
// Target address:  0x4EC9F8
// GOT/IAT slot:    0x4E9FA8
// Slot symbol:     off_4E9FA8
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

