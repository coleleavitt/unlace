// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A81C0
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A81C0 jmp     cs:off_2C798C8
//
// Resolved target: netnode_valobj
// Target address:  0x7BF1E0
// GOT/IAT slot:    0x2C798C8
// Slot symbol:     off_2C798C8
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

