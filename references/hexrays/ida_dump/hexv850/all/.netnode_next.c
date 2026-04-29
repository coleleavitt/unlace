// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5F0
// Name:            .netnode_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5F0 jmp     cs:off_4C02E0
//
// Resolved target: netnode_next
// Target address:  0x4C32A8
// GOT/IAT slot:    0x4C02E0
// Slot symbol:     off_4C02E0
// Target type:     <no type info>
// ============================================================

void .netnode_next(/* see target signature */)
{
    // Tail-call to netnode_next via GOT/IAT indirection
    return netnode_next(/* forwarded args */);
}

