// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113DA0
// Name:            .del_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113DA0 jmp     cs:del_cref_ptr
//
// Resolved target: del_cref
// Target address:  0x8D4DE0
// GOT/IAT slot:    0x8A0B70
// Slot symbol:     del_cref_ptr
// Target type:     <no type info>
// ============================================================

void .del_cref(/* see target signature */)
{
    // Tail-call to del_cref via GOT/IAT indirection
    return del_cref(/* forwarded args */);
}

