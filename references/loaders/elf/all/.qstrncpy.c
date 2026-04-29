// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A10
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A10 jmp     cs:off_894F0
//
// Resolved target: qstrncpy
// Target address:  0x8C820
// GOT/IAT slot:    0x894F0
// Slot symbol:     off_894F0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

