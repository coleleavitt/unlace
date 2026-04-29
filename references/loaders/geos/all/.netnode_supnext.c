// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_80C8
//
// Resolved target: netnode_supnext
// Target address:  0x8328
// GOT/IAT slot:    0x80C8
// Slot symbol:     off_80C8
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

