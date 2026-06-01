// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD6C0
// Name:            .netnode_qhashprev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD6C0 jmp     cs:off_2C7C348
//
// Resolved target: netnode_qhashprev
// Target address:  0x7BF6E0
// GOT/IAT slot:    0x2C7C348
// Slot symbol:     off_2C7C348
// Target type:     <no type info>
// ============================================================

void .netnode_qhashprev(/* see target signature */)
{
    // Tail-call to netnode_qhashprev via GOT/IAT indirection
    return netnode_qhashprev(/* forwarded args */);
}

