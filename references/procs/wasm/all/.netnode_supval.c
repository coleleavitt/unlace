// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9120
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9120 jmp     cs:off_26078
//
// Resolved target: netnode_supval
// Target address:  0x26388
// GOT/IAT slot:    0x26078
// Slot symbol:     off_26078
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

