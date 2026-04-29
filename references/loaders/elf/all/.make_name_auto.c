// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9AF0
// Name:            .make_name_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9AF0 jmp     cs:off_89560
//
// Resolved target: make_name_auto
// Target address:  0x8C890
// GOT/IAT slot:    0x89560
// Slot symbol:     off_89560
// Target type:     <no type info>
// ============================================================

void .make_name_auto(/* see target signature */)
{
    // Tail-call to make_name_auto via GOT/IAT indirection
    return make_name_auto(/* forwarded args */);
}

