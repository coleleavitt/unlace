// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA00
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA00 jmp     cs:off_4CDCE8
//
// Resolved target: netnode_suplast
// Target address:  0x4D0728
// GOT/IAT slot:    0x4CDCE8
// Slot symbol:     off_4CDCE8
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

