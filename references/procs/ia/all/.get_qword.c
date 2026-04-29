// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7270
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7270 jmp     cs:off_26120
//
// Resolved target: get_qword
// Target address:  0x263D8
// GOT/IAT slot:    0x26120
// Slot symbol:     off_26120
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

