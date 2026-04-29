// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A510
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A510 jmp     cs:off_4B9A70
//
// Resolved target: add_segm_ex
// Target address:  0x4BC470
// GOT/IAT slot:    0x4B9A70
// Slot symbol:     off_4B9A70
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

