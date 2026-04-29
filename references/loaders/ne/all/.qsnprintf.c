// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_B100
//
// Resolved target: qsnprintf
// Target address:  0xB398
// GOT/IAT slot:    0xB100
// Slot symbol:     off_B100
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

