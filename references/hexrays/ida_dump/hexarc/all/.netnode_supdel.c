// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA0 jmp     cs:off_4B9DB8
//
// Resolved target: netnode_supdel
// Target address:  0x4BC7D8
// GOT/IAT slot:    0x4B9DB8
// Slot symbol:     off_4B9DB8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

