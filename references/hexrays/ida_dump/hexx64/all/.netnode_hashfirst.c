// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C580
// Name:            .netnode_hashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C580 jmp     cs:off_4EDAA8
//
// Resolved target: netnode_hashfirst
// Target address:  0x4F1DD0
// GOT/IAT slot:    0x4EDAA8
// Slot symbol:     off_4EDAA8
// Target type:     <no type info>
// ============================================================

void .netnode_hashfirst(/* see target signature */)
{
    // Tail-call to netnode_hashfirst via GOT/IAT indirection
    return netnode_hashfirst(/* forwarded args */);
}

