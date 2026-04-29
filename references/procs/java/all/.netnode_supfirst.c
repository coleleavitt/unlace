// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63B0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63B0 jmp     cs:off_2D1C0
//
// Resolved target: netnode_supfirst
// Target address:  0x2D6C0
// GOT/IAT slot:    0x2D1C0
// Slot symbol:     off_2D1C0
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

