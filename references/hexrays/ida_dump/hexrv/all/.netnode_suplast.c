// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9F0
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9F0 jmp     cs:off_4BFCE0
//
// Resolved target: netnode_suplast
// Target address:  0x4C31F8
// GOT/IAT slot:    0x4BFCE0
// Slot symbol:     off_4BFCE0
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

