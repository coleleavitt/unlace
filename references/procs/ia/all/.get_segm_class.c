// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7280
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7280 jmp     cs:off_26128
//
// Resolved target: get_segm_class
// Target address:  0x263E0
// GOT/IAT slot:    0x26128
// Slot symbol:     off_26128
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

