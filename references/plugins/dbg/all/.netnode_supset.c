// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3580
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3580 jmp     cs:off_132A8
//
// Resolved target: netnode_supset
// Target address:  0x13648
// GOT/IAT slot:    0x132A8
// Slot symbol:     off_132A8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

