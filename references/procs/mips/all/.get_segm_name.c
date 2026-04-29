// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AE0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AE0 jmp     cs:off_75558
//
// Resolved target: get_segm_name
// Target address:  0x75DB8
// GOT/IAT slot:    0x75558
// Slot symbol:     off_75558
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

