// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65F0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65F0 jmp     cs:off_242E0
//
// Resolved target: netnode_check
// Target address:  0x260B8
// GOT/IAT slot:    0x242E0
// Slot symbol:     off_242E0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

