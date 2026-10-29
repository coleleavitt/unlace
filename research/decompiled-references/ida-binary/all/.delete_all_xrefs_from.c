// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD60
// Name:            .delete_all_xrefs_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD60 jmp     cs:delete_all_xrefs_from_ptr
//
// Resolved target: delete_all_xrefs_from
// Target address:  0x8D94A0
// GOT/IAT slot:    0x8A4350
// Slot symbol:     delete_all_xrefs_from_ptr
// Target type:     <no type info>
// ============================================================

void .delete_all_xrefs_from(/* see target signature */)
{
    // Tail-call to delete_all_xrefs_from via GOT/IAT indirection
    return delete_all_xrefs_from(/* forwarded args */);
}

