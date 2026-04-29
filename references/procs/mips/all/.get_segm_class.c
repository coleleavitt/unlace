// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198A0
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198A0 jmp     cs:off_75438
//
// Resolved target: get_segm_class
// Target address:  0x75C88
// GOT/IAT slot:    0x75438
// Slot symbol:     off_75438
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

