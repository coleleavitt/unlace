// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5C0
// Name:            .is_valid_typename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5C0 jmp     cs:off_CA2C8
//
// Resolved target: is_valid_typename
// Target address:  0xD0C00
// GOT/IAT slot:    0xCA2C8
// Slot symbol:     off_CA2C8
// Target type:     <no type info>
// ============================================================

void .is_valid_typename(/* see target signature */)
{
    // Tail-call to is_valid_typename via GOT/IAT indirection
    return is_valid_typename(/* forwarded args */);
}

