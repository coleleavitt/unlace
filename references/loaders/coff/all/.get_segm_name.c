// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4660
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4660 jmp     cs:off_23318
//
// Resolved target: get_segm_name
// Target address:  0x23748
// GOT/IAT slot:    0x23318
// Slot symbol:     off_23318
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

