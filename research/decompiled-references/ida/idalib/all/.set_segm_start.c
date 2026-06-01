// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA20
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA20 jmp     cs:off_2C7BCF8
//
// Resolved target: set_segm_start
// Target address:  0x686810
// GOT/IAT slot:    0x2C7BCF8
// Slot symbol:     off_2C7BCF8
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

