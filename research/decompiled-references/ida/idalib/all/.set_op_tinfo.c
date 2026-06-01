// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC90
// Name:            .set_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC90 jmp     cs:off_2C7BE30
//
// Resolved target: set_op_tinfo
// Target address:  0x6960D0
// GOT/IAT slot:    0x2C7BE30
// Slot symbol:     off_2C7BE30
// Target type:     <no type info>
// ============================================================

void .set_op_tinfo(/* see target signature */)
{
    // Tail-call to set_op_tinfo via GOT/IAT indirection
    return set_op_tinfo(/* forwarded args */);
}

