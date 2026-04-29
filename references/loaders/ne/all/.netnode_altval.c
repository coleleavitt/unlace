// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_B0D0
//
// Resolved target: netnode_altval
// Target address:  0xB368
// GOT/IAT slot:    0xB0D0
// Slot symbol:     off_B0D0
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

