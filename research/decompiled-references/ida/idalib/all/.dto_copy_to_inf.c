// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA160
// Name:            .dto_copy_to_inf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA160 jmp     cs:off_2C7A898
//
// Resolved target: dto_copy_to_inf
// Target address:  0x634D00
// GOT/IAT slot:    0x2C7A898
// Slot symbol:     off_2C7A898
// Target type:     <no type info>
// ============================================================

void .dto_copy_to_inf(/* see target signature */)
{
    // Tail-call to dto_copy_to_inf via GOT/IAT indirection
    return dto_copy_to_inf(/* forwarded args */);
}

