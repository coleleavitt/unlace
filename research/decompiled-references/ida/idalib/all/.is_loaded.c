// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A72B0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A72B0 jmp     cs:off_2C79140
//
// Resolved target: is_loaded
// Target address:  0x3C0230
// GOT/IAT slot:    0x2C79140
// Slot symbol:     off_2C79140
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

