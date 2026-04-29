// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4150
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4150 jmp     cs:off_1F090
//
// Resolved target: netnode_supval
// Target address:  0x1F340
// GOT/IAT slot:    0x1F090
// Slot symbol:     off_1F090
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

