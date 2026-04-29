// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A20
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A20 jmp     cs:off_754F8
//
// Resolved target: ea2node
// Target address:  0x75D50
// GOT/IAT slot:    0x754F8
// Slot symbol:     off_754F8
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

