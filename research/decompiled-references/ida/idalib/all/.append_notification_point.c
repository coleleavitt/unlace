// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A99A0
// Name:            .append_notification_point
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A99A0 jmp     cs:off_2C7A4B8
//
// Resolved target: append_notification_point
// Target address:  0x4B4DF0
// GOT/IAT slot:    0x2C7A4B8
// Slot symbol:     off_2C7A4B8
// Target type:     <no type info>
// ============================================================

void .append_notification_point(/* see target signature */)
{
    // Tail-call to append_notification_point via GOT/IAT indirection
    return append_notification_point(/* forwarded args */);
}

