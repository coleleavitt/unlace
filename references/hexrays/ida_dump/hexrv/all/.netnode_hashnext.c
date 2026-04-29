// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0D0
// Name:            .netnode_hashnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0D0 jmp     cs:off_4BF050
//
// Resolved target: netnode_hashnext
// Target address:  0x4C2518
// GOT/IAT slot:    0x4BF050
// Slot symbol:     off_4BF050
// Target type:     <no type info>
// ============================================================

void .netnode_hashnext(/* see target signature */)
{
    // Tail-call to netnode_hashnext via GOT/IAT indirection
    return netnode_hashnext(/* forwarded args */);
}

