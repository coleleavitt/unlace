// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A720
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A720 jmp     cs:off_4B9B78
//
// Resolved target: netnode_valobj
// Target address:  0x4BC588
// GOT/IAT slot:    0x4B9B78
// Slot symbol:     off_4B9B78
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

