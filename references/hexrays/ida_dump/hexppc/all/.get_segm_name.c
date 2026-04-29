// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB30
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB30 jmp     cs:off_4DAD80
//
// Resolved target: get_segm_name
// Target address:  0x4DD7A0
// GOT/IAT slot:    0x4DAD80
// Slot symbol:     off_4DAD80
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

