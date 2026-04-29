// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4490
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4490 jmp     cs:off_28230
//
// Resolved target: netnode_inited
// Target address:  0x29BC8
// GOT/IAT slot:    0x28230
// Slot symbol:     off_28230
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}

