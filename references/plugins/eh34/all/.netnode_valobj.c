// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6560
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6560 jmp     cs:off_8D298
//
// Resolved target: netnode_valobj
// Target address:  0x8D840
// GOT/IAT slot:    0x8D298
// Slot symbol:     off_8D298
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

