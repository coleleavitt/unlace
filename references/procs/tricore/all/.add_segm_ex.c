// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6560
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6560 jmp     cs:off_24298
//
// Resolved target: add_segm_ex
// Target address:  0x26068
// GOT/IAT slot:    0x24298
// Slot symbol:     off_24298
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

