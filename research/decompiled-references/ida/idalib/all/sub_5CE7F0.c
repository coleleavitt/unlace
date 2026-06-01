// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5CE7F0
// Name:           sub_5CE7F0
// Function size:  2209 bytes (560 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5CE7F0 push    r15
//   0x5CE7F2 push    r14
//   0x5CE7F4 lea     r14, [rdi+6A8h]
//   0x5CE7FB push    r13; __int64
//   0x5CE7FD push    r12; int
//   0x5CE7FF mov     r12, rsi
//   0x5CE802 push    rbp; int
//   0x5CE803 mov     rbp, rdi
//   0x5CE806 mov     rdi, r14
//   0x5CE809 push    rbx; __int64
//   0x5CE80A sub     rsp, 78h
//   0x5CE80E mov     r13, fs:28h
//   0x5CE817 mov     qword ptr [rsp+0A8h+var_40], r13; int
//   0x5CE81C mov     r13, rdx
//   0x5CE81F call    sub_505D70
//   0x5CE824 test    rax, rax
//   0x5CE827 jz      loc_5CECA8
//   0x5CE82D mov     edx, 4
//   0x5CE832 mov     rsi, r13
//   0x5CE835 mov     rdi, rbp
//   0x5CE838 mov     rbx, rax
//   0x5CE83B call    sub_3BE900
//   0x5CE840 and     eax, 600h
//   0x5CE845 test    byte ptr [rbx+11h], 80h
//   0x5CE849 jnz     short loc_5CE880
//   0x5CE84B cmp     rax, 600h
//   0x5CE851 jz      short loc_5CE888
//   0x5CE853 mov     eax, 1
//   0x5CE858 mov     rdx, qword ptr [rsp+0A8h+var_40]
//   0x5CE85D sub     rdx, fs:28h
//   0x5CE866 jnz     loc_5CF05C
//   0x5CE86C add     rsp, 78h
//   0x5CE870 pop     rbx
//   0x5CE871 pop     rbp
//   0x5CE872 pop     r12
//   0x5CE874 pop     r13
//   0x5CE876 pop     r14
//   0x5CE878 pop     r15
//   0x5CE87A retn
//   0x5CE87B align 20h
//   0x5CE880 cmp     rax, 200h
//   0x5CE886 jz      short loc_5CE8CC
//   0x5CE888 lea     r15, [rbp+658h]
//   0x5CE88F mov     rsi, r12
//   0x5CE892 mov     rdi, r15
//   0x5CE895 call    sub_505D70
//   0x5CE89A mov     rsi, r13
//   0x5CE89D mov     rdi, r15
//   0x5CE8A0 mov     qword ptr [rsp+0A8h+var_A8], rax
//   0x5CE8A4 call    sub_505D70
//   0x5CE8A9 mov     rdx, qword ptr [rsp+0A8h+var_A8]
//   0x5CE8AD test    rdx, rdx
//   0x5CE8B0 setz    sil
//   0x5CE8B4 test    rax, rax
//   0x5CE8B7 setz    cl
//   0x5CE8BA or      sil, cl
//   0x5CE8BD mov     byte ptr [rsp+0A8h+var_98], sil; __int64
//   0x5CE8C2 jnz     short loc_5CE8CC
//   0x5CE8C4 mov     rax, [rax]
//   0x5CE8C7 cmp     [rdx], rax
//   0x5CE8CA jz      short loc_5CE8D8
//   0x5CE8CC mov     eax, 2
//   0x5CE8D1 jmp     short loc_5CE858
//   0x5CE8D3 align 8
//   0x5CE8D8 mov     esi, 1
//   0x5CE8DD mov     rdi, rbx
//   0x5CE8E0 call    _lock_func_range
//   0x5CE8E5 mov     rdx, r13
//   0x5CE8E8 mov     rsi, rbx
//   0x5CE8EB mov     edi, 22h ; '"'
//   0x5CE8F0 xor     eax, eax
//   0x5CE8F2 call    sub_39ADA0
//   0x5CE8F7 xor     esi, esi
//   0x5CE8F9 mov     rdi, rbx
//   0x5CE8FC call    _lock_func_range
//   0x5CE901 mov     rax, [rbx]
//   0x5CE904 mov     qword ptr [rsp+0A8h+var_90], rax; int
//   0x5CE909 mov     rax, [rbx+10h]
//   0x5CE90D and     eax, 8000h
//   0x5CE912 mov     qword ptr [rsp+0A8h+var_A8], rax; int
//   0x5CE916 jz      loc_5CECB8
//   0x5CE91C mov     rsi, [rbx+18h]
//   0x5CE920 mov     rdi, r14
//   0x5CE923 call    sub_505D70
//   0x5CE928 mov     [rsp+0A8h+var_A0], rax
//   0x5CE92D test    rax, rax
//   0x5CE930 jz      short loc_5CE93C
//   0x5CE932 test    byte ptr [rax+11h], 80h
//   0x5CE936 jnz     loc_5CEF80
//   0x5CE93C mov     rsi, rbx
//   0x5CE93F mov     rdi, rbp
//   0x5CE942 call    sub_5C7D50
//   0x5CE947 mov     esi, 1
//   0x5CE94C mov     rdi, rbx
//   0x5CE94F call    _lock_func_range
//   0x5CE954 lea     rax, [r13-1]
//   0x5CE958 mov     rsi, [rsp+0A8h+var_A0]
//   0x5CE95D mov     rdi, rbp
//   0x5CE960 mov     rdx, rax
//   0x5CE963 mov     qword ptr [rsp+0A8h+var_A8], rax
//   0x5CE967 call    sub_5C93A0
//   0x5CE96C test    rax, rax
//   0x5CE96F jz      loc_5CEA00
//   0x5CE975 cmp     [rax+8], r13
//   0x5CE979 jnz     loc_5CEA00
//   0x5CE97F cmp     [rsp+0A8h+var_A0], 0
//   0x5CE985 jz      short loc_5CEA00
//   0x5CE987 mov     rsi, [rsp+0A8h+var_A0]
//   0x5CE98C mov     rdi, qword ptr [rsp+0A8h+var_A8]
//   0x5CE990 mov     [rsp+0A8h+var_98], rax
//   0x5CE995 call    sub_5CBBA0
//   0x5CE99A test    al, al
//   0x5CE99C jz      short loc_5CEA00
//   0x5CE99E mov     rdx, [rsp+0A8h+var_98]
//   0x5CE9A3 mov     rsi, [rdx]
//   0x5CE9A6 cmp     rsi, r13
//   0x5CE9A9 jz      loc_5CF053
//   0x5CE9AF mov     rdi, r15
//   0x5CE9B2 call    sub_505D70
//   0x5CE9B7 mov     rsi, r13
//   0x5CE9BA mov     rdi, r15
//   0x5CE9BD mov     qword ptr [rsp+0A8h+var_A8], rax
//   0x5CE9C1 call    sub_505D70
//   0x5CE9C6 cmp     qword ptr [rsp+0A8h+var_A8], rax
//   0x5CE9CA jnz     short loc_5CEA00
//   0x5CE9CC mov     rdx, [rsp+0A8h+var_98]
//   0x5CE9D1 mov     rax, [rdx]
//   0x5CE9D4 mov     qword ptr [rsp+0A8h+var_A8], rax
//   0x5CE9D8 mov     rsi, [rsp+0A8h+var_A0]
//   0x5CE9DD xor     ecx, ecx
//   0x5CE9DF mov     rdi, rbp; int
//   0x5CE9E2 call    sub_5CE320
//   0x5CE9E7 test    al, al
//   0x5CE9E9 jnz     short loc_5CEA04
//   0x5CE9EB xor     esi, esi
//   0x5CE9ED mov     rdi, rbx
//   0x5CE9F0 call    _lock_func_range
//   0x5CE9F5 jmp     loc_5CE8CC
//   0x5CE9FA align 20h
//   0x5CEA00 mov     qword ptr [rsp+0A8h+var_A8], r13
//   0x5CEA04 xor     esi, esi
//   0x5CEA06 mov     rdi, rbx
//   0x5CEA09 call    _lock_func_range
//   0x5CEA0E mov     r15, [rsp+0A8h+var_A0]
//   0x5CEA13 mov     rdi, rbp
//   0x5CEA16 mov     rsi, r15
//   0x5CEA19 call    sub_5B8DA0
//   0x5CEA1E mov     rsi, r15
//   0x5CEA21 mov     rdi, rbp
//   0x5CEA24 call    sub_674A10
//   0x5CEA29 mov     rsi, r15
//   0x5CEA2C mov     rdi, rbp
//   0x5CEA2F call    sub_63F420
//   0x5CEA34 mov     edx, 1
//   0x5CEA39 mov     rsi, r15
//   0x5CEA3C mov     rdi, rbp
//   0x5CEA3F call    sub_5C7820
//   0x5CEA44 mov     rsi, r12
//   0x5CEA47 mov     rdi, r14
//   0x5CEA4A call    sub_503EE0
//   0x5CEA4F mov     rdx, qword ptr [rsp+0A8h+var_A8]
//   0x5CEA53 mov     rdi, r14
//   0x5CEA56 mov     esi, eax
//   0x5CEA58 call    sub_506920
//   0x5CEA5D mov     byte ptr [rsp+0A8h+var_98], al
//   0x5CEA61 test    al, al
//   0x5CEA63 jz      loc_5CE8CC
//   0x5CEA69 lea     rax, [rsp+0A8h+var_58]
//   0x5CEA6E mov     rsi, rbx
//   0x5CEA71 mov     [rsp+0A8h+var_58], 0
//   0x5CEA7A mov     rdi, rax
//   0x5CEA7D mov     [rsp+0A8h+var_A0], rax
//   0x5CEA82 call    _func_parent_iterator_set
//   0x5CEA87 mov     esi, 1
//   0x5CEA8C mov     rdi, rbx
//   0x5CEA8F call    _lock_func_range
//   0x5CEA94 mov     rdx, [rsp+0A8h+var_58]
//   0x5CEA99 mov     dword ptr [rsp+0A8h+var_50], 0
//   0x5CEAA1 test    rdx, rdx
//   0x5CEAA4 jz      loc_5CEB38
//   0x5CEAAA test    byte ptr [rdx+11h], 80h
//   0x5CEAAE jz      loc_5CEB38
//   0x5CEAB4 mov     edi, [rdx+20h]
//   0x5CEAB7 test    edi, edi
//   0x5CEAB9 jle     short loc_5CEB38
//   0x5CEABB nop     dword ptr [rax+rax+00h]
//   0x5CEAC0 movsxd  rcx, dword ptr [rsp+0A8h+var_50]
//   0x5CEAC5 mov     rax, [rdx+28h]
//   0x5CEAC9 mov     rdi, r14
//   0x5CEACC mov     rsi, [rax+rcx*8]
//   0x5CEAD0 call    sub_505D70
//   0x5CEAD5 mov     r15, rax
//   0x5CEAD8 test    rax, rax
//   0x5CEADB jz      short loc_5CEAF2
//   0x5CEADD test    byte ptr [rax+11h], 80h
//   0x5CEAE1 jz      short loc_5CEAF2
//   0x5CEAE3 mov     rsi, [rax+18h]
//   0x5CEAE7 mov     rdi, r14
//   0x5CEAEA call    sub_505D70
//   0x5CEAEF mov     r15, rax
//   0x5CEAF2 mov     rdx, r12
//   0x5CEAF5 mov     rsi, r15
//   0x5CEAF8 mov     rdi, rbp
//   0x5CEAFB call    sub_5C93A0
//   0x5CEB00 test    rax, rax
//   0x5CEB03 jz      short loc_5CEB1C
//   0x5CEB05 mov     rcx, qword ptr [rsp+0A8h+var_A8]
//   0x5CEB09 mov     edx, 1
//   0x5CEB0E mov     rsi, r15
//   0x5CEB11 mov     rdi, rbp
//   0x5CEB14 mov     [rax], rcx
//   0x5CEB17 call    sub_5C7BB0
//   0x5CEB1C mov     eax, dword ptr [rsp+0A8h+var_50]
//   0x5CEB20 mov     rdx, [rsp+0A8h+var_58]
//   0x5CEB25 add     eax, 1
//   0x5CEB28 cmp     eax, [rdx+20h]
//   0x5CEB2B jge     short loc_5CEB38
//   0x5CEB2D mov     dword ptr [rsp+0A8h+var_50], eax
//   0x5CEB31 jmp     short loc_5CEAC0
//   0x5CEB33 align 8
//   0x5CEB38 xor     esi, esi
//   0x5CEB3A mov     rdi, rbx
//   0x5CEB3D call    _lock_func_range
//   0x5CEB42 mov     rsi, r12
//   0x5CEB45 mov     rdi, rbp
//   0x5CEB48 call    sub_3BDD60
//   0x5CEB4D mov     rsi, [rbp+0]
//   0x5CEB51 lea     rdi, [rsp+0A8h+src]
//   0x5CEB56 mov     ecx, 53h ; 'S'
//   0x5CEB5B mov     edx, 7000h
//   0x5CEB60 mov     [rsp+0A8h+src], rax
//   0x5CEB65 call    sub_7BEF80
//   0x5CEB6A mov     edx, 1
//   0x5CEB6F mov     rsi, rbx
//   0x5CEB72 mov     rdi, rbp
//   0x5CEB75 call    sub_5C85A0
//   0x5CEB7A mov     rsi, [rbx+18h]
//   0x5CEB7E mov     rdi, r14
//   0x5CEB81 call    sub_505D70
//   0x5CEB86 mov     rbx, rax
//   0x5CEB89 test    rax, rax
//   0x5CEB8C jz      short loc_5CEBA3
//   0x5CEB8E test    byte ptr [rax+11h], 80h
//   0x5CEB92 jz      short loc_5CEBA3
//   0x5CEB94 mov     rsi, [rax+18h]
//   0x5CEB98 mov     rdi, r14
//   0x5CEB9B call    sub_505D70
//   0x5CEBA0 mov     rbx, rax
//   0x5CEBA3 mov     r14, qword ptr [rsp+0A8h+var_90]
//   0x5CEBA8 cmp     r13, r14
//   0x5CEBAB jnb     short loc_5CEBDE
//   0x5CEBAD mov     edx, 26h ; '&'
//   0x5CEBB2 mov     rsi, r14
//   0x5CEBB5 mov     rdi, r13
//   0x5CEBB8 call    _auto_mark_range
//   0x5CEBBD mov     edx, 28h ; '('
//   0x5CEBC2 mov     rsi, r14
//   0x5CEBC5 mov     rdi, r13
//   0x5CEBC8 call    _auto_mark_range
//   0x5CEBCD mov     rcx, r13
//   0x5CEBD0 mov     rdx, r14
//   0x5CEBD3 mov     rsi, rbx
//   0x5CEBD6 mov     rdi, rbp
//   0x5CEBD9 call    sub_5BAF30
//   0x5CEBDE mov     rdi, [rsp+0A8h+var_58]
//   0x5CEBE3 test    rdi, rdi
//   0x5CEBE6 jz      short loc_5CEBEF
//   0x5CEBE8 xor     esi, esi
//   0x5CEBEA call    _lock_func_range
//   0x5CEBEF mov     rsi, rbx
//   0x5CEBF2 mov     rdi, rbp
//   0x5CEBF5 call    sub_5CCFA0
//   0x5CEBFA mov     rsi, rbx
//   0x5CEBFD mov     rdi, rbp; int
//   0x5CEC00 call    sub_5C9B90
//   0x5CEC05 mov     r14, qword ptr [rsp+0A8h+var_A8]
//   0x5CEC09 mov     rsi, rbx
//   0x5CEC0C mov     rdi, rbp
//   0x5CEC0F mov     r15, qword ptr [rsp+0A8h+var_90]
//   0x5CEC14 mov     rcx, r14
//   0x5CEC17 mov     rdx, r15
//   0x5CEC1A call    sub_5BAD80
//   0x5CEC1F mov     edx, 1
//   0x5CEC24 mov     rsi, rbx
//   0x5CEC27 mov     rdi, rbp
//   0x5CEC2A call    sub_63F270
//   0x5CEC2F test    al, al
//   0x5CEC31 jz      loc_5CE8CC
//   0x5CEC37 mov     edx, 1
//   0x5CEC3C mov     rsi, rbx
//   0x5CEC3F mov     rdi, rbp
//   0x5CEC42 call    sub_674600
//   0x5CEC47 movzx   edx, byte ptr [rsp+0A8h+var_98]
//   0x5CEC4C mov     rsi, rbx
//   0x5CEC4F mov     rdi, rbp
//   0x5CEC52 xor     edx, 1
//   0x5CEC55 movzx   edx, dl
//   0x5CEC58 call    sub_5CD980
//   0x5CEC5D mov     rdi, [rbp+0]
//   0x5CEC61 mov     rsi, r15
//   0x5CEC64 call    sub_4E15D0
//   0x5CEC69 mov     rdi, [rbp+0]
//   0x5CEC6D mov     rsi, r14
//   0x5CEC70 call    sub_4E15D0
//   0x5CEC75 mov     rdx, r15
//   0x5CEC78 xor     esi, esi
//   0x5CEC7A mov     edi, 1
//   0x5CEC7F xor     eax, eax
//   0x5CEC81 call    sub_52CCE0
//   0x5CEC86 xor     eax, eax
//   0x5CEC88 mov     rdx, r14
//   0x5CEC8B mov     esi, 1
//   0x5CEC90 mov     edi, 1
//   0x5CEC95 call    sub_52CCE0
//   0x5CEC9A xor     eax, eax
//   0x5CEC9C jmp     loc_5CE858
//   0x5CECA1 align 8
//   0x5CECA8 mov     eax, 3
//   0x5CECAD jmp     loc_5CE858
//   0x5CECB2 align 8
//   0x5CECB8 mov     rsi, rbx
//   0x5CECBB mov     rdi, rbp
//   0x5CECBE call    sub_5B8DA0
//   0x5CECC3 mov     rsi, rbx
//   0x5CECC6 mov     rdi, rbp
//   0x5CECC9 call    sub_674A10
//   0x5CECCE mov     rsi, rbx
//   0x5CECD1 mov     rdi, rbp
//   0x5CECD4 call    sub_63F420
//   0x5CECD9 mov     edx, 1
//   0x5CECDE mov     rsi, rbx
//   0x5CECE1 mov     rdi, rbp
//   0x5CECE4 call    sub_5C7820
//   0x5CECE9 mov     rsi, r12
//   0x5CECEC mov     rdi, r14
//   0x5CECEF call    sub_503EE0
//   0x5CECF4 mov     rdx, r13
//   0x5CECF7 mov     rdi, r14
//   0x5CECFA mov     esi, eax
//   0x5CECFC call    sub_506920
//   0x5CED01 test    al, al
//   0x5CED03 jz      loc_5CE8CC
//   0x5CED09 pxor    xmm0, xmm0
//   0x5CED0D mov     edx, 4
//   0x5CED12 mov     rsi, r12
//   0x5CED15 mov     rdi, rbp
//   0x5CED18 mov     [rsp+0A8h+src], 0; int
//   0x5CED21 movups  xmmword ptr [rsp+0A8h+var_70], xmm0; int
//   0x5CED26 call    sub_3BE900
//   0x5CED2B and     eax, 0C000h
//   0x5CED30 mov     qword ptr [rsp+0A8h+var_88], rax; int
//   0x5CED35 cmp     rax, 8000h
//   0x5CED3B jz      short loc_5CED4E
//   0x5CED3D lea     rdi, [rsp+0A8h+src]
//   0x5CED42 xor     ecx, ecx
//   0x5CED44 xor     edx, edx
//   0x5CED46 mov     rsi, r12
//   0x5CED49 call    _get_ea_name
//   0x5CED4E mov     r11, [rbp+0]
//   0x5CED52 mov     rdx, r12
//   0x5CED55 mov     r10, [r11+650h]
//   0x5CED5C mov     r9, [r10+20h]
//   0x5CED60 mov     rdi, [r10+18h]
//   0x5CED64 shl     r9, 4
//   0x5CED68 add     r9, rdi
//   0x5CED6B mov     rsi, r9
//   0x5CED6E call    sub_5C46C0
//   0x5CED73 mov     r15, rax
//   0x5CED76 cmp     r9, rax
//   0x5CED79 jz      short loc_5CEDA0
//   0x5CED7B cmp     [rax], r12
//   0x5CED7E jnz     short loc_5CEDA0
//   0x5CED80 mov     [rsp+0A8h+var_A0], r10; int
//   0x5CED85 call    _must_journal
//   0x5CED8A test    al, al
//   0x5CED8C mov     r10, [rsp+0A8h+var_A0]
//   0x5CED91 jnz     loc_5CEFB7
//   0x5CED97 mov     [r15], r13
//   0x5CED9A mov     r11, [rbp+0]
//   0x5CED9E xchg    ax, ax
//   0x5CEDA0 mov     edx, 10000000h
//   0x5CEDA5 mov     rsi, r12
//   0x5CEDA8 mov     rdi, r11
//   0x5CEDAB call    sub_3D0110
//   0x5CEDB0 mov     rsi, r12
//   0x5CEDB3 mov     rdi, rbp
//   0x5CEDB6 call    sub_673A20
//   0x5CEDBB mov     ecx, 100h
//   0x5CEDC0 lea     rdx, byte_22F0C30; src
//   0x5CEDC7 mov     rsi, r12; int
//   0x5CEDCA mov     rdi, rbp; int
//   0x5CEDCD call    sub_4D7EC0
//   0x5CEDD2 mov     rsi, [rbx]
//   0x5CEDD5 mov     rdi, rbp
//   0x5CEDD8 call    sub_3BDD60
//   0x5CEDDD mov     rdi, rax
//   0x5CEDE0 mov     edx, 53h ; 'S'
//   0x5CEDE5 mov     esi, 1000h
//   0x5CEDEA call    _netnode_delblob
//   0x5CEDEF mov     rsi, r12
//   0x5CEDF2 mov     rdi, rbp
//   0x5CEDF5 call    sub_63F250
//   0x5CEDFA mov     rsi, r12
//   0x5CEDFD mov     rdi, rbp
//   0x5CEE00 call    sub_6745B0
//   0x5CEE05 mov     rsi, r12
//   0x5CEE08 mov     rdi, rbp
//   0x5CEE0B call    sub_3BDD60
//   0x5CEE10 mov     rsi, [rbp+0]
//   0x5CEE14 lea     rdi, [rsp+0A8h+var_58]
//   0x5CEE19 mov     ecx, 53h ; 'S'
//   0x5CEE1E mov     edx, 7000h
//   0x5CEE23 mov     [rsp+0A8h+var_58], rax; int
//   0x5CEE28 call    sub_7BEF80
//   0x5CEE2D mov     r15, [rbx+78h]
//   0x5CEE31 test    r15, r15
//   0x5CEE34 jz      short loc_5CEE70
//   0x5CEE36 mov     ecx, [rbx+70h]
//   0x5CEE39 test    ecx, ecx
//   0x5CEE3B jle     short loc_5CEE60
//   0x5CEE3D xor     eax, eax
//   0x5CEE3F nop
//   0x5CEE40 mov     rdi, r15
//   0x5CEE43 mov     dword ptr [rsp+0A8h+var_A0], eax; ptr
//   0x5CEE47 call    _free_regarg
//   0x5CEE4C mov     eax, dword ptr [rsp+0A8h+var_A0]
//   0x5CEE50 add     r15, 18h
//   0x5CEE54 add     eax, 1
//   0x5CEE57 cmp     eax, [rbx+70h]
//   0x5CEE5A jl      short loc_5CEE40
//   0x5CEE5C mov     r15, [rbx+78h]
//   0x5CEE60 mov     rdi, r15; ptr
//   0x5CEE63 call    _qfree
//   0x5CEE68 mov     qword ptr [rbx+78h], 0
//   0x5CEE70 mov     dword ptr [rbx+70h], 0
//   0x5CEE77 mov     rdi, [rbp+0]
//   0x5CEE7B mov     edx, 10000000h
//   0x5CEE80 mov     rsi, r13
//   0x5CEE83 call    sub_3CFE80
//   0x5CEE88 mov     rsi, qword ptr [rsp+0A8h+var_90]
//   0x5CEE8D mov     rdx, r13
//   0x5CEE90 mov     rdi, rbp
//   0x5CEE93 call    sub_54C080
//   0x5CEE98 cmp     qword ptr [rsp+0A8h+var_88], 8000h
//   0x5CEEA1 mov     [rbx+18h], r13
//   0x5CEEA5 jz      loc_5CEFA0
//   0x5CEEAB mov     rdx, [rsp+0A8h+src]; src
//   0x5CEEB0 xor     ecx, ecx
//   0x5CEEB2 mov     rsi, r13; int
//   0x5CEEB5 mov     rdi, rbp; int
//   0x5CEEB8 call    sub_4D7EC0
//   0x5CEEBD mov     edx, [rbx+80h]
//   0x5CEEC3 test    edx, edx
//   0x5CEEC5 jle     short loc_5CEF41
//   0x5CEEC7 nop     word ptr [rax+rax+00000000h]
//   0x5CEED0 mov     rax, qword ptr [rsp+0A8h+var_A8]
//   0x5CEED4 mov     rdi, r14
//   0x5CEED7 shl     rax, 4
//   0x5CEEDB add     rax, [rbx+88h]
//   0x5CEEE2 mov     rsi, [rax]
//   0x5CEEE5 call    sub_505D70
//   0x5CEEEA mov     r15, rax
//   0x5CEEED test    rax, rax
//   0x5CEEF0 jz      short loc_5CEF30
//   0x5CEEF2 mov     rax, [rbx]
//   0x5CEEF5 mov     rsi, r15
//   0x5CEEF8 mov     rdi, rbp
//   0x5CEEFB mov     [r15+18h], rax
//   0x5CEEFF call    sub_5C7D50
//   0x5CEF04 mov     rdi, [r15+28h]
//   0x5CEF08 movsxd  rax, dword ptr [r15+20h]
//   0x5CEF0C mov     rdx, r12
//   0x5CEF0F lea     r9, [rdi+rax*8]
//   0x5CEF13 mov     rsi, r9
//   0x5CEF16 call    sub_5C4680
//   0x5CEF1B cmp     r9, rax
//   0x5CEF1E jz      short loc_5CEF30
//   0x5CEF20 cmp     [rax], r12
//   0x5CEF23 jnz     short loc_5CEF30
//   0x5CEF25 mov     rdx, [rbx]
//   0x5CEF28 mov     [rax], rdx
//   0x5CEF2B nop     dword ptr [rax+rax+00h]
//   0x5CEF30 add     qword ptr [rsp+0A8h+var_A8], 1
//   0x5CEF35 mov     rax, qword ptr [rsp+0A8h+var_A8]
//   0x5CEF39 cmp     [rbx+80h], eax
//   0x5CEF3F jg      short loc_5CEED0
//   0x5CEF41 mov     edx, 1
//   0x5CEF46 mov     rsi, rbx
//   0x5CEF49 mov     rdi, rbp
//   0x5CEF4C call    sub_5C7BB0
//   0x5CEF51 xor     edx, edx
//   0x5CEF53 mov     rsi, rbx
//   0x5CEF56 mov     rdi, rbp
//   0x5CEF59 call    sub_5BA1C0
//   0x5CEF5E mov     rdi, [rsp+0A8h+src]; ptr
//   0x5CEF63 test    rdi, rdi
//   0x5CEF66 jz      short loc_5CEF76
//   0x5CEF68 mov     qword ptr [rsp+0A8h+var_70], 0
//   0x5CEF71 call    _qfree
//   0x5CEF76 mov     qword ptr [rsp+0A8h+var_A8], r13
//   0x5CEF7A jmp     loc_5CEBEF
//   0x5CEF7F align 20h
//   0x5CEF80 mov     rsi, [rax+18h]
//   0x5CEF84 mov     rdi, r14
//   0x5CEF87 call    sub_505D70
//   0x5CEF8C mov     [rsp+0A8h+var_A0], rax
//   0x5CEF91 jmp     loc_5CE93C
//   0x5CEF96 align 20h
//   0x5CEFA0 mov     rdx, r13
//   0x5CEFA3 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x5CEFAA mov     rdi, rbp; int
//   0x5CEFAD call    sub_4D9890
//   0x5CEFB2 jmp     loc_5CEEBD
//   0x5CEFB7 lea     rax, [rsp+0A8h+var_58]
//   0x5CEFBC pxor    xmm0, xmm0
//   0x5CEFC0 mov     ecx, 1
//   0x5CEFC5 xor     esi, esi
//   0x5CEFC7 mov     edx, 1
//   0x5CEFCC mov     rdi, rax
//   0x5CEFCF mov     [rsp+0A8h+var_80], r10
//   0x5CEFD4 mov     [rsp+0A8h+var_58], 0
//   0x5CEFDD mov     [rsp+0A8h+var_A0], rax
//   0x5CEFE2 movups  [rsp+0A8h+var_50], xmm0
//   0x5CEFE7 call    _qvector_reserve
//   0x5CEFEC mov     rdx, qword ptr [rsp+0A8h+var_50]
//   0x5CEFF1 mov     rdi, [rsp+0A8h+var_A0]
//   0x5CEFF6 mov     [rsp+0A8h+var_58], rax
//   0x5CEFFB mov     rsi, r12
//   0x5CEFFE mov     byte ptr [rax+rdx], 2
//   0x5CF002 add     qword ptr [rsp+0A8h+var_50], 1
//   0x5CF008 call    sub_40D2A0
//   0x5CF00D mov     rdi, [rsp+0A8h+var_A0]
//   0x5CF012 mov     rsi, r13
//   0x5CF015 call    sub_40D2A0
//   0x5CF01A mov     r10, [rsp+0A8h+var_80]
//   0x5CF01F mov     rdx, qword ptr [rsp+0A8h+var_50]
//   0x5CF024 mov     rsi, [rsp+0A8h+var_58]
//   0x5CF029 mov     edi, [r10+30h]
//   0x5CF02D call    _add_undo_record
//   0x5CF032 mov     rdi, [rsp+0A8h+var_58]; ptr
//   0x5CF037 test    rdi, rdi
//   0x5CF03A jz      loc_5CED97
//   0x5CF040 mov     qword ptr [rsp+0A8h+var_50], 0
//   0x5CF049 call    _qfree
//   0x5CF04E jmp     loc_5CED97
//   0x5CF053 mov     qword ptr [rsp+0A8h+var_A8], r13
//   0x5CF057 jmp     loc_5CE9D8
//   0x5CF05C call    ___stack_chk_fail
//   0x5CF061 mov     rbp, rax
//   0x5CF064 jmp     loc_2C8CE2
//   0x5CF069 mov     rbx, rax
//   0x5CF06C jmp     loc_2C8D04
//   0x5CF071 mov     rbp, rax
//   0x5CF074 jmp     loc_2C8CD8
//   0x5CF079 mov     rbp, rax
//   0x5CF07C jmp     loc_2C8D52
//   0x5CF081 mov     rbp, rax
//   0x5CF084 jmp     loc_2C8D74
//   0x5CF089 mov     rbx, rax
//   0x5CF08C jmp     loc_2C8D1A
// ============================================================

void sub_5CE7F0(/* signature unknown */)
{
    // see disassembly above
}

