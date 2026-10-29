// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7230
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7230 jmp     cs:off_2C79100
//
// Resolved target: get_segm_class
// Target address:  0x510540
// GOT/IAT slot:    0x2C79100
// Slot symbol:     off_2C79100
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

