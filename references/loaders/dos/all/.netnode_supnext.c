// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_B120
//
// Resolved target: netnode_supnext
// Target address:  0xB5B8
// GOT/IAT slot:    0xB120
// Slot symbol:     off_B120
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

