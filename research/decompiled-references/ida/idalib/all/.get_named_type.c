// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8580
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8580 jmp     cs:off_2C79AA8
//
// Resolved target: get_named_type
// Target address:  0x64FA30
// GOT/IAT slot:    0x2C79AA8
// Slot symbol:     off_2C79AA8
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

