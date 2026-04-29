// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_150F8
//
// Resolved target: netnode_check
// Target address:  0x152E8
// GOT/IAT slot:    0x150F8
// Slot symbol:     off_150F8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

