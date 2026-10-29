// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A71C0
// Name:            .netnode_supshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A71C0 jmp     cs:off_2C790C8
//
// Resolved target: netnode_supshift
// Target address:  0x7BEDE0
// GOT/IAT slot:    0x2C790C8
// Slot symbol:     off_2C790C8
// Target type:     <no type info>
// ============================================================

void .netnode_supshift(/* see target signature */)
{
    // Tail-call to netnode_supshift via GOT/IAT indirection
    return netnode_supshift(/* forwarded args */);
}

