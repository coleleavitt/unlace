// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD70
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD70 jmp     cs:off_4ED6A0
//
// Resolved target: netnode_supnext
// Target address:  0x4F19B0
// GOT/IAT slot:    0x4ED6A0
// Slot symbol:     off_4ED6A0
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

