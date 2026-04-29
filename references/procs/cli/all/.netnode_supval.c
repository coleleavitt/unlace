// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3130
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3130 jmp     cs:off_1A080
//
// Resolved target: netnode_supval
// Target address:  0x1A338
// GOT/IAT slot:    0x1A080
// Slot symbol:     off_1A080
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

