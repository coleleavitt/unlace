// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_13008
//
// Resolved target: set_segm_name
// Target address:  0x13380
// GOT/IAT slot:    0x13008
// Slot symbol:     off_13008
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

