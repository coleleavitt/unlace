// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_13198
//
// Resolved target: qsnprintf
// Target address:  0x13518
// GOT/IAT slot:    0x13198
// Slot symbol:     off_13198
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

