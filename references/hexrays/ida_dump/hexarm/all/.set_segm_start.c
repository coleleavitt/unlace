// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D090
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D090 jmp     cs:off_4E9030
//
// Resolved target: set_segm_start
// Target address:  0x4EBA20
// GOT/IAT slot:    0x4E9030
// Slot symbol:     off_4E9030
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

