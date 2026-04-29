// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEB0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEB0 jmp     cs:off_4C0F40
//
// Resolved target: netnode_supset
// Target address:  0x4C3F68
// GOT/IAT slot:    0x4C0F40
// Slot symbol:     off_4C0F40
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

