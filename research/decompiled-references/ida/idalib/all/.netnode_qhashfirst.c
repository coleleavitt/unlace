// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9400
// Name:            .netnode_qhashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9400 jmp     cs:off_2C7A1E8
//
// Resolved target: netnode_qhashfirst
// Target address:  0x7BF5A0
// GOT/IAT slot:    0x2C7A1E8
// Slot symbol:     off_2C7A1E8
// Target type:     <no type info>
// ============================================================

void .netnode_qhashfirst(/* see target signature */)
{
    // Tail-call to netnode_qhashfirst via GOT/IAT indirection
    return netnode_qhashfirst(/* forwarded args */);
}

