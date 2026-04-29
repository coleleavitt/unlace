// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_B0D8
//
// Resolved target: netnode_set
// Target address:  0xB370
// GOT/IAT slot:    0xB0D8
// Slot symbol:     off_B0D8
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}

