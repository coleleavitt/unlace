// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_B100
//
// Resolved target: netnode_altshift
// Target address:  0xB598
// GOT/IAT slot:    0xB100
// Slot symbol:     off_B100
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

