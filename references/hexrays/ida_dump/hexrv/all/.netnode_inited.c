// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1A0
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1A0 jmp     cs:off_4BF8B8
//
// Resolved target: netnode_inited
// Target address:  0x4C2DB0
// GOT/IAT slot:    0x4BF8B8
// Slot symbol:     off_4BF8B8
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}

