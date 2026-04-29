// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_5000
//
// Resolved target: set_segm_name
// Target address:  0x5180
// GOT/IAT slot:    0x5000
// Slot symbol:     off_5000
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

