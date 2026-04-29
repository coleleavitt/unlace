// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4D0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4D0 jmp     cs:off_CA250
//
// Resolved target: netnode_supnext
// Target address:  0xD0B88
// GOT/IAT slot:    0xCA250
// Slot symbol:     off_CA250
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

