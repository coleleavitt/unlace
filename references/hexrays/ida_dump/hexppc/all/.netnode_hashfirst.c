// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4C0
// Name:            .netnode_hashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4C0 jmp     cs:off_4DAA48
//
// Resolved target: netnode_hashfirst
// Target address:  0x4DD448
// GOT/IAT slot:    0x4DAA48
// Slot symbol:     off_4DAA48
// Target type:     <no type info>
// ============================================================

void .netnode_hashfirst(/* see target signature */)
{
    // Tail-call to netnode_hashfirst via GOT/IAT indirection
    return netnode_hashfirst(/* forwarded args */);
}

