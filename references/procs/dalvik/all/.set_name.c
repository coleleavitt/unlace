// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5320
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5320 jmp     cs:off_1A178
//
// Resolved target: set_name
// Target address:  0x1A500
// GOT/IAT slot:    0x1A178
// Slot symbol:     off_1A178
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

