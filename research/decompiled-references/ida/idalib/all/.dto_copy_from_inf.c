// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9FD0
// Name:            .dto_copy_from_inf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9FD0 jmp     cs:off_2C7A7D0
//
// Resolved target: dto_copy_from_inf
// Target address:  0x635000
// GOT/IAT slot:    0x2C7A7D0
// Slot symbol:     off_2C7A7D0
// Target type:     <no type info>
// ============================================================

void .dto_copy_from_inf(/* see target signature */)
{
    // Tail-call to dto_copy_from_inf via GOT/IAT indirection
    return dto_copy_from_inf(/* forwarded args */);
}

