// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B780
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B780 jmp     cs:off_4ED3A8
//
// Resolved target: netnode_qsupstr
// Target address:  0x4F16A0
// GOT/IAT slot:    0x4ED3A8
// Slot symbol:     off_4ED3A8
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

