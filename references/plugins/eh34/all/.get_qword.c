// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64A0
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64A0 jmp     cs:off_8D238
//
// Resolved target: get_qword
// Target address:  0x8D7D0
// GOT/IAT slot:    0x8D238
// Slot symbol:     off_8D238
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

