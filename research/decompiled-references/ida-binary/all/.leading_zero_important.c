// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114FF0
// Name:            .leading_zero_important
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114FF0 jmp     cs:leading_zero_important_ptr
//
// Resolved target: leading_zero_important
// Target address:  0x8D59C8
// GOT/IAT slot:    0x8A1498
// Slot symbol:     leading_zero_important_ptr
// Target type:     <no type info>
// ============================================================

void .leading_zero_important(/* see target signature */)
{
    // Tail-call to leading_zero_important via GOT/IAT indirection
    return leading_zero_important(/* forwarded args */);
}

