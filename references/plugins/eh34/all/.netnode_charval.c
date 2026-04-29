// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6480
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6480 jmp     cs:off_8D228
//
// Resolved target: netnode_charval
// Target address:  0x8D7C0
// GOT/IAT slot:    0x8D228
// Slot symbol:     off_8D228
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

