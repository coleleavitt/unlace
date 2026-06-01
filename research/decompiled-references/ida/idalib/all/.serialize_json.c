// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC150
// Name:            .serialize_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC150 jmp     cs:off_2C7B890
//
// Resolved target: serialize_json
// Target address:  0x7AD360
// GOT/IAT slot:    0x2C7B890
// Slot symbol:     off_2C7B890
// Target type:     <no type info>
// ============================================================

void .serialize_json(/* see target signature */)
{
    // Tail-call to serialize_json via GOT/IAT indirection
    return serialize_json(/* forwarded args */);
}

