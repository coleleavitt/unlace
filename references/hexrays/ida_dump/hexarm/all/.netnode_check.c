// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E7F0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E7F0 jmp     cs:off_4E9BE0
//
// Resolved target: netnode_check
// Target address:  0x4EC610
// GOT/IAT slot:    0x4E9BE0
// Slot symbol:     off_4E9BE0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

