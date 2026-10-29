// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116BE0
// Name:            .make_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116BE0 jmp     cs:make_linput_ptr
//
// Resolved target: make_linput
// Target address:  0x8D6B50
// GOT/IAT slot:    0x8A2290
// Slot symbol:     make_linput_ptr
// Target type:     <no type info>
// ============================================================

void .make_linput(/* see target signature */)
{
    // Tail-call to make_linput via GOT/IAT indirection
    return make_linput(/* forwarded args */);
}

