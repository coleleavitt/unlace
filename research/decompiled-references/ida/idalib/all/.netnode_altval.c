// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB960
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB960 jmp     cs:off_2C7B498
//
// Resolved target: netnode_altval
// Target address:  0x7BE730
// GOT/IAT slot:    0x2C7B498
// Slot symbol:     off_2C7B498
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

