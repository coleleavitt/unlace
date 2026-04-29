// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_80A0
//
// Resolved target: qsnprintf
// Target address:  0x8280
// GOT/IAT slot:    0x80A0
// Slot symbol:     off_80A0
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

