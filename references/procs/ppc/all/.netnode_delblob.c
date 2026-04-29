// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20820
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20820 jmp     cs:off_953F8
//
// Resolved target: netnode_delblob
// Target address:  0x95E30
// GOT/IAT slot:    0x953F8
// Slot symbol:     off_953F8
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

