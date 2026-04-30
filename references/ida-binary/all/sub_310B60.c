// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x310B60
// Name:           IDAMainWindow__::vfunc_7
// Function size:  230 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x310B60 push    rbp
//   0x310B61 mov     rbp, rsi
//   0x310B64 push    rbx
//   0x310B65 mov     rbx, rdi
//   0x310B68 sub     rsp, 8
//   0x310B6C mov     rdi, [rdi+160h]
//   0x310B73 mov     eax, [rsi+10h]
//   0x310B76 cmp     eax, [rdi+60h]
//   0x310B79 jz      short loc_310BA0
//   0x310B7B cmp     eax, [rdi+64h]
//   0x310B7E jz      short loc_310BF0
//   0x310B80 cmp     eax, [rdi+68h]
//   0x310B83 jz      short loc_310C00
//   0x310B85 add     rsp, 8
//   0x310B89 mov     rsi, rbp
//   0x310B8C mov     rdi, rbx
//   0x310B8F pop     rbx
//   0x310B90 pop     rbp
//   0x310B91 jmp     __ZN2QT7QObject10timerEventEPNS_11QTimerEventE; QT::QObject::timerEvent(QT::QTimerEvent *)
//   0x310B96 align 20h
//   0x310BA0 cmp     byte ptr [rdi], 0
//   0x310BA3 jz      short loc_310B7B
//   0x310BA5 add     rdi, 60h ; '`'; this
//   0x310BA9 call    __ZN2QT11QBasicTimer4stopEv; QT::QBasicTimer::stop(void)
//   0x310BAE xor     edi, edi; this
//   0x310BB0 xor     esi, esi; QT::QObject *
//   0x310BB2 call    __ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi; QT::QCoreApplication::sendPostedEvents(QT::QObject *,int)
//   0x310BB7 mov     rdi, [rbx+160h]
//   0x310BBE cmp     byte ptr [rdi], 0
//   0x310BC1 jz      short loc_310C10
//   0x310BC3 mov     rdi, rbx
//   0x310BC6 call    sub_30E4C0
//   0x310BCB mov     rdi, [rbx+160h]
//   0x310BD2 test    al, al
//   0x310BD4 jnz     short loc_310C10
//   0x310BD6 mov     esi, 1
//   0x310BDB add     rdi, 60h ; '`'
//   0x310BDF mov     rdx, rbx
//   0x310BE2 call    __ZN2QT11QBasicTimer5startENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEPNS_7QObjectE; QT::QBasicTimer::start(std::chrono::duration<long,std::ratio<1l,1000l>>,QT::QObject *)
//   0x310BE7 jmp     short loc_310B85
//   0x310BE9 align 10h
//   0x310BF0 lea     rax, unk_8CD770
//   0x310BF7 mov     byte ptr [rax], 1
//   0x310BFA jmp     short loc_310B85
//   0x310BFC align 20h
//   0x310C00 mov     rdi, rbx
//   0x310C03 call    sub_388400
//   0x310C08 jmp     loc_310B85
//   0x310C0D align 10h
//   0x310C10 lea     rax, dword_8CC5F0
//   0x310C17 mov     esi, 32h ; '2'
//   0x310C1C mov     eax, [rax]
//   0x310C1E test    eax, eax
//   0x310C20 jz      short loc_310BDB
//   0x310C22 mov     rax, cs:dbg_ptr
//   0x310C29 mov     rax, [rax]
//   0x310C2C mov     rax, [rax+20h]
//   0x310C30 and     eax, 80000h
//   0x310C35 cmp     rax, 1
//   0x310C39 sbb     rsi, rsi
//   0x310C3C and     rsi, 0FFFFFFFFFFFFFFD3h
//   0x310C40 add     rsi, 32h ; '2'
//   0x310C44 jmp     short loc_310BDB
// ============================================================

void IDAMainWindow__::vfunc_7(/* signature unknown */)
{
    // see disassembly above
}

