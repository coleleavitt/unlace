// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0D0
// Name:            .netnode_hashnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0D0 jmp     cs:off_4C0050
//
// Resolved target: netnode_hashnext
// Target address:  0x4C3018
// GOT/IAT slot:    0x4C0050
// Slot symbol:     off_4C0050
// Target type:     <no type info>
// ============================================================

void .netnode_hashnext(/* see target signature */)
{
    // Tail-call to netnode_hashnext via GOT/IAT indirection
    return netnode_hashnext(/* forwarded args */);
}

