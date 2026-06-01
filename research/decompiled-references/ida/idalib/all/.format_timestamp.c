// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA010
// Name:            .format_timestamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA010 jmp     cs:off_2C7A7F0
//
// Resolved target: format_timestamp
// Target address:  0x7C1450
// GOT/IAT slot:    0x2C7A7F0
// Slot symbol:     off_2C7A7F0
// Target type:     <no type info>
// ============================================================

void .format_timestamp(/* see target signature */)
{
    // Tail-call to format_timestamp via GOT/IAT indirection
    return format_timestamp(/* forwarded args */);
}

