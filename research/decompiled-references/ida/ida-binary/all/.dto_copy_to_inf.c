// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115DD0
// Name:            .dto_copy_to_inf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115DD0 jmp     cs:dto_copy_to_inf_ptr
//
// Resolved target: dto_copy_to_inf
// Target address:  0x8D6258
// GOT/IAT slot:    0x8A1B88
// Slot symbol:     dto_copy_to_inf_ptr
// Target type:     <no type info>
// ============================================================

void .dto_copy_to_inf(/* see target signature */)
{
    // Tail-call to dto_copy_to_inf via GOT/IAT indirection
    return dto_copy_to_inf(/* forwarded args */);
}

