// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E440
// Name:            .get_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E440 jmp     cs:off_4E9A08
//
// Resolved target: get_op_tinfo
// Target address:  0x4EC428
// GOT/IAT slot:    0x4E9A08
// Slot symbol:     off_4E9A08
// Target type:     <no type info>
// ============================================================

void .get_op_tinfo(/* see target signature */)
{
    // Tail-call to get_op_tinfo via GOT/IAT indirection
    return get_op_tinfo(/* forwarded args */);
}

