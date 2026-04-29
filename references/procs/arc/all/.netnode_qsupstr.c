// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8200
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8200 jmp     cs:off_2A0E8
//
// Resolved target: netnode_qsupstr
// Target address:  0x2BAF8
// GOT/IAT slot:    0x2A0E8
// Slot symbol:     off_2A0E8
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

