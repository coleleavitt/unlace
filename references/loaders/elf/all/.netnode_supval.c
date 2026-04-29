// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9360
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9360 jmp     cs:off_89198
//
// Resolved target: netnode_supval
// Target address:  0x8C498
// GOT/IAT slot:    0x89198
// Slot symbol:     off_89198
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

