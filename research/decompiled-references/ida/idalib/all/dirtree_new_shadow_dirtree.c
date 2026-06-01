// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7802E0
// Name:            dirtree_new_shadow_dirtree
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7802E0 jmp     dirtree_new_shadow_dirtree_0
//
// Resolved target: dirtree_new_shadow_dirtree_0
// Target address:  0x77FEF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 *__fastcall(_QWORD *)
// ============================================================

/* see target sig */ dirtree_new_shadow_dirtree(/* see target signature */)
{
    // Tail-call to dirtree_new_shadow_dirtree_0 via direct jump indirection
    return dirtree_new_shadow_dirtree_0(/* forwarded args */);
}

