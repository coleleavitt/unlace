// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .make_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_8130
//
// Resolved target: make_linput
// Target address:  0x8820
// GOT/IAT slot:    0x8130
// Slot symbol:     off_8130
// Target type:     <no type info>
// ============================================================

void .make_linput(/* see target signature */)
{
    // Tail-call to make_linput via GOT/IAT indirection
    return make_linput(/* forwarded args */);
}

