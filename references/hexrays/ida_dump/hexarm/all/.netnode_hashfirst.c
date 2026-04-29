// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E500
// Name:            .netnode_hashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E500 jmp     cs:off_4E9A68
//
// Resolved target: netnode_hashfirst
// Target address:  0x4EC488
// GOT/IAT slot:    0x4E9A68
// Slot symbol:     off_4E9A68
// Target type:     <no type info>
// ============================================================

void .netnode_hashfirst(/* see target signature */)
{
    // Tail-call to netnode_hashfirst via GOT/IAT indirection
    return netnode_hashfirst(/* forwarded args */);
}

