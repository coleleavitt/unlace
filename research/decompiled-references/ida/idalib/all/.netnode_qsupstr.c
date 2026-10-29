// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A73C0
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A73C0 jmp     cs:off_2C791C8
//
// Resolved target: netnode_qsupstr
// Target address:  0x7BEAA0
// GOT/IAT slot:    0x2C791C8
// Slot symbol:     off_2C791C8
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

