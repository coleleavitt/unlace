// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2420
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2420 jmp     cs:off_B1F8
//
// Resolved target: get_segm_qty
// Target address:  0xB690
// GOT/IAT slot:    0xB1F8
// Slot symbol:     off_B1F8
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

