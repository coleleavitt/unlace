// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7A0
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7A0 jmp     cs:off_CA3B8
//
// Resolved target: qstpncpy
// Target address:  0xD0CF0
// GOT/IAT slot:    0xCA3B8
// Slot symbol:     off_CA3B8
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

