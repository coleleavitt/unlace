// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA980
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA980 jmp     cs:off_CA4A8
//
// Resolved target: netnode_check
// Target address:  0xD0DF0
// GOT/IAT slot:    0xCA4A8
// Slot symbol:     off_CA4A8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

