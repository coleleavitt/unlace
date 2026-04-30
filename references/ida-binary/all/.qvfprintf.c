// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117A50
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117A50 jmp     cs:qvfprintf_ptr
//
// Resolved target: qvfprintf
// Target address:  0x8D7470
// GOT/IAT slot:    0x8A29C8
// Slot symbol:     qvfprintf_ptr
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

