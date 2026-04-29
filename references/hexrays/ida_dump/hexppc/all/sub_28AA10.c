// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28AA10
// Name:           sub_28AA10
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28AA10 push    r12
//   0x28AA12 push    rbp
//   0x28AA13 mov     rbp, rsi
//   0x28AA16 push    rbx
//   0x28AA17 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x28AA1B mov     rbx, rdi
//   0x28AA1E jnz     short loc_28AA60
//   0x28AA20 lea     r12, jpt_28AA39
//   0x28AA27 mov     eax, [rbp+8]
//   0x28AA2A sub     eax, 46h ; 'F'; switch 11 cases
//   0x28AA2D cmp     eax, 0Ah
//   0x28AA30 ja      short def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AA32 movsxd  rax, ds:(jpt_28AA39 - 41A4D8h)[r12+rax*4]
//   0x28AA36 add     rax, r12
//   0x28AA39 jmp     rax; switch jump
//   0x28AA3B align 20h
//   0x28AA40 mov     rsi, rbp; jumptable 000000000028AA39 case 80
//   0x28AA43 mov     rdi, rbx
//   0x28AA46 call    sub_287DB0
//   0x28AA4B test    al, al
//   0x28AA4D jz      short def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AA4F add     dword ptr [rbx+54h], 1
//   0x28AA53 pop     rbx; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AA54 xor     eax, eax
//   0x28AA56 pop     rbp
//   0x28AA57 pop     r12
//   0x28AA59 retn
//   0x28AA5A align 20h
//   0x28AA60 call    sub_287A10
//   0x28AA65 test    al, al
//   0x28AA67 jz      short loc_28AA20
//   0x28AA69 add     dword ptr [rbx+54h], 1
//   0x28AA6D jmp     short loc_28AA20
//   0x28AA6F align 10h
//   0x28AA70 mov     rsi, rbp; jumptable 000000000028AA39 case 70
//   0x28AA73 mov     rdi, rbx
//   0x28AA76 call    sub_287DB0
//   0x28AA7B test    al, al
//   0x28AA7D jz      short loc_28AA83
//   0x28AA7F add     dword ptr [rbx+54h], 1
//   0x28AA83 mov     rsi, rbp
//   0x28AA86 mov     rdi, rbx
//   0x28AA89 call    sub_287860
//   0x28AA8E pop     rbx
//   0x28AA8F pop     rbp
//   0x28AA90 movzx   eax, al
//   0x28AA93 pop     r12
//   0x28AA95 retn
//   0x28AA96 align 20h
//   0x28AAA0 mov     rsi, rbp; jumptable 000000000028AA39 case 71
//   0x28AAA3 mov     rdi, rbx
//   0x28AAA6 call    sub_285620
//   0x28AAAB add     [rbx+50h], eax
//   0x28AAAE jmp     short def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AAB0 mov     rsi, rbp; jumptable 000000000028AA39 case 72
//   0x28AAB3 mov     rdi, rbx
//   0x28AAB6 call    sub_285D60
//   0x28AABB test    al, al
//   0x28AABD jnz     short loc_28AAE0
//   0x28AABF mov     rsi, rbp
//   0x28AAC2 mov     rdi, rbx
//   0x28AAC5 call    sub_287220
//   0x28AACA test    al, al
//   0x28AACC jz      loc_28AD58
//   0x28AAD2 nop     word ptr [rax+rax+00000000h]
//   0x28AADD nop     dword ptr [rax]
//   0x28AAE0 add     dword ptr [rbx+50h], 1
//   0x28AAE4 jmp     loc_28AA27
//   0x28AAE9 align 10h
//   0x28AAF0 mov     rsi, rbp; jumptable 000000000028AA39 case 73
//   0x28AAF3 mov     rdi, rbx
//   0x28AAF6 call    sub_285000
//   0x28AAFB test    al, al
//   0x28AAFD jz      short loc_28AB03
//   0x28AAFF add     dword ptr [rbx+50h], 1
//   0x28AB03 mov     rsi, rbp
//   0x28AB06 mov     rdi, rbx
//   0x28AB09 call    sub_28A5E0
//   0x28AB0E test    al, al
//   0x28AB10 jz      short loc_28AB16
//   0x28AB12 add     dword ptr [rbx+50h], 1
//   0x28AB16 mov     rsi, rbp
//   0x28AB19 mov     rdi, rbx
//   0x28AB1C call    sub_285070
//   0x28AB21 test    al, al
//   0x28AB23 jz      short loc_28AB29
//   0x28AB25 add     dword ptr [rbx+50h], 1
//   0x28AB29 mov     rsi, rbp
//   0x28AB2C mov     rdi, rbx
//   0x28AB2F call    sub_282BE0
//   0x28AB34 test    al, al
//   0x28AB36 jz      short loc_28AB3C
//   0x28AB38 add     dword ptr [rbx+50h], 1
//   0x28AB3C mov     rsi, rbp
//   0x28AB3F mov     rdi, rbx
//   0x28AB42 call    sub_2947E0
//   0x28AB47 test    al, al
//   0x28AB49 jz      loc_28ACB8
//   0x28AB4F add     dword ptr [rbx+54h], 1
//   0x28AB53 jmp     loc_28AA27
//   0x28AB58 align 20h
//   0x28AB60 mov     rsi, rbp; jumptable 000000000028AA39 case 75
//   0x28AB63 mov     rdi, rbx
//   0x28AB66 call    sub_293D30
//   0x28AB6B test    al, al
//   0x28AB6D jz      short loc_28AB73
//   0x28AB6F add     dword ptr [rbx+50h], 1
//   0x28AB73 mov     rsi, rbp
//   0x28AB76 mov     rdi, rbx
//   0x28AB79 call    sub_293AD0
//   0x28AB7E test    al, al
//   0x28AB80 jz      short loc_28AB86
//   0x28AB82 add     dword ptr [rbx+50h], 1
//   0x28AB86 mov     rsi, rbp
//   0x28AB89 mov     rdi, rbx
//   0x28AB8C call    sub_2936E0
//   0x28AB91 test    al, al
//   0x28AB93 jz      short loc_28AB99
//   0x28AB95 add     dword ptr [rbx+50h], 1
//   0x28AB99 mov     rsi, rbp
//   0x28AB9C mov     rdi, rbx
//   0x28AB9F call    sub_293930
//   0x28ABA4 test    al, al
//   0x28ABA6 jz      short loc_28ABAC
//   0x28ABA8 add     dword ptr [rbx+54h], 1
//   0x28ABAC mov     rsi, rbp
//   0x28ABAF mov     rdi, rbx
//   0x28ABB2 call    sub_293F50
//   0x28ABB7 test    al, al
//   0x28ABB9 jz      short loc_28ABBF
//   0x28ABBB add     dword ptr [rbx+50h], 1
//   0x28ABBF mov     rsi, rbp
//   0x28ABC2 mov     rdi, rbx
//   0x28ABC5 call    sub_2931D0
//   0x28ABCA test    al, al
//   0x28ABCC jz      def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28ABD2 jmp     loc_28AA4F
//   0x28ABD7 align 20h
//   0x28ABE0 mov     rsi, rbp; jumptable 000000000028AA39 case 74
//   0x28ABE3 mov     rdi, rbx
//   0x28ABE6 call    sub_293D30
//   0x28ABEB test    al, al
//   0x28ABED jz      short loc_28ABF3
//   0x28ABEF add     dword ptr [rbx+50h], 1
//   0x28ABF3 mov     rsi, rbp
//   0x28ABF6 mov     rdi, rbx
//   0x28ABF9 call    sub_293AD0
//   0x28ABFE test    al, al
//   0x28AC00 jz      short loc_28AC06
//   0x28AC02 add     dword ptr [rbx+50h], 1
//   0x28AC06 mov     rsi, rbp
//   0x28AC09 mov     rdi, rbx
//   0x28AC0C call    sub_293F50
//   0x28AC11 test    al, al
//   0x28AC13 jz      def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AC19 add     dword ptr [rbx+50h], 1
//   0x28AC1D jmp     def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AC22 align 8
//   0x28AC28 mov     rsi, rbp; jumptable 000000000028AA39 case 76
//   0x28AC2B mov     rdi, rbx
//   0x28AC2E call    sub_293AD0
//   0x28AC33 test    al, al
//   0x28AC35 jz      short loc_28AC3B
//   0x28AC37 add     dword ptr [rbx+50h], 1
//   0x28AC3B mov     rsi, rbp
//   0x28AC3E mov     rdi, rbx
//   0x28AC41 call    sub_2942F0
//   0x28AC46 test    al, al
//   0x28AC48 jz      short loc_28AC4E
//   0x28AC4A add     dword ptr [rbx+50h], 1
//   0x28AC4E mov     rsi, rbp
//   0x28AC51 mov     rdi, rbx
//   0x28AC54 call    sub_2944A0
//   0x28AC59 test    al, al
//   0x28AC5B jz      short loc_28AC61
//   0x28AC5D add     dword ptr [rbx+50h], 1
//   0x28AC61 mov     rsi, rbp
//   0x28AC64 mov     rdi, rbx
//   0x28AC67 call    sub_2944F0
//   0x28AC6C test    al, al
//   0x28AC6E jz      short loc_28AC74
//   0x28AC70 add     dword ptr [rbx+50h], 1
//   0x28AC74 mov     rsi, rbp
//   0x28AC77 mov     rdi, rbx
//   0x28AC7A call    sub_294550
//   0x28AC7F test    al, al
//   0x28AC81 jz      short loc_28AC87
//   0x28AC83 add     dword ptr [rbx+50h], 1
//   0x28AC87 mov     rsi, rbp
//   0x28AC8A mov     rdi, rbx
//   0x28AC8D call    sub_2946D0
//   0x28AC92 test    al, al
//   0x28AC94 jz      short loc_28AC9A
//   0x28AC96 add     dword ptr [rbx+50h], 1
//   0x28AC9A mov     rsi, rbp
//   0x28AC9D mov     rdi, rbx
//   0x28ACA0 call    sub_294CC0
//   0x28ACA5 test    al, al
//   0x28ACA7 jz      def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28ACAD jmp     loc_28AA4F
//   0x28ACB2 align 8
//   0x28ACB8 mov     rsi, rbp
//   0x28ACBB mov     rdi, rbx
//   0x28ACBE call    sub_283050
//   0x28ACC3 test    al, al
//   0x28ACC5 jz      short loc_28ACCB
//   0x28ACC7 add     dword ptr [rbx+50h], 1
//   0x28ACCB mov     rsi, rbp
//   0x28ACCE mov     rdi, rbx
//   0x28ACD1 call    sub_283820
//   0x28ACD6 test    al, al
//   0x28ACD8 jnz     loc_28AAE0
//   0x28ACDE mov     rsi, rbp
//   0x28ACE1 mov     rdi, rbx
//   0x28ACE4 call    sub_283E10
//   0x28ACE9 test    al, al
//   0x28ACEB jnz     loc_28AAE0
//   0x28ACF1 mov     rsi, rbp
//   0x28ACF4 mov     rdi, rbx
//   0x28ACF7 call    sub_286340
//   0x28ACFC test    al, al
//   0x28ACFE jnz     loc_28AAE0
//   0x28AD04 mov     rsi, rbp
//   0x28AD07 mov     rdi, rbx
//   0x28AD0A call    sub_282D50
//   0x28AD0F test    al, al
//   0x28AD11 jz      short loc_28AD17
//   0x28AD13 add     dword ptr [rbx+50h], 1
//   0x28AD17 mov     rsi, rbp
//   0x28AD1A mov     rdi, rbx
//   0x28AD1D call    sub_2853A0
//   0x28AD22 test    al, al
//   0x28AD24 jz      short loc_28AD2A
//   0x28AD26 add     dword ptr [rbx+50h], 1
//   0x28AD2A mov     rsi, rbp
//   0x28AD2D mov     rdi, rbx
//   0x28AD30 call    sub_2832B0
//   0x28AD35 test    al, al
//   0x28AD37 jz      short loc_28AD3D
//   0x28AD39 add     dword ptr [rbx+50h], 1
//   0x28AD3D mov     rsi, rbp
//   0x28AD40 mov     rdi, rbx
//   0x28AD43 call    sub_285480
//   0x28AD48 test    al, al
//   0x28AD4A jz      def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
//   0x28AD50 jmp     loc_28AC19
//   0x28AD55 align 8
//   0x28AD58 mov     rsi, rbp
//   0x28AD5B mov     rdi, rbx
//   0x28AD5E call    sub_286880
//   0x28AD63 test    al, al
//   0x28AD65 jnz     loc_28AAE0
//   0x28AD6B mov     rsi, rbp
//   0x28AD6E mov     rdi, rbx
//   0x28AD71 call    sub_285EA0
//   0x28AD76 test    al, al
//   0x28AD78 jnz     loc_28AAE0
//   0x28AD7E mov     rsi, rbp
//   0x28AD81 mov     rdi, rbx
//   0x28AD84 call    sub_2863F0
//   0x28AD89 test    al, al
//   0x28AD8B jz      short loc_28AD91
//   0x28AD8D add     dword ptr [rbx+50h], 1
//   0x28AD91 mov     rsi, rbp
//   0x28AD94 mov     rdi, rbx
//   0x28AD97 call    sub_28A250
//   0x28AD9C test    al, al
//   0x28AD9E jz      short loc_28ADA4
//   0x28ADA0 add     dword ptr [rbx+50h], 1
//   0x28ADA4 mov     rsi, rbp
//   0x28ADA7 mov     rdi, rbx
//   0x28ADAA call    sub_288000
//   0x28ADAF test    al, al
//   0x28ADB1 jnz     loc_28AAE0
//   0x28ADB7 mov     rsi, rbp
//   0x28ADBA mov     rdi, rbx
//   0x28ADBD call    sub_288850
//   0x28ADC2 test    al, al
//   0x28ADC4 jnz     loc_28AAE0
//   0x28ADCA jmp     def_28AA39; jumptable 000000000028AA39 default case, cases 77-79
// ============================================================

void sub_28AA10(/* signature unknown */)
{
    // see disassembly above
}

