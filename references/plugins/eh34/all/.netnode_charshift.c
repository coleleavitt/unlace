// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64E0
// Name:            .netnode_charshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64E0 jmp     cs:off_8D258
//
// Resolved target: netnode_charshift
// Target address:  0x8D7F0
// GOT/IAT slot:    0x8D258
// Slot symbol:     off_8D258
// Target type:     <no type info>
// ============================================================

void .netnode_charshift(/* see target signature */)
{
    // Tail-call to netnode_charshift via GOT/IAT indirection
    return netnode_charshift(/* forwarded args */);
}

