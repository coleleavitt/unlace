// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5720
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5720 jmp     cs:off_15378
//
// Resolved target: get_byte
// Target address:  0x16420
// GOT/IAT slot:    0x15378
// Slot symbol:     off_15378
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

