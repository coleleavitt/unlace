// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35B0
// Name:            .netnode_supprev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35B0 jmp     cs:off_142C0
//
// Resolved target: netnode_supprev
// Target address:  0x148D0
// GOT/IAT slot:    0x142C0
// Slot symbol:     off_142C0
// Target type:     <no type info>
// ============================================================

void .netnode_supprev(/* see target signature */)
{
    // Tail-call to netnode_supprev via GOT/IAT indirection
    return netnode_supprev(/* forwarded args */);
}

