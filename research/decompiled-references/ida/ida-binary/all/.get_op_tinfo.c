// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC90
// Name:            .get_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC90 jmp     cs:get_op_tinfo_ptr
//
// Resolved target: get_op_tinfo
// Target address:  0x8D9428
// GOT/IAT slot:    0x8A42E8
// Slot symbol:     get_op_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .get_op_tinfo(/* see target signature */)
{
    // Tail-call to get_op_tinfo via GOT/IAT indirection
    return get_op_tinfo(/* forwarded args */);
}

