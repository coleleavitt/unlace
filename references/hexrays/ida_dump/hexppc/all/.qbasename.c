// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C230
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C230 jmp     cs:off_4DB100
//
// Resolved target: qbasename
// Target address:  0x4DDB40
// GOT/IAT slot:    0x4DB100
// Slot symbol:     off_4DB100
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

