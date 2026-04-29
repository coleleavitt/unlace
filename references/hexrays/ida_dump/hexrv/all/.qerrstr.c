// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB50
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB50 jmp     cs:off_4BF590
//
// Resolved target: qerrstr
// Target address:  0x4C2A78
// GOT/IAT slot:    0x4BF590
// Slot symbol:     off_4BF590
// Target type:     <no type info>
// ============================================================

void .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}

