// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE00
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE00 jmp     cs:off_4E96E8
//
// Resolved target: netnode_altval
// Target address:  0x4EC100
// GOT/IAT slot:    0x4E96E8
// Slot symbol:     off_4E96E8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

