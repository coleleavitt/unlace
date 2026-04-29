// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A090
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A090 jmp     cs:off_4DA030
//
// Resolved target: set_segm_start
// Target address:  0x4DCA00
// GOT/IAT slot:    0x4DA030
// Slot symbol:     off_4DA030
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

