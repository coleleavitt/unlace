// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B90
// Name:            .resolve_typedef
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B90 jmp     cs:resolve_typedef_ptr
//
// Resolved target: resolve_typedef
// Target address:  0x8D3800
// GOT/IAT slot:    0x89FA68
// Slot symbol:     resolve_typedef_ptr
// Target type:     <no type info>
// ============================================================

void .resolve_typedef(/* see target signature */)
{
    // Tail-call to resolve_typedef via GOT/IAT indirection
    return resolve_typedef(/* forwarded args */);
}

