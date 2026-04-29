// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2450
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2450 jmp     cs:off_B210
//
// Resolved target: netnode_valobj
// Target address:  0xB6B0
// GOT/IAT slot:    0xB210
// Slot symbol:     off_B210
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

