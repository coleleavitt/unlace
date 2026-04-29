// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE50
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE50 jmp     cs:off_4ED710
//
// Resolved target: netnode_set
// Target address:  0x4F1A20
// GOT/IAT slot:    0x4ED710
// Slot symbol:     off_4ED710
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}

