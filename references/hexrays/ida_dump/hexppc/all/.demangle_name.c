// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B150
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B150 jmp     cs:off_4DA890
//
// Resolved target: demangle_name
// Target address:  0x4DD290
// GOT/IAT slot:    0x4DA890
// Slot symbol:     off_4DA890
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

