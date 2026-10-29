// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA140
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA140 jmp     cs:off_2C7A888
//
// Resolved target: is_spec_segm
// Target address:  0x510750
// GOT/IAT slot:    0x2C7A888
// Slot symbol:     off_2C7A888
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

