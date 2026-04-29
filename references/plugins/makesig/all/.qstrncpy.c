// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3600
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3600 jmp     cs:off_202E8
//
// Resolved target: qstrncpy
// Target address:  0x21C20
// GOT/IAT slot:    0x202E8
// Slot symbol:     off_202E8
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

