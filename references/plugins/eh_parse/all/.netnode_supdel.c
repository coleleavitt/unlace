// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6830
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6830 jmp     cs:off_2F400
//
// Resolved target: netnode_supdel
// Target address:  0x2FA80
// GOT/IAT slot:    0x2F400
// Slot symbol:     off_2F400
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

