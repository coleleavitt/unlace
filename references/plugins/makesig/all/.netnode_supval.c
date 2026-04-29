// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31F0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31F0 jmp     cs:off_200E0
//
// Resolved target: netnode_supval
// Target address:  0x219F0
// GOT/IAT slot:    0x200E0
// Slot symbol:     off_200E0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

