// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3250
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3250 jmp     cs:off_20110
//
// Resolved target: qerrstr
// Target address:  0x21A20
// GOT/IAT slot:    0x20110
// Slot symbol:     off_20110
// Target type:     <no type info>
// ============================================================

void .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}

