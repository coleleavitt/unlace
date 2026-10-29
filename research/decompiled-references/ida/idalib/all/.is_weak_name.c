// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA3E0
// Name:            .is_weak_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA3E0 jmp     cs:off_2C7A9D8
//
// Resolved target: is_weak_name
// Target address:  0x4CDF10
// GOT/IAT slot:    0x2C7A9D8
// Slot symbol:     off_2C7A9D8
// Target type:     <no type info>
// ============================================================

void .is_weak_name(/* see target signature */)
{
    // Tail-call to is_weak_name via GOT/IAT indirection
    return is_weak_name(/* forwarded args */);
}

