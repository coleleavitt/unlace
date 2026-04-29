// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3B0
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3B0 jmp     cs:off_4B99C0
//
// Resolved target: get_qword
// Target address:  0x4BC3C0
// GOT/IAT slot:    0x4B99C0
// Slot symbol:     off_4B99C0
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

