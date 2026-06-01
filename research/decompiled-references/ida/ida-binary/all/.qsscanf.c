// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1134D0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1134D0 jmp     cs:qsscanf_ptr
//
// Resolved target: qsscanf
// Target address:  0x8D4840
// GOT/IAT slot:    0x8A0708
// Slot symbol:     qsscanf_ptr
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

