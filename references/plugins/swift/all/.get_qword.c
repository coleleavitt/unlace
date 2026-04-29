// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4500
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4500 jmp     cs:off_28268
//
// Resolved target: get_qword
// Target address:  0x29C00
// GOT/IAT slot:    0x28268
// Slot symbol:     off_28268
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

