// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB70
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB70 jmp     cs:off_4E95A0
//
// Resolved target: qerrstr
// Target address:  0x4EBFB0
// GOT/IAT slot:    0x4E95A0
// Slot symbol:     off_4E95A0
// Target type:     <no type info>
// ============================================================

void .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}

