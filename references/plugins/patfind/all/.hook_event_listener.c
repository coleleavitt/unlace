// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_131A8
//
// Resolved target: hook_event_listener
// Target address:  0x13458
// GOT/IAT slot:    0x131A8
// Slot symbol:     off_131A8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

