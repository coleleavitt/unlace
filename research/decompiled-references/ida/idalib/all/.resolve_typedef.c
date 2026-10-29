// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A77B0
// Name:            .resolve_typedef
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A77B0 jmp     cs:off_2C793C0
//
// Resolved target: resolve_typedef
// Target address:  0x5696C0
// GOT/IAT slot:    0x2C793C0
// Slot symbol:     off_2C793C0
// Target type:     <no type info>
// ============================================================

void .resolve_typedef(/* see target signature */)
{
    // Tail-call to resolve_typedef via GOT/IAT indirection
    return resolve_typedef(/* forwarded args */);
}

