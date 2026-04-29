// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A120
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A120 jmp     cs:off_4B9878
//
// Resolved target: qsnprintf
// Target address:  0x4BC278
// GOT/IAT slot:    0x4B9878
// Slot symbol:     off_4B9878
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

