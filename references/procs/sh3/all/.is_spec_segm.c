// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5180
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5180 jmp     cs:off_150A8
//
// Resolved target: is_spec_segm
// Target address:  0x16138
// GOT/IAT slot:    0x150A8
// Slot symbol:     off_150A8
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

