// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B090
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B090 jmp     cs:off_4ED030
//
// Resolved target: set_segm_start
// Target address:  0x4F1328
// GOT/IAT slot:    0x4ED030
// Slot symbol:     off_4ED030
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

