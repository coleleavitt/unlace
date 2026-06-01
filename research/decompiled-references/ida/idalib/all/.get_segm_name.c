// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9370
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9370 jmp     cs:off_2C7A1A0
//
// Resolved target: get_segm_name
// Target address:  0x510C00
// GOT/IAT slot:    0x2C7A1A0
// Slot symbol:     off_2C7A1A0
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

