// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEB0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEB0 jmp     cs:off_4CDF40
//
// Resolved target: netnode_supset
// Target address:  0x4D0990
// GOT/IAT slot:    0x4CDF40
// Slot symbol:     off_4CDF40
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

