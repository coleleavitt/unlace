// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119460
// Name:            .get_default_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119460 jmp     cs:get_default_radix_ptr
//
// Resolved target: get_default_radix
// Target address:  0x8D8498
// GOT/IAT slot:    0x8A36D0
// Slot symbol:     get_default_radix_ptr
// Target type:     <no type info>
// ============================================================

void .get_default_radix(/* see target signature */)
{
    // Tail-call to get_default_radix via GOT/IAT indirection
    return get_default_radix(/* forwarded args */);
}

