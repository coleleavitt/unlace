// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_13100
//
// Resolved target: qerrstr
// Target address:  0x13478
// GOT/IAT slot:    0x13100
// Slot symbol:     off_13100
// Target type:     <no type info>
// ============================================================

void .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}

