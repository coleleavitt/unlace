// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D6C0
// Name:            .netnode_supshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D6C0 jmp     cs:off_4E9348
//
// Resolved target: netnode_supshift
// Target address:  0x4EBD38
// GOT/IAT slot:    0x4E9348
// Slot symbol:     off_4E9348
// Target type:     <no type info>
// ============================================================

void .netnode_supshift(/* see target signature */)
{
    // Tail-call to netnode_supshift via GOT/IAT indirection
    return netnode_supshift(/* forwarded args */);
}

