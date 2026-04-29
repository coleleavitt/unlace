// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7B0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7B0 jmp     cs:off_4BFBC0
//
// Resolved target: netnode_check
// Target address:  0x4C30C8
// GOT/IAT slot:    0x4BFBC0
// Slot symbol:     off_4BFBC0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

