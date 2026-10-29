// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7110
// Name:            .value_repr_t__parse_value_repr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7110 jmp     cs:off_2C79070
//
// Resolved target: value_repr_t__parse_value_repr
// Target address:  0x583740
// GOT/IAT slot:    0x2C79070
// Slot symbol:     off_2C79070
// Target type:     <no type info>
// ============================================================

void .value_repr_t__parse_value_repr(/* see target signature */)
{
    // Tail-call to value_repr_t__parse_value_repr via GOT/IAT indirection
    return value_repr_t__parse_value_repr(/* forwarded args */);
}

