// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6360
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6360 jmp     cs:off_24198
//
// Resolved target: netnode_altval
// Target address:  0x25F68
// GOT/IAT slot:    0x24198
// Slot symbol:     off_24198
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

