// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_5010
//
// Resolved target: get_segm_base
// Target address:  0x5190
// GOT/IAT slot:    0x5010
// Slot symbol:     off_5010
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

