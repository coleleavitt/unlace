// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x531430
// Name:           sub_531430
// Function size:  47 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x531430 mov     rax, rdi
//   0x531433 sub     rsp, 10h
//   0x531437 mov     rdi, rsi
//   0x53143A mov     rax, [rax]
//   0x53143D mov     rdi, [rdi]; int
//   0x531440 mov     r9d, [rax+28h]
//   0x531444 mov     r8, [rax+18h]
//   0x531448 mov     rcx, [rax+10h]
//   0x53144C mov     edx, [rax+8]
//   0x53144F mov     rsi, [rax]
//   0x531452 push    qword ptr [rax+20h]; __int64
//   0x531455 call    sub_6C4D50
//   0x53145A add     rsp, 18h
//   0x53145E retn
// ============================================================

void sub_531430(/* signature unknown */)
{
    // see disassembly above
}

