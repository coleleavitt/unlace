// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20370
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20370 jmp     cs:off_951A0
//
// Resolved target: netnode_qsupstr
// Target address:  0x95BD8
// GOT/IAT slot:    0x951A0
// Slot symbol:     off_951A0
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

