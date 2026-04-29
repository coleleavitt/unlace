// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .make_name_weak
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_8068
//
// Resolved target: make_name_weak
// Target address:  0x8258
// GOT/IAT slot:    0x8068
// Slot symbol:     off_8068
// Target type:     <no type info>
// ============================================================

void .make_name_weak(/* see target signature */)
{
    // Tail-call to make_name_weak via GOT/IAT indirection
    return make_name_weak(/* forwarded args */);
}

