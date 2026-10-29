// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CEB40
// Name:           sub_3CEB40
// Function size:  1414 bytes (326 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CEB40 push    r15; int
//   0x3CEB42 push    r14; int
//   0x3CEB44 push    r13; int
//   0x3CEB46 push    r12; int
//   0x3CEB48 push    rbp; int
//   0x3CEB49 push    rbx; int
//   0x3CEB4A sub     rsp, 58h
//   0x3CEB4E mov     qword ptr [rsp+88h+var_70], rdx; int
//   0x3CEB53 mov     rax, fs:28h
//   0x3CEB5C mov     qword ptr [rsp+88h+var_40], rax; int
//   0x3CEB61 xor     eax, eax
//   0x3CEB63 cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3CEB67 jz      loc_3CEF10
//   0x3CEB6D mov     r12, rdi
//   0x3CEB70 mov     rbx, rsi
//   0x3CEB73 mov     ebp, ecx
//   0x3CEB75 test    cl, 2
//   0x3CEB78 jnz     short loc_3CEBC0
//   0x3CEB7A xor     r13d, r13d
//   0x3CEB7D and     ebp, 1
//   0x3CEB80 lea     r14, [rbx+1]
//   0x3CEB84 jnz     short loc_3CEBE4
//   0x3CEB86 mov     rdi, [r12]
//   0x3CEB8A mov     rdx, r14
//   0x3CEB8D mov     rsi, rbx
//   0x3CEB90 call    sub_359AE0
//   0x3CEB95 mov     rax, qword ptr [rsp+88h+var_40]
//   0x3CEB9A sub     rax, fs:28h
//   0x3CEBA3 jnz     loc_3CF092
//   0x3CEBA9 add     rsp, 58h
//   0x3CEBAD mov     eax, r13d
//   0x3CEBB0 pop     rbx
//   0x3CEBB1 pop     rbp
//   0x3CEBB2 pop     r12
//   0x3CEBB4 pop     r13
//   0x3CEBB6 pop     r14
//   0x3CEBB8 pop     r15
//   0x3CEBBA retn
//   0x3CEBBB align 20h
//   0x3CEBC0 mov     rax, [rdi]
//   0x3CEBC3 mov     rax, [rax+270h]
//   0x3CEBCA test    rax, rax
//   0x3CEBCD jz      loc_3CEEB0
//   0x3CEBD3 test    byte ptr [rax+22h], 20h
//   0x3CEBD7 jz      loc_3CEEB0
//   0x3CEBDD xor     r13d, r13d
//   0x3CEBE0 lea     r14, [rsi+1]
//   0x3CEBE4 mov     rax, [r12+10h]
//   0x3CEBE9 mov     r15d, [rax+14h]
//   0x3CEBED cmp     [rax+10h], r15d
//   0x3CEBF1 jnz     loc_3CEF20
//   0x3CEBF7 mov     edx, 2
//   0x3CEBFC mov     rsi, rbx
//   0x3CEBFF mov     rdi, r12
//   0x3CEC02 call    sub_3BE900
//   0x3CEC07 movzx   ebp, byte ptr [rsp+88h+var_70]
//   0x3CEC0C mov     r10, rax
//   0x3CEC0F xor     ebp, eax
//   0x3CEC11 and     ebp, 1FFh
//   0x3CEC17 cmp     ebp, 100h
//   0x3CEC1D setz    dl
//   0x3CEC20 cmp     r15d, 8
//   0x3CEC24 setz    al
//   0x3CEC27 test    dl, al
//   0x3CEC29 jnz     loc_3CEE80
//   0x3CEC2F mov     rax, [r12+408h]
//   0x3CEC37 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x3CEC3B jz      loc_3CEF50
//   0x3CEC41 test    rax, rax
//   0x3CEC44 setnz   dl
//   0x3CEC47 cmp     rax, 0FFFFFFFFFFFFFFFEh
//   0x3CEC4B setnz   al
//   0x3CEC4E test    dl, al
//   0x3CEC50 jz      loc_3CEB86
//   0x3CEC56 cmp     [r12+400h], rbx
//   0x3CEC5E jnz     loc_3CEB86
//   0x3CEC64 mov     rbp, [r12+3F8h]
//   0x3CEC6C mov     rsi, rbx
//   0x3CEC6F mov     qword ptr [rsp+88h+var_80], r10
//   0x3CEC74 mov     [rsp+88h+var_88], r10d
//   0x3CEC78 mov     rdi, rbp
//   0x3CEC7B call    sub_8B8E80
//   0x3CEC80 mov     r9, rax
//   0x3CEC83 test    rax, rax
//   0x3CEC86 jz      loc_3CEB86
//   0x3CEC8C mov     rdi, [rbp+0]
//   0x3CEC90 mov     r11d, [rsp+88h+var_88]
//   0x3CEC94 mov     r10, qword ptr [rsp+88h+var_80]
//   0x3CEC99 mov     ecx, [rdi+8]
//   0x3CEC9C sar     rax, cl
//   0x3CEC9F cmp     eax, [rbp+48h]
//   0x3CECA2 mov     esi, eax
//   0x3CECA4 jnz     loc_3CF013
//   0x3CECAA mov     rax, [rbp+50h]
//   0x3CECAE mov     byte ptr [rax-2], 1
//   0x3CECB2 mov     rax, [rbp+0]
//   0x3CECB6 mov     byte ptr [rbp+64h], 1
//   0x3CECBA mov     rax, [rax]
//   0x3CECBD sub     rax, 1
//   0x3CECC1 and     rax, r9
//   0x3CECC4 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x3CECC8 add     rax, [rbp+50h]
//   0x3CECCC mov     qword ptr [rsp+88h+var_88], rax
//   0x3CECD0 jz      loc_3CEB86
//   0x3CECD6 mov     rax, qword ptr [rsp+88h+var_70]
//   0x3CECDB nop     dword ptr [rax+rax+00h]
//   0x3CECE0 cmp     r15d, 8
//   0x3CECE4 jle     short loc_3CED5A
//   0x3CECE6 movsxd  rdx, r15d
//   0x3CECE9 cmp     rdx, 3Fh ; '?'
//   0x3CECED ja      short loc_3CED02
//   0x3CECEF mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x3CECF6 mov     ecx, r15d
//   0x3CECF9 shl     rdx, cl
//   0x3CECFC not     rdx
//   0x3CECFF and     rax, rdx
//   0x3CED02 add     rax, 1
//   0x3CED06 mov     rsi, rbx
//   0x3CED09 mov     rdi, r12
//   0x3CED0C mov     qword ptr [rsp+88h+var_78], r10
//   0x3CED11 mov     [rsp+88h+var_80], r11d
//   0x3CED16 mov     [rsp+88h+var_60], rax
//   0x3CED1B call    sub_3B9DC0
//   0x3CED20 mov     rsi, [r12]
//   0x3CED24 lea     rcx, [rsp+88h+var_60]
//   0x3CED29 lea     rdi, [rsp+88h+var_58]
//   0x3CED2E mov     r9d, 41h ; 'A'
//   0x3CED34 mov     r8d, 8
//   0x3CED3A mov     qword ptr [rsp+88h+var_58], rax
//   0x3CED3F mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x3CED46 call    sub_7BE7C0
//   0x3CED4B mov     rax, qword ptr [rsp+88h+var_70]
//   0x3CED50 mov     r10, qword ptr [rsp+88h+var_78]
//   0x3CED55 mov     r11d, [rsp+88h+var_80]
//   0x3CED5A mov     ebp, r10d
//   0x3CED5D movzx   eax, al
//   0x3CED60 mov     esi, r11d
//   0x3CED63 mov     rdi, rbx
//   0x3CED66 and     ebp, 0FFFFFE00h
//   0x3CED6C or      ebp, eax
//   0x3CED6E or      ebp, 100h
//   0x3CED74 mov     edx, ebp
//   0x3CED76 call    sub_3BB8A0
//   0x3CED7B mov     r15, qword ptr [rsp+88h+var_88]
//   0x3CED7F mov     edi, 4
//   0x3CED84 mov     [r15], ebp
//   0x3CED87 call    _getinf
//   0x3CED8C mov     edi, 4
//   0x3CED91 lea     esi, [rax+1]
//   0x3CED94 call    _setinf
//   0x3CED99 mov     eax, [r15]
//   0x3CED9C and     eax, 600h
//   0x3CEDA1 cmp     eax, 200h
//   0x3CEDA6 jnz     loc_3CEE80
//   0x3CEDAC cmp     qword ptr [r12+408h], 0FFFFFFFFFFFFFFFDh
//   0x3CEDB5 ja      loc_3CEE80
//   0x3CEDBB mov     edx, 4
//   0x3CEDC0 mov     rsi, rbx
//   0x3CEDC3 mov     rdi, r12
//   0x3CEDC6 mov     r15, rbx
//   0x3CEDC9 call    sub_3BE900
//   0x3CEDCE and     eax, 600h
//   0x3CEDD3 cmp     rax, 200h
//   0x3CEDD9 jz      loc_3CF06F
//   0x3CEDDF mov     rbp, [r12+2E8h]
//   0x3CEDE7 lea     r8, [r12+2E0h]
//   0x3CEDEF test    rbp, rbp
//   0x3CEDF2 jnz     short loc_3CEE03
//   0x3CEDF4 jmp     loc_3CF045
//   0x3CEDF9 align 20h
//   0x3CEE00 mov     rbp, rax
//   0x3CEE03 mov     rdx, [rbp+20h]
//   0x3CEE07 mov     rsi, [rbp+10h]
//   0x3CEE0B xor     ecx, ecx
//   0x3CEE0D mov     rax, [rbp+18h]
//   0x3CEE11 cmp     r15, rdx
//   0x3CEE14 jnb     short loc_3CEE1E
//   0x3CEE16 mov     rax, rsi
//   0x3CEE19 mov     ecx, 1
//   0x3CEE1E test    rax, rax
//   0x3CEE21 jnz     short loc_3CEE00
//   0x3CEE23 test    cl, cl
//   0x3CEE25 jnz     loc_3CF048
//   0x3CEE2B cmp     rdx, r15
//   0x3CEE2E jnb     short loc_3CEE80
//   0x3CEE30 mov     r9d, 1
//   0x3CEE36 cmp     r8, rbp
//   0x3CEE39 jnz     loc_3CF082
//   0x3CEE3F mov     edi, 28h ; '('; unsigned __int64
//   0x3CEE44 mov     [rsp+88h+var_80], r9d
//   0x3CEE49 mov     qword ptr [rsp+88h+var_88], r8
//   0x3CEE4D call    __Znwm; operator new(ulong)
//   0x3CEE52 mov     rcx, qword ptr [rsp+88h+var_88]
//   0x3CEE56 mov     edi, [rsp+88h+var_80]
//   0x3CEE5A mov     rdx, rbp
//   0x3CEE5D mov     [rax+20h], r15
//   0x3CEE61 mov     rsi, rax
//   0x3CEE64 call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x3CEE69 add     qword ptr [r12+300h], 1
//   0x3CEE72 nop     word ptr [rax+rax+00000000h]
//   0x3CEE7D nop     dword ptr [rax]
//   0x3CEE80 lea     rax, qword_2CCB548
//   0x3CEE87 or      r13d, 1
//   0x3CEE8B mov     rax, [rax]
//   0x3CEE8E test    rax, rax
//   0x3CEE91 jz      loc_3CEB86
//   0x3CEE97 mov     esi, 1
//   0x3CEE9C mov     rdi, rbx
//   0x3CEE9F call    rax
//   0x3CEEA1 jmp     loc_3CEB86
//   0x3CEEA6 align 10h
//   0x3CEEB0 mov     rdi, r12
//   0x3CEEB3 call    sub_3FC580
//   0x3CEEB8 test    al, al
//   0x3CEEBA jz      loc_3CEB7A
//   0x3CEEC0 mov     rdi, rbx
//   0x3CEEC3 call    _nbits
//   0x3CEEC8 lea     r13d, [rax+0Eh]
//   0x3CEECC add     eax, 7
//   0x3CEECF cmovns  r13d, eax
//   0x3CEED3 mov     rax, [r12+318h]
//   0x3CEEDB sar     r13d, 3
//   0x3CEEDF test    rax, rax
//   0x3CEEE2 jz      loc_3CF097
//   0x3CEEE8 mov     edx, r13d
//   0x3CEEEB lea     rsi, [rsp+88h+var_70]
//   0x3CEEF0 mov     rdi, rbx
//   0x3CEEF3 call    rax
//   0x3CEEF5 cmp     eax, r13d
//   0x3CEEF8 setz    r13b
//   0x3CEEFC movzx   r13d, r13b
//   0x3CEF00 add     r13d, r13d
//   0x3CEF03 jmp     loc_3CEB7D
//   0x3CEF08 align 10h
//   0x3CEF10 xor     r13d, r13d
//   0x3CEF13 jmp     loc_3CEB95
//   0x3CEF18 align 20h
//   0x3CEF20 mov     rsi, rbx
//   0x3CEF23 mov     rdi, r12
//   0x3CEF26 call    sub_510230
//   0x3CEF2B mov     edx, eax
//   0x3CEF2D mov     rax, [r12+10h]
//   0x3CEF32 cmp     dl, 2
//   0x3CEF35 jz      short loc_3CEF40
//   0x3CEF37 mov     r15d, [rax+14h]
//   0x3CEF3B jmp     loc_3CEBF7
//   0x3CEF40 mov     r15d, [rax+10h]
//   0x3CEF44 jmp     loc_3CEBF7
//   0x3CEF49 align 10h
//   0x3CEF50 lea     rsi, [r12+3B8h]
//   0x3CEF58 mov     rdx, rbx
//   0x3CEF5B mov     rdi, r12
//   0x3CEF5E mov     qword ptr [rsp+88h+var_78], r10
//   0x3CEF63 mov     [rsp+88h+var_80], r10d
//   0x3CEF68 call    sub_3CE960
//   0x3CEF6D mov     r11d, [rsp+88h+var_80]
//   0x3CEF72 mov     r10, qword ptr [rsp+88h+var_78]
//   0x3CEF77 mov     rax, [r12+3E8h]
//   0x3CEF7F add     rax, 30h ; '0'
//   0x3CEF83 cmp     ebp, 100h
//   0x3CEF89 mov     qword ptr [rsp+88h+var_88], rax; int
//   0x3CEF8D mov     rax, qword ptr [rsp+88h+var_70]
//   0x3CEF92 jz      loc_3CECE0
//   0x3CEF98 mov     byte ptr [r12+4B0h], 1
//   0x3CEFA1 test    al, al
//   0x3CEFA3 jz      loc_3CECE0
//   0x3CEFA9 cmp     qword ptr [r12+490h], 0
//   0x3CEFB2 jz      loc_3CECE0
//   0x3CEFB8 lea     rbp, [r12+488h]
//   0x3CEFC0 mov     rsi, rbx
//   0x3CEFC3 mov     rdi, rbp
//   0x3CEFC6 call    _rangeset_t_find_range
//   0x3CEFCB mov     r11d, [rsp+88h+var_80]
//   0x3CEFD0 mov     r10, qword ptr [rsp+88h+var_78]
//   0x3CEFD5 test    rax, rax
//   0x3CEFD8 jz      loc_3CECD6
//   0x3CEFDE lea     rsi, [rsp+88h+var_58]; int
//   0x3CEFE3 mov     rdi, rbp; int
//   0x3CEFE6 mov     qword ptr [rsp+88h+var_78], r10; int
//   0x3CEFEB mov     [rsp+88h+var_80], r11d; int
//   0x3CEFF0 mov     qword ptr [rsp+88h+var_58], rbx; int
//   0x3CEFF5 mov     qword ptr [rsp+88h+var_50], r14; int
//   0x3CEFFA call    _rangeset_t_sub
//   0x3CEFFF mov     rax, qword ptr [rsp+88h+var_70]
//   0x3CF004 mov     r11d, [rsp+88h+var_80]
//   0x3CF009 mov     r10, qword ptr [rsp+88h+var_78]
//   0x3CF00E jmp     loc_3CECE0
//   0x3CF013 mov     [rbp+48h], eax
//   0x3CF016 mov     edx, 1
//   0x3CF01B mov     qword ptr [rsp+88h+var_78], r9
//   0x3CF020 mov     qword ptr [rsp+88h+var_80], r10
//   0x3CF025 mov     [rsp+88h+var_88], r11d
//   0x3CF029 call    sub_8BCA60
//   0x3CF02E mov     r9, qword ptr [rsp+88h+var_78]
//   0x3CF033 mov     r10, qword ptr [rsp+88h+var_80]
//   0x3CF038 mov     [rbp+50h], rax
//   0x3CF03C mov     r11d, [rsp+88h+var_88]
//   0x3CF040 jmp     loc_3CECAE
//   0x3CF045 mov     rbp, r8
//   0x3CF048 cmp     rbp, [r12+2F0h]
//   0x3CF050 jz      loc_3CEE30
//   0x3CF056 mov     rdi, rbp
//   0x3CF059 mov     qword ptr [rsp+88h+var_88], r8
//   0x3CF05D call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CF062 mov     r8, qword ptr [rsp+88h+var_88]
//   0x3CF066 mov     rdx, [rax+20h]
//   0x3CF06A jmp     loc_3CEE2B
//   0x3CF06F mov     rsi, rbx
//   0x3CF072 mov     rdi, r12
//   0x3CF075 call    sub_3C2650
//   0x3CF07A mov     r15, rax
//   0x3CF07D jmp     loc_3CEDDF
//   0x3CF082 xor     r9d, r9d
//   0x3CF085 cmp     r15, [rbp+20h]
//   0x3CF089 setb    r9b
//   0x3CF08D jmp     loc_3CEE3F
//   0x3CF092 call    ___stack_chk_fail
//   0x3CF097 mov     rax, cs:under_debugger_ptr
//   0x3CF09E cmp     byte ptr [rax], 0
//   0x3CF0A1 jnz     loc_2B4370
//   0x3CF0A7 mov     rax, qword ptr [rsp+88h+var_40]
//   0x3CF0AC sub     rax, fs:28h
//   0x3CF0B5 jnz     short loc_3CF0C1
//   0x3CF0B7 mov     edi, 52Eh
//   0x3CF0BC call    _interr
//   0x3CF0C1 call    ___stack_chk_fail
// ============================================================

void sub_3CEB40(/* signature unknown */)
{
    // see disassembly above
}

