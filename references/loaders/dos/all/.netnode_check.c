// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2470
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2470 jmp     cs:off_B220
//
// Resolved target: netnode_check
// Target address:  0xB6C0
// GOT/IAT slot:    0xB220
// Slot symbol:     off_B220
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

