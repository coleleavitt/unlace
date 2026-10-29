// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112160
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112160 jmp     cs:qbasename_ptr
//
// Resolved target: qbasename
// Target address:  0x8D3BA8
// GOT/IAT slot:    0x89FD50
// Slot symbol:     qbasename_ptr
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

