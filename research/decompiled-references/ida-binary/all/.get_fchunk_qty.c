// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD70
// Name:            .get_fchunk_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD70 jmp     cs:get_fchunk_qty_ptr
//
// Resolved target: get_fchunk_qty
// Target address:  0x8D94A8
// GOT/IAT slot:    0x8A4358
// Slot symbol:     get_fchunk_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_fchunk_qty(/* see target signature */)
{
    // Tail-call to get_fchunk_qty via GOT/IAT indirection
    return get_fchunk_qty(/* forwarded args */);
}

