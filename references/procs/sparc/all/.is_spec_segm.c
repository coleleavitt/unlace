// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7180
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7180 jmp     cs:off_190A8
//
// Resolved target: is_spec_segm
// Target address:  0x195D8
// GOT/IAT slot:    0x190A8
// Slot symbol:     off_190A8
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

