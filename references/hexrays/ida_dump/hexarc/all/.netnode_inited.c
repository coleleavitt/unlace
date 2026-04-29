// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A190
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A190 jmp     cs:off_4B98B0
//
// Resolved target: netnode_inited
// Target address:  0x4BC2B0
// GOT/IAT slot:    0x4B98B0
// Slot symbol:     off_4B98B0
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}

