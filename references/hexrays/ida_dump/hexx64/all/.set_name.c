// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C270
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C270 jmp     cs:off_4ED920
//
// Resolved target: set_name
// Target address:  0x4F1C40
// GOT/IAT slot:    0x4ED920
// Slot symbol:     off_4ED920
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

