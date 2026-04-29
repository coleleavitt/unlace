// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6E0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C6E0 jmp     cs:off_4EDB58
//
// Resolved target: is_loaded
// Target address:  0x4F1E88
// GOT/IAT slot:    0x4EDB58
// Slot symbol:     off_4EDB58
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

