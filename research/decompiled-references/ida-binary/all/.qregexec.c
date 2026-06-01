// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A590
// Name:            .qregexec
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A590 jmp     cs:qregexec_ptr
//
// Resolved target: qregexec
// Target address:  0x8D8F90
// GOT/IAT slot:    0x8A3F68
// Slot symbol:     qregexec_ptr
// Target type:     <no type info>
// ============================================================

void .qregexec(/* see target signature */)
{
    // Tail-call to qregexec via GOT/IAT indirection
    return qregexec(/* forwarded args */);
}

