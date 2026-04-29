// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F270
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F270 jmp     cs:off_4EA120
//
// Resolved target: qbasename
// Target address:  0x4ECB80
// GOT/IAT slot:    0x4EA120
// Slot symbol:     off_4EA120
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

