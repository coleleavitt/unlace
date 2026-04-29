// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x296B0
// Name:            .netnode_supshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x296B0 jmp     cs:off_4B9340
//
// Resolved target: netnode_supshift
// Target address:  0x4BBD10
// GOT/IAT slot:    0x4B9340
// Slot symbol:     off_4B9340
// Target type:     <no type info>
// ============================================================

void .netnode_supshift(/* see target signature */)
{
    // Tail-call to netnode_supshift via GOT/IAT indirection
    return netnode_supshift(/* forwarded args */);
}

