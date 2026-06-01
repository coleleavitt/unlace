// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B40
// Name:            .dto_copy_from_inf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B40 jmp     cs:dto_copy_from_inf_ptr
//
// Resolved target: dto_copy_from_inf
// Target address:  0x8D60D0
// GOT/IAT slot:    0x8A1A40
// Slot symbol:     dto_copy_from_inf_ptr
// Target type:     <no type info>
// ============================================================

void .dto_copy_from_inf(/* see target signature */)
{
    // Tail-call to dto_copy_from_inf via GOT/IAT indirection
    return dto_copy_from_inf(/* forwarded args */);
}

