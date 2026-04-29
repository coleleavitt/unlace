// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E780
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E780 jmp     cs:off_4E9BA8
//
// Resolved target: netnode_valobj
// Target address:  0x4EC5D8
// GOT/IAT slot:    0x4E9BA8
// Slot symbol:     off_4E9BA8
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

