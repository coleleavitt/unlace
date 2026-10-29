// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7170
// Name:            .eetol64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7170 jmp     cs:off_2C790A0
//
// Resolved target: eetol64
// Target address:  0x831850
// GOT/IAT slot:    0x2C790A0
// Slot symbol:     off_2C790A0
// Target type:     <no type info>
// ============================================================

void .eetol64(/* see target signature */)
{
    // Tail-call to eetol64 via GOT/IAT indirection
    return eetol64(/* forwarded args */);
}

