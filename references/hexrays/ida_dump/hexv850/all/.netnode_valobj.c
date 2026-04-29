// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B750
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B750 jmp     cs:off_4C0B90
//
// Resolved target: netnode_valobj
// Target address:  0x4C3B98
// GOT/IAT slot:    0x4C0B90
// Slot symbol:     off_4C0B90
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

