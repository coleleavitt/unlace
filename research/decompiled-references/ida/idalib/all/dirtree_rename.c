// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77A1B0
// Name:            dirtree_rename
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x77A1B0 jmp     dirtree_rename_0
//
// Resolved target: dirtree_rename_0
// Target address:  0x779270
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, void *, __int64)
// ============================================================

/* see target sig */ dirtree_rename(/* see target signature */)
{
    // Tail-call to dirtree_rename_0 via direct jump indirection
    return dirtree_rename_0(/* forwarded args */);
}

