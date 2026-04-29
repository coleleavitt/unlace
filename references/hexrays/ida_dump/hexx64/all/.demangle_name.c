// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C200
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C200 jmp     cs:off_4ED8E8
//
// Resolved target: demangle_name
// Target address:  0x4F1C08
// GOT/IAT slot:    0x4ED8E8
// Slot symbol:     off_4ED8E8
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

