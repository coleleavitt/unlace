// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66B0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66B0 jmp     cs:off_8D340
//
// Resolved target: netnode_supset
// Target address:  0x8D900
// GOT/IAT slot:    0x8D340
// Slot symbol:     off_8D340
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

