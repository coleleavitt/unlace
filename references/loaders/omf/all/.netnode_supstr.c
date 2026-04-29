// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_140C8
//
// Resolved target: netnode_supstr
// Target address:  0x146B0
// GOT/IAT slot:    0x140C8
// Slot symbol:     off_140C8
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

