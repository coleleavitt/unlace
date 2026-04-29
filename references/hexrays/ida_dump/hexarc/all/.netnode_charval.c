// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2C0
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2C0 jmp     cs:off_4B9948
//
// Resolved target: netnode_charval
// Target address:  0x4BC348
// GOT/IAT slot:    0x4B9948
// Slot symbol:     off_4B9948
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

