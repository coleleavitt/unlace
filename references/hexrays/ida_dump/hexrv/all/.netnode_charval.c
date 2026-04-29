// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2C0
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2C0 jmp     cs:off_4BF948
//
// Resolved target: netnode_charval
// Target address:  0x4C2E40
// GOT/IAT slot:    0x4BF948
// Slot symbol:     off_4BF948
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

