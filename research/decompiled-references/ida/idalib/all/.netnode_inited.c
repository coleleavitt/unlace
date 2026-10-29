// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA280
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA280 jmp     cs:off_2C7A928
//
// Resolved target: netnode_inited
// Target address:  0x7AF700
// GOT/IAT slot:    0x2C7A928
// Slot symbol:     off_2C7A928
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}

