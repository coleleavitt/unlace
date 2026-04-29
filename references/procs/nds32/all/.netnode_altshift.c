// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8250
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8250 jmp     cs:off_2A110
//
// Resolved target: netnode_altshift
// Target address:  0x2A680
// GOT/IAT slot:    0x2A110
// Slot symbol:     off_2A110
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

