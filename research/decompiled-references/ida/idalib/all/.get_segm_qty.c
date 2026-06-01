// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA7B0
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA7B0 jmp     cs:off_2C7ABC0
//
// Resolved target: get_segm_qty
// Target address:  0x50E1F0
// GOT/IAT slot:    0x2C7ABC0
// Slot symbol:     off_2C7ABC0
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

