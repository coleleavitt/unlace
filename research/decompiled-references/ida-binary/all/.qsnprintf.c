// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113840
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113840 jmp     cs:qsnprintf_ptr
//
// Resolved target: qsnprintf
// Target address:  0x8D4A70
// GOT/IAT slot:    0x8A08C0
// Slot symbol:     qsnprintf_ptr
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

