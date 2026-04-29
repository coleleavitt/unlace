// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C350
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C350 jmp     cs:off_4ED990
//
// Resolved target: is_numop
// Target address:  0x4F1CB0
// GOT/IAT slot:    0x4ED990
// Slot symbol:     off_4ED990
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

