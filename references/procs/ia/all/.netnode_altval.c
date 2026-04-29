// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71B0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71B0 jmp     cs:off_260C0
//
// Resolved target: netnode_altval
// Target address:  0x26378
// GOT/IAT slot:    0x260C0
// Slot symbol:     off_260C0
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

