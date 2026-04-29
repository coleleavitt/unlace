// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D260
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D260 jmp     cs:off_B3118
//
// Resolved target: netnode_qsupstr
// Target address:  0xB38A0
// GOT/IAT slot:    0xB3118
// Slot symbol:     off_B3118
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

