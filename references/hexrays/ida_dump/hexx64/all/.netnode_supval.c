// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA10
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA10 jmp     cs:off_4ED4F0
//
// Resolved target: netnode_supval
// Target address:  0x4F17F0
// GOT/IAT slot:    0x4ED4F0
// Slot symbol:     off_4ED4F0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

