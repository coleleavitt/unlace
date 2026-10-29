// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117EE0
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117EE0 jmp     cs:del_segm_ptr
//
// Resolved target: del_segm
// Target address:  0x8D7770
// GOT/IAT slot:    0x8A2C10
// Slot symbol:     del_segm_ptr
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

