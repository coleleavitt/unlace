// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D9F0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D9F0 jmp     cs:off_4E94E0
//
// Resolved target: netnode_supval
// Target address:  0x4EBEE8
// GOT/IAT slot:    0x4E94E0
// Slot symbol:     off_4E94E0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

