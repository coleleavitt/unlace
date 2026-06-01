// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD210
// Name:            .get_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD210 jmp     cs:off_2C7C0F0
//
// Resolved target: get_op_tinfo
// Target address:  0x695390
// GOT/IAT slot:    0x2C7C0F0
// Slot symbol:     off_2C7C0F0
// Target type:     <no type info>
// ============================================================

void .get_op_tinfo(/* see target signature */)
{
    // Tail-call to get_op_tinfo via GOT/IAT indirection
    return get_op_tinfo(/* forwarded args */);
}

