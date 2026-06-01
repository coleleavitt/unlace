// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113290
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113290 jmp     cs:qerrstr_ptr
//
// Resolved target: qerrstr
// Target address:  0x8D46D8
// GOT/IAT slot:    0x8A05E8
// Slot symbol:     qerrstr_ptr
// Target type:     <no type info>
// ============================================================

void .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}

