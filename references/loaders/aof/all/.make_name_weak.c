// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .make_name_weak
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_7070
//
// Resolved target: make_name_weak
// Target address:  0x7228
// GOT/IAT slot:    0x7070
// Slot symbol:     off_7070
// Target type:     <no type info>
// ============================================================

void .make_name_weak(/* see target signature */)
{
    // Tail-call to make_name_weak via GOT/IAT indirection
    return make_name_weak(/* forwarded args */);
}

