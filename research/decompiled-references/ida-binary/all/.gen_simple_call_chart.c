// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112CB0
// Name:            .gen_simple_call_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112CB0 jmp     cs:gen_simple_call_chart_ptr
//
// Resolved target: gen_simple_call_chart
// Target address:  0x8D42F0
// GOT/IAT slot:    0x8A02F8
// Slot symbol:     gen_simple_call_chart_ptr
// Target type:     <no type info>
// ============================================================

void .gen_simple_call_chart(/* see target signature */)
{
    // Tail-call to gen_simple_call_chart via GOT/IAT indirection
    return gen_simple_call_chart(/* forwarded args */);
}

