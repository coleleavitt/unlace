// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x297A0
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x297A0 jmp     cs:off_4B93B8
//
// Resolved target: is_spec_segm
// Target address:  0x4BBD88
// GOT/IAT slot:    0x4B93B8
// Slot symbol:     off_4B93B8
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

