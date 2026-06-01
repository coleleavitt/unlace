// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A490
// Name:            .set_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A490 jmp     cs:set_op_tinfo_ptr
//
// Resolved target: set_op_tinfo
// Target address:  0x8D8EF8
// GOT/IAT slot:    0x8A3EE8
// Slot symbol:     set_op_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .set_op_tinfo(/* see target signature */)
{
    // Tail-call to set_op_tinfo via GOT/IAT indirection
    return set_op_tinfo(/* forwarded args */);
}

