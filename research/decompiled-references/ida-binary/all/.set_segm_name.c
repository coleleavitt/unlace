// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D60
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D60 jmp     cs:set_segm_name_ptr
//
// Resolved target: set_segm_name
// Target address:  0x8D7660
// GOT/IAT slot:    0x8A2B50
// Slot symbol:     set_segm_name_ptr
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

