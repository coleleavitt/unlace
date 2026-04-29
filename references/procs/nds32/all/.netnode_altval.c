// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8320
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8320 jmp     cs:off_2A178
//
// Resolved target: netnode_altval
// Target address:  0x2A6E8
// GOT/IAT slot:    0x2A178
// Slot symbol:     off_2A178
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

