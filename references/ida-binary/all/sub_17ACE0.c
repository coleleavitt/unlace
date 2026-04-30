// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x17ACE0
// Name:           sub_17ACE0
// Function size:  308 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x17ACE0 push    r13
//   0x17ACE2 push    r12
//   0x17ACE4 push    rbp
//   0x17ACE5 push    rbx
//   0x17ACE6 sub     rsp, 28h
//   0x17ACEA mov     rax, fs:28h
//   0x17ACF3 mov     [rsp+48h+var_30], rax
//   0x17ACF8 xor     eax, eax
//   0x17ACFA test    byte ptr [rsi+50h], 1
//   0x17ACFE jnz     short loc_17AD60
//   0x17AD00 cmp     dword ptr [rsi+8], 1Bh
//   0x17AD04 mov     rbp, rdi
//   0x17AD07 mov     rbx, rsi
//   0x17AD0A jz      short loc_17AD88
//   0x17AD0C mov     rbp, [rbp+0C0h]
//   0x17AD13 call    sub_1A1870
//   0x17AD18 test    al, al
//   0x17AD1A jnz     short loc_17AD44
//   0x17AD1C lea     rax, unk_8CD7E8
//   0x17AD23 mov     rdi, [rax]
//   0x17AD26 test    rdi, rdi
//   0x17AD29 jz      short loc_17AD44
//   0x17AD2B mov     rdx, [rbx+58h]
//   0x17AD2F mov     rsi, rsp
//   0x17AD32 mov     ecx, 2
//   0x17AD37 call    sub_27E0B0
//   0x17AD3C lea     edx, [rax-1]
//   0x17AD3F cmp     edx, 1
//   0x17AD42 jbe     short loc_17AD50
//   0x17AD44 mov     eax, 7
//   0x17AD49 jmp     short loc_17AD65
//   0x17AD4B align 10h
//   0x17AD50 test    rbp, rbp
//   0x17AD53 setnz   dl
//   0x17AD56 cmp     eax, 2
//   0x17AD59 setz    al
//   0x17AD5C cmp     dl, al
//   0x17AD5E jz      short loc_17AD44
//   0x17AD60 mov     eax, 3
//   0x17AD65 mov     rdx, [rsp+48h+var_30]
//   0x17AD6A sub     rdx, fs:28h
//   0x17AD73 jnz     loc_17AE0F
//   0x17AD79 add     rsp, 28h
//   0x17AD7D pop     rbx
//   0x17AD7E pop     rbp
//   0x17AD7F pop     r12
//   0x17AD81 pop     r13
//   0x17AD83 retn
//   0x17AD84 align 8
//   0x17AD88 mov     rsi, [rsi]; QT::QObject *
//   0x17AD8B lea     rdi, off_87CC60; this
//   0x17AD92 call    __ZNK2QT11QMetaObject4castEPKNS_7QObjectE; QT::QMetaObject::cast(QT::QObject const*)
//   0x17AD97 mov     r12, rax
//   0x17AD9A test    rax, rax
//   0x17AD9D jz      loc_17AD0C
//   0x17ADA3 mov     rdi, rax
//   0x17ADA6 call    sub_1EB590
//   0x17ADAB cmp     eax, 2
//   0x17ADAE jz      short loc_17AE00
//   0x17ADB0 mov     rdi, r12
//   0x17ADB3 call    sub_1EB590
//   0x17ADB8 cmp     eax, 3
//   0x17ADBB jnz     loc_17AD0C
//   0x17ADC1 mov     r13, [r12+388h]
//   0x17ADC9 test    r13, r13
//   0x17ADCC jz      loc_17AD0C
//   0x17ADD2 mov     rax, [r13+0]
//   0x17ADD6 mov     rdi, r13
//   0x17ADD9 call    qword ptr [rax+1F8h]
//   0x17ADDF test    eax, eax
//   0x17ADE1 js      loc_17AD44
//   0x17ADE7 mov     esi, eax
//   0x17ADE9 mov     rdi, r13
//   0x17ADEC call    sub_2BFB60
//   0x17ADF1 test    al, al
//   0x17ADF3 jnz     loc_17AD44
//   0x17ADF9 jmp     loc_17AD60
//   0x17ADFE align 20h
//   0x17AE00 mov     r13, [r12+380h]
//   0x17AE08 test    r13, r13
//   0x17AE0B jnz     short loc_17ADD2
//   0x17AE0D jmp     short loc_17ADB0
//   0x17AE0F call    ___stack_chk_fail
// ============================================================

void sub_17ACE0(/* signature unknown */)
{
    // see disassembly above
}

