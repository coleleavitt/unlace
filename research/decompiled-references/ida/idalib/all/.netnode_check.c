// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC5D0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC5D0 jmp     cs:off_2C7BAD0
//
// Resolved target: netnode_check
// Target address:  0x7BF090
// GOT/IAT slot:    0x2C7BAD0
// Slot symbol:     off_2C7BAD0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

