// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B6D0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B6D0 jmp     cs:netnode_supdel_ptr
//
// Resolved target: netnode_supdel
// Target address:  0x8D9A80
// GOT/IAT slot:    0x8A4808
// Slot symbol:     netnode_supdel_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

