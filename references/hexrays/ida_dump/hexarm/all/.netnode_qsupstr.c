// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D760
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D760 jmp     cs:off_4E9398
//
// Resolved target: netnode_qsupstr
// Target address:  0x4EBD88
// GOT/IAT slot:    0x4E9398
// Slot symbol:     off_4E9398
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

