// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA760
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA760 jmp     cs:off_CA398
//
// Resolved target: netnode_charval
// Target address:  0xD0CD0
// GOT/IAT slot:    0xCA398
// Slot symbol:     off_CA398
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

