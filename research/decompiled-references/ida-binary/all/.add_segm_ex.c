// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115DF0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115DF0 jmp     cs:add_segm_ex_ptr
//
// Resolved target: add_segm_ex
// Target address:  0x8D6268
// GOT/IAT slot:    0x8A1B98
// Slot symbol:     add_segm_ex_ptr
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

