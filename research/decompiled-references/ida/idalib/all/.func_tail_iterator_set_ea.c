// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD5B0
// Name:            .func_tail_iterator_set_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD5B0 jmp     cs:off_2C7C2C0
//
// Resolved target: func_tail_iterator_set_ea
// Target address:  0x5CBAE0
// GOT/IAT slot:    0x2C7C2C0
// Slot symbol:     off_2C7C2C0
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set_ea(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set_ea via GOT/IAT indirection
    return func_tail_iterator_set_ea(/* forwarded args */);
}

