// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112830
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112830 jmp     cs:qstrncpy_ptr
//
// Resolved target: qstrncpy
// Target address:  0x8D4018
// GOT/IAT slot:    0x8A00B8
// Slot symbol:     qstrncpy_ptr
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

