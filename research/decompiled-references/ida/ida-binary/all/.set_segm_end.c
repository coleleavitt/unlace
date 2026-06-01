// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115680
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115680 jmp     cs:set_segm_end_ptr
//
// Resolved target: set_segm_end
// Target address:  0x8D5DC8
// GOT/IAT slot:    0x8A17E0
// Slot symbol:     set_segm_end_ptr
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

