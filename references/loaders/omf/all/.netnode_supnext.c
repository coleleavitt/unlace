// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32B0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32B0 jmp     cs:off_14140
//
// Resolved target: netnode_supnext
// Target address:  0x14730
// GOT/IAT slot:    0x14140
// Slot symbol:     off_14140
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

