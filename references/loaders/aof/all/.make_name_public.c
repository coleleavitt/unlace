// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .make_name_public
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_7060
//
// Resolved target: make_name_public
// Target address:  0x7218
// GOT/IAT slot:    0x7060
// Slot symbol:     off_7060
// Target type:     <no type info>
// ============================================================

void .make_name_public(/* see target signature */)
{
    // Tail-call to make_name_public via GOT/IAT indirection
    return make_name_public(/* forwarded args */);
}

