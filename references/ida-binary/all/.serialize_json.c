// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119140
// Name:            .serialize_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119140 jmp     cs:serialize_json_ptr
//
// Resolved target: serialize_json
// Target address:  0x8D8288
// GOT/IAT slot:    0x8A3540
// Slot symbol:     serialize_json_ptr
// Target type:     <no type info>
// ============================================================

void .serialize_json(/* see target signature */)
{
    // Tail-call to serialize_json via GOT/IAT indirection
    return serialize_json(/* forwarded args */);
}

