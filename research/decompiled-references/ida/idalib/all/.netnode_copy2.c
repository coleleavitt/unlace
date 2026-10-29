// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD660
// Name:            .netnode_copy2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD660 jmp     cs:off_2C7C318
//
// Resolved target: netnode_copy2
// Target address:  0x7BF7F0
// GOT/IAT slot:    0x2C7C318
// Slot symbol:     off_2C7C318
// Target type:     <no type info>
// ============================================================

void .netnode_copy2(/* see target signature */)
{
    // Tail-call to netnode_copy2 via GOT/IAT indirection
    return netnode_copy2(/* forwarded args */);
}

