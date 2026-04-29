// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19740
// Name:            .track_value_until_address_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19740 jmp     cs:off_75388
//
// Resolved target: track_value_until_address_jpt
// Target address:  0x75BD8
// GOT/IAT slot:    0x75388
// Slot symbol:     off_75388
// Target type:     <no type info>
// ============================================================

void .track_value_until_address_jpt(/* see target signature */)
{
    // Tail-call to track_value_until_address_jpt via GOT/IAT indirection
    return track_value_until_address_jpt(/* forwarded args */);
}

