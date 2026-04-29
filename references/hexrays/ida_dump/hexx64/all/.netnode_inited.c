// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C250
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C250 jmp     cs:off_4ED910
//
// Resolved target: netnode_inited
// Target address:  0x4F1C30
// GOT/IAT slot:    0x4ED910
// Slot symbol:     off_4ED910
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}

