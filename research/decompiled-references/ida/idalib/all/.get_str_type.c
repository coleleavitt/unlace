// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9840
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9840 jmp     cs:off_2C7A408
//
// Resolved target: get_str_type
// Target address:  0x3C2F30
// GOT/IAT slot:    0x2C7A408
// Slot symbol:     off_2C7A408
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}

