// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA9E0
// Name:            .make_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA9E0 jmp     cs:off_2C7ACD8
//
// Resolved target: make_linput
// Target address:  0x8373E0
// GOT/IAT slot:    0x2C7ACD8
// Slot symbol:     off_2C7ACD8
// Target type:     <no type info>
// ============================================================

void .make_linput(/* see target signature */)
{
    // Tail-call to make_linput via GOT/IAT indirection
    return make_linput(/* forwarded args */);
}

