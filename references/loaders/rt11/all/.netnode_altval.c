// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_5068
//
// Resolved target: netnode_altval
// Target address:  0x51E8
// GOT/IAT slot:    0x5068
// Slot symbol:     off_5068
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

