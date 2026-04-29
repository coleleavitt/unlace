// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6570
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6570 jmp     cs:off_8D2A0
//
// Resolved target: netnode_check
// Target address:  0x8D848
// GOT/IAT slot:    0x8D2A0
// Slot symbol:     off_8D2A0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

