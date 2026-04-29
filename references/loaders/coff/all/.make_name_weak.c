// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4230
// Name:            .make_name_weak
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4230 jmp     cs:off_23100
//
// Resolved target: make_name_weak
// Target address:  0x23520
// GOT/IAT slot:    0x23100
// Slot symbol:     off_23100
// Target type:     <no type info>
// ============================================================

void .make_name_weak(/* see target signature */)
{
    // Tail-call to make_name_weak via GOT/IAT indirection
    return make_name_weak(/* forwarded args */);
}

