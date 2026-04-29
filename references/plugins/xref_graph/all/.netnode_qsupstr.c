// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16160
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16160 jmp     cs:off_4F098
//
// Resolved target: netnode_qsupstr
// Target address:  0x4FED0
// GOT/IAT slot:    0x4F098
// Slot symbol:     off_4F098
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

