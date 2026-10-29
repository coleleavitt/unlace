// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA170
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA170 jmp     cs:off_2C7A8A0
//
// Resolved target: add_segm_ex
// Target address:  0x6874C0
// GOT/IAT slot:    0x2C7A8A0
// Slot symbol:     off_2C7A8A0
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

