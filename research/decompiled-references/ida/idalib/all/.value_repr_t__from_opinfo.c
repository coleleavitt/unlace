// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC920
// Name:            .value_repr_t__from_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC920 jmp     cs:off_2C7BC78
//
// Resolved target: value_repr_t__from_opinfo
// Target address:  0x6BE420
// GOT/IAT slot:    0x2C7BC78
// Slot symbol:     off_2C7BC78
// Target type:     <no type info>
// ============================================================

void .value_repr_t__from_opinfo(/* see target signature */)
{
    // Tail-call to value_repr_t__from_opinfo via GOT/IAT indirection
    return value_repr_t__from_opinfo(/* forwarded args */);
}

