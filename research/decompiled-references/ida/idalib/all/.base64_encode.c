// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8070
// Name:            .base64_encode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8070 jmp     cs:off_2C79820
//
// Resolved target: base64_encode
// Target address:  0x826640
// GOT/IAT slot:    0x2C79820
// Slot symbol:     off_2C79820
// Target type:     <no type info>
// ============================================================

void .base64_encode(/* see target signature */)
{
    // Tail-call to base64_encode via GOT/IAT indirection
    return base64_encode(/* forwarded args */);
}

