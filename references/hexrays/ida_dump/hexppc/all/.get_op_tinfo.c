// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B400
// Name:            .get_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B400 jmp     cs:off_4DA9E8
//
// Resolved target: get_op_tinfo
// Target address:  0x4DD3E8
// GOT/IAT slot:    0x4DA9E8
// Slot symbol:     off_4DA9E8
// Target type:     <no type info>
// ============================================================

void .get_op_tinfo(/* see target signature */)
{
    // Tail-call to get_op_tinfo via GOT/IAT indirection
    return get_op_tinfo(/* forwarded args */);
}

