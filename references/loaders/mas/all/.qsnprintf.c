// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_4048
//
// Resolved target: qsnprintf
// Target address:  0x4568
// GOT/IAT slot:    0x4048
// Slot symbol:     off_4048
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

