// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB3C0
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB3C0 jmp     cs:off_2C7B1C8
//
// Resolved target: set_segm_name
// Target address:  0x685470
// GOT/IAT slot:    0x2C7B1C8
// Slot symbol:     off_2C7B1C8
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

