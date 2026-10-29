// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B860
// Name:            .make_name_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B860 jmp     cs:make_name_auto_ptr
//
// Resolved target: make_name_auto
// Target address:  0x8D9B78
// GOT/IAT slot:    0x8A48D0
// Slot symbol:     make_name_auto_ptr
// Target type:     <no type info>
// ============================================================

void .make_name_auto(/* see target signature */)
{
    // Tail-call to make_name_auto via GOT/IAT indirection
    return make_name_auto(/* forwarded args */);
}

