// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20980
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20980 jmp     cs:off_954A8
//
// Resolved target: netnode_charval
// Target address:  0x95EE0
// GOT/IAT slot:    0x954A8
// Slot symbol:     off_954A8
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

