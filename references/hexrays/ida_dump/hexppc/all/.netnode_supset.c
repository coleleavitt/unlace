// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEA0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEA0 jmp     cs:off_4DAF38
//
// Resolved target: netnode_supset
// Target address:  0x4DD968
// GOT/IAT slot:    0x4DAF38
// Slot symbol:     off_4DAF38
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

