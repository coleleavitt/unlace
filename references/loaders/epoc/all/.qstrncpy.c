// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34A0 jmp     cs:off_13238
//
// Resolved target: qstrncpy
// Target address:  0x13940
// GOT/IAT slot:    0x13238
// Slot symbol:     off_13238
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

