// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3030
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3030 jmp     cs:off_14000
//
// Resolved target: set_segm_start
// Target address:  0x145E8
// GOT/IAT slot:    0x14000
// Slot symbol:     off_14000
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

