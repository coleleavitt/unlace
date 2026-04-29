// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3400
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3400 jmp     cs:off_281E8
//
// Resolved target: qsnprintf
// Target address:  0x28698
// GOT/IAT slot:    0x281E8
// Slot symbol:     off_281E8
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

