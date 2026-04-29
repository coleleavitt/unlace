// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C7E0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C7E0 jmp     cs:off_4EDBD8
//
// Resolved target: qvsnprintf
// Target address:  0x4F1F08
// GOT/IAT slot:    0x4EDBD8
// Slot symbol:     off_4EDBD8
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

