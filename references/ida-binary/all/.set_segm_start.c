// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A170
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A170 jmp     cs:set_segm_start_ptr
//
// Resolved target: set_segm_start
// Target address:  0x8D8D00
// GOT/IAT slot:    0x8A3D58
// Slot symbol:     set_segm_start_ptr
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

