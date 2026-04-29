// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4120
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4120 jmp     cs:off_1F078
//
// Resolved target: netnode_qsupstr
// Target address:  0x1F328
// GOT/IAT slot:    0x1F078
// Slot symbol:     off_1F078
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

