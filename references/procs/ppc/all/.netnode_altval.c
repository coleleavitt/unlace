// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20680
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20680 jmp     cs:off_95328
//
// Resolved target: netnode_altval
// Target address:  0x95D60
// GOT/IAT slot:    0x95328
// Slot symbol:     off_95328
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

