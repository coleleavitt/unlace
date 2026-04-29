// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_B158
//
// Resolved target: netnode_supfirst
// Target address:  0xB5F0
// GOT/IAT slot:    0xB158
// Slot symbol:     off_B158
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

