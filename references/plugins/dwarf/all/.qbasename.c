// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xADE0
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xADE0 jmp     cs:off_CA6D8
//
// Resolved target: qbasename
// Target address:  0xD1040
// GOT/IAT slot:    0xCA6D8
// Slot symbol:     off_CA6D8
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

