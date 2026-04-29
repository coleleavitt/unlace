// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9520
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9520 jmp     cs:off_2E278
//
// Resolved target: qsnprintf
// Target address:  0x2E8E8
// GOT/IAT slot:    0x2E278
// Slot symbol:     off_2E278
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

