// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6590
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6590 jmp     cs:off_2D2B0
//
// Resolved target: netnode_check
// Target address:  0x2D7B8
// GOT/IAT slot:    0x2D2B0
// Slot symbol:     off_2D2B0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

