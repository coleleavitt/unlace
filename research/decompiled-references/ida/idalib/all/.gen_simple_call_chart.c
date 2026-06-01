// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8270
// Name:            .gen_simple_call_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8270 jmp     cs:off_2C79920
//
// Resolved target: gen_simple_call_chart
// Target address:  0x5E0660
// GOT/IAT slot:    0x2C79920
// Slot symbol:     off_2C79920
// Target type:     <no type info>
// ============================================================

void .gen_simple_call_chart(/* see target signature */)
{
    // Tail-call to gen_simple_call_chart via GOT/IAT indirection
    return gen_simple_call_chart(/* forwarded args */);
}

