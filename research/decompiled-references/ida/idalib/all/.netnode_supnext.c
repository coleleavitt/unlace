// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD20
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD20 jmp     cs:off_2C7AE78
//
// Resolved target: netnode_supnext
// Target address:  0x7BEC10
// GOT/IAT slot:    0x2C7AE78
// Slot symbol:     off_2C7AE78
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

