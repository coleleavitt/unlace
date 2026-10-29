// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9BC0
// Name:            .type_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9BC0 jmp     cs:off_2C7A5C8
//
// Resolved target: type_flag
// Target address:  0x3C9170
// GOT/IAT slot:    0x2C7A5C8
// Slot symbol:     off_2C7A5C8
// Target type:     <no type info>
// ============================================================

void .type_flag(/* see target signature */)
{
    // Tail-call to type_flag via GOT/IAT indirection
    return type_flag(/* forwarded args */);
}

