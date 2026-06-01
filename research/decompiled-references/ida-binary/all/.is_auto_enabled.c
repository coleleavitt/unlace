// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E40
// Name:            .is_auto_enabled
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E40 jmp     cs:is_auto_enabled_ptr
//
// Resolved target: is_auto_enabled
// Target address:  0x8D6CB8
// GOT/IAT slot:    0x8A23C0
// Slot symbol:     is_auto_enabled_ptr
// Target type:     <no type info>
// ============================================================

void .is_auto_enabled(/* see target signature */)
{
    // Tail-call to is_auto_enabled via GOT/IAT indirection
    return is_auto_enabled(/* forwarded args */);
}

