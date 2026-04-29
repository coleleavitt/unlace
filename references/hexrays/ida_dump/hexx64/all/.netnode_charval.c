// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C380
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C380 jmp     cs:off_4ED9A8
//
// Resolved target: netnode_charval
// Target address:  0x4F1CC8
// GOT/IAT slot:    0x4ED9A8
// Slot symbol:     off_4ED9A8
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

