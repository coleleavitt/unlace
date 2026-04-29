// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_5098
//
// Resolved target: set_name
// Target address:  0x52E0
// GOT/IAT slot:    0x5098
// Slot symbol:     off_5098
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

