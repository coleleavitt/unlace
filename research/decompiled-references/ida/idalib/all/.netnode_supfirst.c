// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACAC0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACAC0 jmp     cs:off_2C7BD48
//
// Resolved target: netnode_supfirst
// Target address:  0x7BEBA0
// GOT/IAT slot:    0x2C7BD48
// Slot symbol:     off_2C7BD48
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

