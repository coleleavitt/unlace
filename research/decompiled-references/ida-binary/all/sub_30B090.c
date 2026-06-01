// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x30B090
// Name:           sub_30B090
// Function size:  2074 bytes (483 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x30B090 push    r15
//   0x30B092 push    r14
//   0x30B094 push    r13
//   0x30B096 push    r12
//   0x30B098 push    rbp
//   0x30B099 push    rbx
//   0x30B09A sub     rsp, 0D8h
//   0x30B0A1 mov     rax, fs:28h
//   0x30B0AA mov     [rsp+108h+var_40], rax
//   0x30B0B2 xor     eax, eax
//   0x30B0B4 call    sub_510680
//   0x30B0B9 call    sub_47B7A0
//   0x30B0BE call    sub_4B0CF0
//   0x30B0C3 lea     rax, byte_8C2ED0
//   0x30B0CA cmp     byte ptr [rax], 0
//   0x30B0CD jnz     loc_30B758
//   0x30B0D3 cmp     cs:dword_8CD7F4, 1
//   0x30B0DA jle     loc_30B243
//   0x30B0E0 lea     rax, [rsp+108h+var_DC]
//   0x30B0E5 mov     [rsp+108h+var_F9], 0
//   0x30B0EA xor     r15d, r15d
//   0x30B0ED xor     r13d, r13d
//   0x30B0F0 mov     [rsp+108h+var_F8], rax
//   0x30B0F5 mov     ebp, 8
//   0x30B0FA mov     r12d, 1
//   0x30B100 mov     r14d, 1
//   0x30B106 jmp     short loc_30B155
//   0x30B108 align 10h
//   0x30B110 cmp     al, 42h ; 'B'
//   0x30B112 jg      short loc_30B190
//   0x30B114 cmp     al, 40h ; '@'
//   0x30B116 jg      loc_30B1C0
//   0x30B11C cmp     al, 2Dh ; '-'
//   0x30B11E jnz     short loc_30B140
//   0x30B120 lea     rdi, [rbx+2]; s1
//   0x30B124 lea     rsi, aFailedCvt64+7; s2
//   0x30B12B call    _strcmp
//   0x30B130 test    eax, eax
//   0x30B132 setz    al
//   0x30B135 or      r15d, eax
//   0x30B138 nop     dword ptr [rax+rax+00000000h]
//   0x30B140 add     r12d, 1
//   0x30B144 add     rbp, 8
//   0x30B148 cmp     r12d, cs:dword_8CD7F4
//   0x30B14F jge     loc_30B24E
//   0x30B155 mov     rax, cs:qword_8CD7F8
//   0x30B15C mov     rbx, [rax+rbp]
//   0x30B160 cmp     byte ptr [rbx], 2Dh ; '-'
//   0x30B163 jnz     loc_30B74E
//   0x30B169 movzx   eax, byte ptr [rbx+1]
//   0x30B16D cmp     al, 4Dh ; 'M'
//   0x30B16F jz      short loc_30B1A8
//   0x30B171 jle     short loc_30B110
//   0x30B173 cmp     al, 74h ; 't'
//   0x30B175 jz      loc_30B220
//   0x30B17B cmp     al, 7Ah ; 'z'
//   0x30B17D jz      short loc_30B1D0
//   0x30B17F cmp     al, 72h ; 'r'
//   0x30B181 cmovz   r13d, r14d
//   0x30B185 jmp     short loc_30B140
//   0x30B187 align 10h
//   0x30B190 cmp     al, 4Ch ; 'L'
//   0x30B192 jnz     short loc_30B140
//   0x30B194 add     rbx, 2
//   0x30B198 mov     cs:qword_8CD7D8, rbx
//   0x30B19F jmp     short loc_30B140
//   0x30B1A1 align 8
//   0x30B1A8 movzx   eax, byte ptr [rbx+2]
//   0x30B1AC and     eax, 0FFFFFFEFh
//   0x30B1AF cmp     al, 42h ; 'B'
//   0x30B1B1 jnz     short loc_30B140
//   0x30B1B3 mov     edi, 1
//   0x30B1B8 call    _set_merge_state
//   0x30B1BD jmp     short loc_30B140
//   0x30B1BF align 20h
//   0x30B1C0 mov     rax, cs:batch_ptr
//   0x30B1C7 mov     byte ptr [rax], 1
//   0x30B1CA jmp     loc_30B140
//   0x30B1CF align 10h
//   0x30B1D0 lea     rax, [rbx+2]
//   0x30B1D4 mov     rcx, [rsp+108h+var_F8]
//   0x30B1D9 mov     rdx, cs:debug_ptr
//   0x30B1E0 lea     rsi, aXN; "%X%n"
//   0x30B1E7 mov     [rsp+108h+s], rax
//   0x30B1EC mov     rdi, rax
//   0x30B1EF xor     eax, eax
//   0x30B1F1 call    _qsscanf
//   0x30B1F6 cmp     eax, 1
//   0x30B1F9 jz      short loc_30B22A
//   0x30B1FB cmp     byte ptr [rbx+2], 0
//   0x30B1FF jnz     loc_30B842
//   0x30B205 mov     rax, cs:debug_ptr
//   0x30B20C mov     dword ptr [rax], 0FFFFFFFFh
//   0x30B212 jmp     loc_30B140
//   0x30B217 align 20h
//   0x30B220 mov     [rsp+108h+var_F9], r14b
//   0x30B225 jmp     loc_30B140
//   0x30B22A mov     rdi, [rsp+108h+s]; s
//   0x30B22F call    _strlen
//   0x30B234 movsxd  rdx, [rsp+108h+var_DC]
//   0x30B239 cmp     rdx, rax
//   0x30B23C jnz     short loc_30B1FB
//   0x30B23E jmp     loc_30B140
//   0x30B243 mov     [rsp+108h+var_F9], 0
//   0x30B248 xor     r15d, r15d
//   0x30B24B xor     r13d, r13d
//   0x30B24E xor     ebx, ebx
//   0x30B250 mov     ecx, 1
//   0x30B255 xor     edx, edx
//   0x30B257 mov     edi, 7
//   0x30B25C lea     rsi, off_8BA8B0
//   0x30B263 call    _hook_event_listener
//   0x30B268 call    sub_1C7A60
//   0x30B26D call    sub_19A5F0
//   0x30B272 call    sub_19A120
//   0x30B277 pxor    xmm0, xmm0
//   0x30B27B lea     rdi, [rsp+108h+src]
//   0x30B280 lea     rsi, aSetNodeColorTo+12h; "default"
//   0x30B287 mov     [rsp+108h+src], 0
//   0x30B290 movups  xmmword ptr [rsp+108h+n], xmm0
//   0x30B295 call    sub_1B5820
//   0x30B29A mov     rbp, [rsp+108h+n]
//   0x30B29F pxor    xmm0, xmm0
//   0x30B2A3 mov     [rsp+108h+var_58], 0
//   0x30B2AF movups  [rsp+108h+var_50], xmm0
//   0x30B2B7 test    rbp, rbp
//   0x30B2BA jnz     loc_30B772
//   0x30B2C0 lea     rdi, [rsp+108h+var_58]
//   0x30B2C8 call    sub_303A10
//   0x30B2CD mov     rdi, [rsp+108h+var_58]
//   0x30B2D5 mov     ebp, eax
//   0x30B2D7 test    rdi, rdi
//   0x30B2DA jz      short loc_30B2E1
//   0x30B2DC call    _qfree
//   0x30B2E1 test    bpl, bpl
//   0x30B2E4 jnz     short loc_30B344
//   0x30B2E6 lea     rsi, aSetNodeColorTo+12h; "default"
//   0x30B2ED lea     rdi, aNoteTryingToLo; "NOTE: Trying to load \"%s\" theme\n"
//   0x30B2F4 xor     eax, eax
//   0x30B2F6 call    sub_169700
//   0x30B2FB lea     rdi, [rsp+108h+var_78]
//   0x30B303 lea     rsi, aSetNodeColorTo+12h; "default"
//   0x30B30A call    sub_1A1F60
//   0x30B30F lea     rdi, [rsp+108h+var_78]
//   0x30B317 call    sub_303A10
//   0x30B31C mov     rdi, [rsp+108h+var_78]
//   0x30B324 mov     ebp, eax
//   0x30B326 test    rdi, rdi
//   0x30B329 jz      short loc_30B33B
//   0x30B32B xor     r9d, r9d
//   0x30B32E mov     [rsp+108h+var_70], r9
//   0x30B336 call    _qfree
//   0x30B33B test    bpl, bpl
//   0x30B33E jz      loc_30B82F
//   0x30B344 lea     rdi, unk_8BA4A0
//   0x30B34B mov     edx, 1
//   0x30B350 mov     esi, 1
//   0x30B355 call    sub_1AF300
//   0x30B35A xor     edx, edx
//   0x30B35C xor     esi, esi
//   0x30B35E mov     edi, 0Ah
//   0x30B363 call    sub_531B30
//   0x30B368 call    sub_3D58A0
//   0x30B36D movzx   esi, cs:byte_8BA8C0
//   0x30B374 mov     edi, 2
//   0x30B379 xor     esi, 1
//   0x30B37C movzx   esi, sil
//   0x30B380 call    __ZN2QT16QCoreApplication12setAttributeENS_2Qt20ApplicationAttributeEb; QT::QCoreApplication::setAttribute(QT::Qt::ApplicationAttribute,bool)
//   0x30B385 pxor    xmm0, xmm0
//   0x30B389 lea     rsi, [rsp+108h+var_B8]
//   0x30B38E lea     rdi, aIdaQtappAttrs; "IDA_QTAPP_ATTRS"
//   0x30B395 mov     [rsp+108h+var_B8], 0
//   0x30B39E movups  [rsp+108h+var_B0], xmm0
//   0x30B3A3 call    _qgetenv
//   0x30B3A8 xor     ebp, ebp
//   0x30B3AA test    al, al
//   0x30B3AC jz      short loc_30B3E0
//   0x30B3AE mov     rax, qword ptr [rsp+108h+var_B0]
//   0x30B3B3 test    rax, rax
//   0x30B3B6 jz      short loc_30B3E0
//   0x30B3B8 sub     rax, 1
//   0x30B3BC cmp     rbp, rax
//   0x30B3BF jnb     short loc_30B3E0
//   0x30B3C1 mov     rax, [rsp+108h+var_B8]
//   0x30B3C6 movzx   eax, byte ptr [rax+rbp]
//   0x30B3CA cmp     al, 2Eh ; '.'
//   0x30B3CC jnz     loc_30B80F
//   0x30B3D2 add     rbp, 1
//   0x30B3D6 cmp     rbp, 20h ; ' '
//   0x30B3DA jnz     short loc_30B3AE
//   0x30B3DC nop     dword ptr [rax+00h]
//   0x30B3E0 call    _get_merge_state
//   0x30B3E5 test    al, 3
//   0x30B3E7 jnz     short loc_30B3EE
//   0x30B3E9 call    sub_1C7AD0
//   0x30B3EE mov     rdi, cs:qword_8CD748
//   0x30B3F5 call    sub_3122A0
//   0x30B3FA mov     edi, 80h
//   0x30B3FF call    _init_plugins
//   0x30B404 call    sub_3D5A10
//   0x30B409 call    sub_538890
//   0x30B40E call    sub_2A6410
//   0x30B413 lea     rdi, aLazyjumps; "LazyJumps"
//   0x30B41A xor     ecx, ecx
//   0x30B41C mov     edx, 1
//   0x30B421 xor     esi, esi
//   0x30B423 call    _reg_int_op
//   0x30B428 test    eax, eax
//   0x30B42A lea     rax, unk_8BCE18
//   0x30B431 lea     rdi, aAutohighlight; "AutoHighlight"
//   0x30B438 mov     edx, 1
//   0x30B43D setnz   byte ptr [rax]
//   0x30B440 xor     ecx, ecx
//   0x30B442 xor     esi, esi
//   0x30B444 call    _reg_int_op
//   0x30B449 test    eax, eax
//   0x30B44B lea     rax, unk_8BCE19
//   0x30B452 lea     rdi, aHideunhidejump; "HideUnhideJumps"
//   0x30B459 mov     edx, 1
//   0x30B45E setnz   byte ptr [rax]
//   0x30B461 xor     ecx, ecx
//   0x30B463 xor     esi, esi
//   0x30B465 call    _reg_int_op
//   0x30B46A test    eax, eax
//   0x30B46C lea     rdi, aAutoscroll; "AutoScroll"
//   0x30B473 mov     edx, 4
//   0x30B478 setnz   cs:byte_8BA8E5
//   0x30B47F xor     ecx, ecx
//   0x30B481 xor     esi, esi
//   0x30B483 call    _reg_int_op
//   0x30B488 lea     rdx, word_8BCE1C
//   0x30B48F lea     rdi, aHintlines; "HintLines"
//   0x30B496 xor     ecx, ecx
//   0x30B498 xor     esi, esi
//   0x30B49A mov     [rdx], eax
//   0x30B49C mov     edx, 0Ah
//   0x30B4A1 call    _reg_int_op
//   0x30B4A6 lea     rdi, aHintdelay; "HintDelay"
//   0x30B4AD xor     ecx, ecx
//   0x30B4AF mov     edx, 0C8h
//   0x30B4B4 xor     esi, esi
//   0x30B4B6 mov     cs:dword_8BA8F4, eax
//   0x30B4BC call    _reg_int_op
//   0x30B4C1 lea     rdi, aHintwheel; "HintWheel"
//   0x30B4C8 xor     ecx, ecx
//   0x30B4CA mov     edx, 1
//   0x30B4CF xor     esi, esi
//   0x30B4D1 mov     cs:dword_8BA8F0, eax
//   0x30B4D7 call    _reg_int_op
//   0x30B4DC test    eax, eax
//   0x30B4DE lea     rdi, aHintifdebugger; "HintIfDebuggerActive"
//   0x30B4E5 mov     edx, 1
//   0x30B4EA setnz   cs:byte_8BA8ED
//   0x30B4F1 xor     ecx, ecx
//   0x30B4F3 xor     esi, esi
//   0x30B4F5 call    _reg_int_op
//   0x30B4FA test    eax, eax
//   0x30B4FC lea     rdi, aNavigationstac; "NavigationStackLines"
//   0x30B503 mov     edx, 0Ah
//   0x30B508 setnz   cs:byte_8BA8EC
//   0x30B50F xor     ecx, ecx
//   0x30B511 xor     esi, esi
//   0x30B513 call    _reg_int_op
//   0x30B518 lea     rdi, aAutoundefine; "AutoUndefine"
//   0x30B51F xor     ecx, ecx
//   0x30B521 mov     edx, 0FFFFFFFFh
//   0x30B526 xor     esi, esi
//   0x30B528 mov     cs:dword_8BA8E8, eax
//   0x30B52E call    _reg_int_op
//   0x30B533 lea     rdi, aTabulationspac; "TabulationSpaces"
//   0x30B53A xor     ecx, ecx
//   0x30B53C mov     edx, 4
//   0x30B541 xor     esi, esi
//   0x30B543 mov     cs:dword_8BA8E0, eax
//   0x30B549 call    _reg_int_op
//   0x30B54E lea     rdx, unk_8BA540
//   0x30B555 lea     rdi, aCaretblinkinte; "CaretBlinkInterval"
//   0x30B55C xor     ecx, ecx
//   0x30B55E xor     esi, esi
//   0x30B560 mov     [rdx], eax
//   0x30B562 mov     edx, 1F4h
//   0x30B567 call    _reg_int_op
//   0x30B56C mov     edi, eax
//   0x30B56E call    sub_3035B0
//   0x30B573 lea     rdi, aLinepaddingtop; "LinePaddingTop"
//   0x30B57A xor     ecx, ecx
//   0x30B57C xor     edx, edx
//   0x30B57E xor     esi, esi
//   0x30B580 call    _reg_int_op
//   0x30B585 pxor    xmm0, xmm0
//   0x30B589 lea     rdi, aLinepaddingtop; "LinePaddingTop"
//   0x30B590 xor     ecx, ecx
//   0x30B592 xor     edx, edx
//   0x30B594 cvtsi2sd xmm0, eax
//   0x30B598 lea     rax, qword_8CB470
//   0x30B59F xor     esi, esi
//   0x30B5A1 movsd   qword ptr [rax], xmm0
//   0x30B5A5 call    _reg_int_op
//   0x30B5AA pxor    xmm0, xmm0
//   0x30B5AE lea     rdi, aJumpanywherepr; "JumpAnywherePreviewPane"
//   0x30B5B5 xor     ecx, ecx
//   0x30B5B7 xor     esi, esi
//   0x30B5B9 cvtsi2sd xmm0, eax
//   0x30B5BD lea     rax, unk_8CB468
//   0x30B5C4 mov     edx, 1
//   0x30B5C9 movsd   qword ptr [rax], xmm0
//   0x30B5CD call    _reg_int_op
//   0x30B5D2 test    eax, eax
//   0x30B5D4 lea     rax, byte_8BA840
//   0x30B5DB mov     edi, 8
//   0x30B5E0 setnz   byte ptr [rax]
//   0x30B5E3 xor     edx, edx
//   0x30B5E5 xor     esi, esi
//   0x30B5E7 call    sub_531B30
//   0x30B5EC lea     rax, xmmword_8BCD60
//   0x30B5F3 movzx   eax, byte ptr [rax+62h]
//   0x30B5F7 and     eax, 1
//   0x30B5FA cmp     al, 1
//   0x30B5FC sbb     edi, edi
//   0x30B5FE or      edi, 1
//   0x30B601 call    sub_388150
//   0x30B606 call    sub_31E3B0
//   0x30B60B lea     rax, unk_8D0B18
//   0x30B612 mov     esi, 40000140h
//   0x30B617 cmp     byte ptr [rax], 0
//   0x30B61A mov     eax, 400000C0h
//   0x30B61F cmovnz  esi, eax
//   0x30B622 mov     rax, cs:qword_8CD748
//   0x30B629 mov     rdi, [rax+140h]
//   0x30B630 call    sub_4B8B20
//   0x30B635 mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x30B63C lea     rdx, unk_8BDE48
//   0x30B643 mov     rax, [rax]
//   0x30B646 movzx   edx, byte ptr [rdx]
//   0x30B649 mov     [rax+212h], dl
//   0x30B64F call    sub_308150
//   0x30B654 or      bl, r13b
//   0x30B657 jnz     short loc_30B660
//   0x30B659 cmp     [rsp+108h+var_F9], 0
//   0x30B65E jz      short loc_30B69B
//   0x30B660 xor     edi, edi
//   0x30B662 call    sub_1719D0
//   0x30B667 lea     rdi, [rsp+108h+var_98]
//   0x30B66C lea     rsi, unk_5C2F25
//   0x30B673 call    sub_1CC990
//   0x30B678 lea     rdi, [rsp+108h+var_98]; QT::QString *
//   0x30B67D xor     esi, esi
//   0x30B67F call    sub_30A6D0
//   0x30B684 mov     ebx, eax
//   0x30B686 lea     rdi, [rsp+108h+var_98]
//   0x30B68B call    sub_16D970
//   0x30B690 test    bl, bl
//   0x30B692 jnz     short loc_30B6B5
//   0x30B694 mov     ebx, 1
//   0x30B699 jmp     short loc_30B6C4
//   0x30B69B movzx   edi, cs:byte_8BA8D1
//   0x30B6A2 call    sub_1719D0
//   0x30B6A7 test    r15b, r15b
//   0x30B6AA jnz     short loc_30B6B5
//   0x30B6AC call    sub_3E94A0
//   0x30B6B1 test    al, al
//   0x30B6B3 jz      short loc_30B694
//   0x30B6B5 cmp     cs:byte_8CD800, 0
//   0x30B6BC jz      loc_30B7B6
//   0x30B6C2 xor     ebx, ebx
//   0x30B6C4 mov     rdi, [rsp+108h+var_B8]
//   0x30B6C9 test    rdi, rdi
//   0x30B6CC jz      short loc_30B6DB
//   0x30B6CE xor     r8d, r8d
//   0x30B6D1 mov     qword ptr [rsp+108h+var_B0], r8
//   0x30B6D6 call    _qfree
//   0x30B6DB mov     rdi, [rsp+108h+src]; this
//   0x30B6E0 test    rdi, rdi
//   0x30B6E3 jz      short loc_30B6F1
//   0x30B6E5 xor     esi, esi
//   0x30B6E7 mov     [rsp+108h+n], rsi
//   0x30B6EC call    _qfree
//   0x30B6F1 cmp     cs:byte_8CD800, 0
//   0x30B6F8 jnz     loc_30B7A7
//   0x30B6FE test    ebx, ebx
//   0x30B700 jz      loc_30B823
//   0x30B706 lea     rax, byte_8C2ED0
//   0x30B70D cmp     byte ptr [rax], 0
//   0x30B710 jnz     short loc_30B747
//   0x30B712 call    sub_47B8E0
//   0x30B717 call    nullsub_294
//   0x30B71C mov     rax, [rsp+108h+var_40]
//   0x30B724 sub     rax, fs:28h
//   0x30B72D jnz     loc_30B863
//   0x30B733 add     rsp, 0D8h
//   0x30B73A mov     eax, ebx
//   0x30B73C pop     rbx
//   0x30B73D pop     rbp
//   0x30B73E pop     r12
//   0x30B740 pop     r13
//   0x30B742 pop     r14
//   0x30B744 pop     r15
//   0x30B746 retn
//   0x30B747 call    sub_47BDF0
//   0x30B74C jmp     short loc_30B712
//   0x30B74E mov     ebx, 1
//   0x30B753 jmp     loc_30B250
//   0x30B758 call    sub_47B970
//   0x30B75D mov     rdi, rax; env
//   0x30B760 call    __setjmp
//   0x30B765 or      ebx, 0FFFFFFFFh
//   0x30B768 test    eax, eax
//   0x30B76A jz      loc_30B0D3
//   0x30B770 jmp     short loc_30B706
//   0x30B772 mov     rdi, rbp
//   0x30B775 call    _qalloc_or_throw
//   0x30B77A mov     rsi, [rsp+108h+src]; src
//   0x30B77F mov     rdi, rax; dest
//   0x30B782 mov     rdx, rbp; n
//   0x30B785 mov     [rsp+108h+var_58], rax
//   0x30B78D mov     qword ptr [rsp+108h+var_50+8], rbp
//   0x30B795 call    _memcpy
//   0x30B79A mov     qword ptr [rsp+108h+var_50], rbp
//   0x30B7A2 jmp     loc_30B2C0
//   0x30B7A7 mov     edi, 2
//   0x30B7AC call    sub_308340
//   0x30B7B1 jmp     loc_30B706
//   0x30B7B6 call    _netnode_inited
//   0x30B7BB test    al, al
//   0x30B7BD jnz     short loc_30B7CE
//   0x30B7BF mov     edi, 1
//   0x30B7C4 call    sub_24A680
//   0x30B7C9 call    sub_1828C0
//   0x30B7CE call    sub_426230
//   0x30B7D3 mov     rdi, rax
//   0x30B7D6 call    sub_417080
//   0x30B7DB mov     rdi, [rax+8]
//   0x30B7DF test    rdi, rdi
//   0x30B7E2 jz      short loc_30B7F1
//   0x30B7E4 mov     rax, [rdi]
//   0x30B7E7 call    qword ptr [rax+1E0h]
//   0x30B7ED test    al, al
//   0x30B7EF jz      short loc_30B805
//   0x30B7F1 call    sub_426230
//   0x30B7F6 mov     rdi, rax
//   0x30B7F9 xor     edx, edx
//   0x30B7FB mov     esi, 1
//   0x30B800 call    sub_41C640
//   0x30B805 call    sub_303700
//   0x30B80A jmp     loc_30B6C2
//   0x30B80F xor     esi, esi
//   0x30B811 cmp     al, 30h ; '0'
//   0x30B813 mov     edi, ebp
//   0x30B815 setnz   sil
//   0x30B819 call    __ZN2QT16QCoreApplication12setAttributeENS_2Qt20ApplicationAttributeEb; QT::QCoreApplication::setAttribute(QT::Qt::ApplicationAttribute,bool)
//   0x30B81E jmp     loc_30B3D2
//   0x30B823 call    __ZN2QT12QApplication4execEv; QT::QApplication::exec(void)
//   0x30B828 mov     ebx, eax
//   0x30B82A jmp     loc_30B706
//   0x30B82F lea     rdi, aCouldnTLoadDef; "Couldn't load default theme. Please set"...
//   0x30B836 xor     eax, eax
//   0x30B838 call    sub_169630
//   0x30B83D jmp     loc_30B344
//   0x30B842 mov     rax, [rsp+108h+var_40]
//   0x30B84A sub     rax, fs:28h
//   0x30B853 jnz     short loc_30B863
//   0x30B855 lea     rdi, a0417BadZSwitch; "@0:417[]\nBad -z switch"
//   0x30B85C xor     eax, eax
//   0x30B85E call    sub_16B930
//   0x30B863 call    ___stack_chk_fail
//   0x30B868 mov     rdi, rax
//   0x30B86B mov     rbp, rdx
//   0x30B86E jmp     loc_13697F
//   0x30B873 mov     rbx, rax
//   0x30B876 mov     rbp, rdx
//   0x30B879 jmp     loc_1369BF
//   0x30B87E mov     rbx, rax
//   0x30B881 mov     rbp, rdx
//   0x30B884 jmp     loc_1369B5
//   0x30B889 mov     rbx, rax
//   0x30B88C mov     rbp, rdx
//   0x30B88F jmp     loc_136966
//   0x30B894 mov     rbx, rax
//   0x30B897 mov     rbp, rdx
//   0x30B89A jmp     loc_136954
//   0x30B89F mov     rbx, rax
//   0x30B8A2 mov     rbp, rdx
//   0x30B8A5 jmp     loc_136A7B
// ============================================================

void sub_30B090(/* signature unknown */)
{
    // see disassembly above
}

