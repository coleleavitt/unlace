// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E10
// Name:            .qatexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E10 jmp     cs:qatexit_ptr
//
// Resolved target: qatexit
// Target address:  0x8D76C0
// GOT/IAT slot:    0x8A2BA8
// Slot symbol:     qatexit_ptr
// Target type:     <no type info>
// ============================================================

void .qatexit(/* see target signature */)
{
    // Tail-call to qatexit via GOT/IAT indirection
    return qatexit(/* forwarded args */);
}

