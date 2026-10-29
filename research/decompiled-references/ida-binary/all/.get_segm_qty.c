// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1168D0
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1168D0 jmp     cs:get_segm_qty_ptr
//
// Resolved target: get_segm_qty
// Target address:  0x8D6978
// GOT/IAT slot:    0x8A2108
// Slot symbol:     get_segm_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

