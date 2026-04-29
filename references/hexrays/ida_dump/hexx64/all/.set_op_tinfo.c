// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1A0
// Name:            .set_op_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1A0 jmp     cs:off_4ED0B8
//
// Resolved target: set_op_tinfo
// Target address:  0x4F13B0
// GOT/IAT slot:    0x4ED0B8
// Slot symbol:     off_4ED0B8
// Target type:     <no type info>
// ============================================================

void .set_op_tinfo(/* see target signature */)
{
    // Tail-call to set_op_tinfo via GOT/IAT indirection
    return set_op_tinfo(/* forwarded args */);
}

