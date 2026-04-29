// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C140
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C140 jmp     cs:off_4C0088
//
// Resolved target: get_str_type
// Target address:  0x4C35B8
// GOT/IAT slot:    0x4C0088
// Slot symbol:     off_4C0088
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}

