// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30F0
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30F0 jmp     cs:off_1A060
//
// Resolved target: netnode_supstr
// Target address:  0x1A318
// GOT/IAT slot:    0x1A060
// Slot symbol:     off_1A060
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

