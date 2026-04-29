// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A750
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A750 jmp     cs:off_4BF390
//
// Resolved target: netnode_qsupstr
// Target address:  0x4C2858
// GOT/IAT slot:    0x4BF390
// Slot symbol:     off_4BF390
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

