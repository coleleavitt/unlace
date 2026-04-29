// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2D0
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2D0 jmp     cs:off_CA150
//
// Resolved target: netnode_qsupstr
// Target address:  0xD0A80
// GOT/IAT slot:    0xCA150
// Slot symbol:     off_CA150
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

