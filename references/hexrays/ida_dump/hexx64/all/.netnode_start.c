// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B990
// Name:            .netnode_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B990 jmp     cs:off_4ED4B0
//
// Resolved target: netnode_start
// Target address:  0x4F17B0
// GOT/IAT slot:    0x4ED4B0
// Slot symbol:     off_4ED4B0
// Target type:     <no type info>
// ============================================================

void .netnode_start(/* see target signature */)
{
    // Tail-call to netnode_start via GOT/IAT indirection
    return netnode_start(/* forwarded args */);
}

