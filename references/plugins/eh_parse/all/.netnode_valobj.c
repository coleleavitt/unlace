// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6710
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6710 jmp     cs:off_2F370
//
// Resolved target: netnode_valobj
// Target address:  0x2F9E8
// GOT/IAT slot:    0x2F370
// Slot symbol:     off_2F370
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

