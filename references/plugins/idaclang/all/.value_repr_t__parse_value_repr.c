// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3320
// Name:            .value_repr_t__parse_value_repr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3320 jmp     cs:off_29178
//
// Resolved target: value_repr_t__parse_value_repr
// Target address:  0x29528
// GOT/IAT slot:    0x29178
// Slot symbol:     off_29178
// Target type:     <no type info>
// ============================================================

void .value_repr_t__parse_value_repr(/* see target signature */)
{
    // Tail-call to value_repr_t__parse_value_repr via GOT/IAT indirection
    return value_repr_t__parse_value_repr(/* forwarded args */);
}

