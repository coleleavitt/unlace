// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5170
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5170 jmp     cs:off_1A0A0
//
// Resolved target: netnode_qsupstr
// Target address:  0x1A428
// GOT/IAT slot:    0x1A0A0
// Slot symbol:     off_1A0A0
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

