// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_A100
//
// Resolved target: get_segm_qty
// Target address:  0xB3D0
// GOT/IAT slot:    0xA100
// Slot symbol:     off_A100
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

