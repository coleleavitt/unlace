// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B520
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B520 jmp     cs:off_4BFA78
//
// Resolved target: add_segm_ex
// Target address:  0x4C2F70
// GOT/IAT slot:    0x4BFA78
// Slot symbol:     off_4BFA78
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

