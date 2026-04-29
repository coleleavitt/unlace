// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9220
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9220 jmp     cs:off_260F8
//
// Resolved target: netnode_supfirst
// Target address:  0x26408
// GOT/IAT slot:    0x260F8
// Slot symbol:     off_260F8
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

