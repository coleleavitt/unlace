// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD20
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD20 jmp     cs:off_4CD678
//
// Resolved target: netnode_supnext
// Target address:  0x4D0090
// GOT/IAT slot:    0x4CD678
// Slot symbol:     off_4CD678
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

