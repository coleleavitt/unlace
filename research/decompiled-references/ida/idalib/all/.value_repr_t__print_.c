// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC330
// Name:            .value_repr_t__print_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC330 jmp     cs:off_2C7B980
//
// Resolved target: value_repr_t__print_
// Target address:  0x583A60
// GOT/IAT slot:    0x2C7B980
// Slot symbol:     off_2C7B980
// Target type:     <no type info>
// ============================================================

void .value_repr_t__print_(/* see target signature */)
{
    // Tail-call to value_repr_t__print_ via GOT/IAT indirection
    return value_repr_t__print_(/* forwarded args */);
}

