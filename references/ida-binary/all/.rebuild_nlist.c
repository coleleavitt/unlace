// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B40
// Name:            .rebuild_nlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B40 jmp     cs:rebuild_nlist_ptr
//
// Resolved target: rebuild_nlist
// Target address:  0x8D56E8
// GOT/IAT slot:    0x8A1240
// Slot symbol:     rebuild_nlist_ptr
// Target type:     <no type info>
// ============================================================

void .rebuild_nlist(/* see target signature */)
{
    // Tail-call to rebuild_nlist via GOT/IAT indirection
    return rebuild_nlist(/* forwarded args */);
}

