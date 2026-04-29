// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29EF0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29EF0 jmp     cs:off_4B9760
//
// Resolved target: netnode_supfirst
// Target address:  0x4BC158
// GOT/IAT slot:    0x4B9760
// Slot symbol:     off_4B9760
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

