// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114750
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114750 jmp     cs:ea2node_ptr
//
// Resolved target: ea2node
// Target address:  0x8D5400
// GOT/IAT slot:    0x8A1048
// Slot symbol:     ea2node_ptr
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

