// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D00
// Name:            .http_request
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D00 jmp     cs:http_request_ptr
//
// Resolved target: http_request
// Target address:  0x8D4338
// GOT/IAT slot:    0x8A0320
// Slot symbol:     http_request_ptr
// Target type:     <no type info>
// ============================================================

void .http_request(/* see target signature */)
{
    // Tail-call to http_request via GOT/IAT indirection
    return http_request(/* forwarded args */);
}

