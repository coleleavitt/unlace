// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C810
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C810 jmp     cs:off_4EDBF0
//
// Resolved target: netnode_valobj
// Target address:  0x4F1F28
// GOT/IAT slot:    0x4EDBF0
// Slot symbol:     off_4EDBF0
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

