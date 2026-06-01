char __fastcall sub_1A16120(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v8; // r14
  __int64 v10; // r12
  _QWORD *v11; // rbp
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int16 **v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // r12
  _QWORD *v28; // rdi
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  _WORD **v33; // r11
  __int64 v34; // rcx
  _WORD **v35; // r10
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _WORD **v39; // r10
  _WORD **v40; // r11
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 i; // rsi
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  int v57; // r12d
  int v58; // r15d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // eax
  unsigned int v63; // eax
  bool v64; // zf
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 *v69; // rdx
  __int64 v70; // rax
  _QWORD *v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  int v81; // eax
  char v82; // al
  char v83; // al
  __int64 v84; // r15
  bool v85; // al
  int v86; // r9d
  unsigned int v87; // eax
  __int64 v88; // r8
  char v89; // al
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  void *v93; // rax
  __int32 v94; // ecx
  void *v95; // rax
  __int32 v96; // edx
  void *v97; // rax
  __int32 v98; // edx
  char v99; // al
  __int64 v100; // rdx
  bool v101; // al
  __int64 v102; // rdx
  void *v103; // rax
  __int32 v104; // edx
  char v106; // [rsp-10h] [rbp-168h]
  __int64 v107; // [rsp-10h] [rbp-168h]
  char v108; // [rsp-10h] [rbp-168h]
  _WORD **v109; // [rsp+0h] [rbp-158h]
  _WORD **v110; // [rsp+0h] [rbp-158h]
  unsigned __int8 v111; // [rsp+0h] [rbp-158h]
  _WORD **v112; // [rsp+0h] [rbp-158h]
  __int64 v113; // [rsp+0h] [rbp-158h]
  _WORD **v114; // [rsp+0h] [rbp-158h]
  _WORD **v115; // [rsp+0h] [rbp-158h]
  _WORD **v116; // [rsp+0h] [rbp-158h]
  __int64 v117; // [rsp+0h] [rbp-158h]
  unsigned __int64 v119; // [rsp+10h] [rbp-148h]
  __int64 v120; // [rsp+10h] [rbp-148h]
  __int64 v121; // [rsp+10h] [rbp-148h]
  __int64 v122; // [rsp+18h] [rbp-140h]
  _WORD **v123; // [rsp+18h] [rbp-140h]
  _WORD **v124; // [rsp+18h] [rbp-140h]
  _WORD **v125; // [rsp+18h] [rbp-140h]
  _WORD **v126; // [rsp+18h] [rbp-140h]
  _WORD **v127; // [rsp+18h] [rbp-140h]
  _WORD **v128; // [rsp+18h] [rbp-140h]
  unsigned __int64 v129; // [rsp+20h] [rbp-138h]
  _WORD **v130; // [rsp+20h] [rbp-138h]
  unsigned __int64 v131; // [rsp+28h] [rbp-130h]
  __int64 v132; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v133; // [rsp+38h] [rbp-120h] BYREF
  __int64 v134; // [rsp+40h] [rbp-118h] BYREF
  int v135; // [rsp+48h] [rbp-110h]
  int v136; // [rsp+4Ch] [rbp-10Ch]
  __m128i v137[3]; // [rsp+50h] [rbp-108h] BYREF
  void *v138[2]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v139; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v140; // [rsp+98h] [rbp-C0h]
  __int64 v141; // [rsp+A0h] [rbp-B8h]
  __int64 v142; // [rsp+A8h] [rbp-B0h]
  __int64 v143; // [rsp+B0h] [rbp-A8h]

  v8 = a6;
  v10 = a2;
  v11 = (_QWORD *)a4;
  v13 = *(_QWORD *)(a1 + 232);
  v132 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v13 + 89) & 1) != 0 )
  {
    LOBYTE(v16) = sub_1A03D50(*(__int64 **)(a1 + 680), a2, a4, a4, a5, a6, *(double *)a7.m128_u64, a8);
    if ( !(_BYTE)v16 )
      return (char)v16;
    v13 = *(_QWORD *)(a1 + 232);
  }
  v14 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
    goto LABEL_3;
  if ( !sub_F61140(v14, a2, v13, a4, a5, a6) )
  {
    v14 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
    v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_4;
  }
  v33 = (_WORD **)v11[3];
  v14 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v16 = (unsigned __int16 **)v11[2];
  a4 = v33 - v16;
  a2 = a4;
  if ( (_BYTE)v15 == 14 )
    goto LABEL_25;
  if ( (unsigned int)a4 > 1 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 184) = 25;
    return (char)v16;
  }
LABEL_4:
  if ( (unsigned int)(unsigned __int8)v15 - 43 > 1 )
  {
    if ( (_BYTE)v15 == 48 )
    {
      v63 = sub_BFB1C0((unsigned __int64)v11);
      v64 = (unsigned __int8)sub_1E63330(a1, v63, v132, 1, 0) == 0;
      v16 = (unsigned __int16 **)v132;
      if ( !v64 )
        goto LABEL_128;
      v14 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v33 = (_WORD **)v11[3];
    v16 = (unsigned __int16 **)v11[2];
    a2 = v33 - v16;
LABEL_25:
    v34 = a2 >> 2;
    if ( a2 >> 2 > 0 )
    {
      v15 = **v16;
      LOWORD(v15) = v15 & 0x1FF;
      if ( (_WORD)v15 == 68 )
      {
        v35 = v16;
      }
      else
      {
        v35 = v16 + 1;
        v15 = *v16[1];
        LOWORD(v15) = v15 & 0x1FF;
        if ( (_WORD)v15 != 68 )
        {
          v35 = v16 + 2;
          v15 = *v16[2];
          LOWORD(v15) = v15 & 0x1FF;
          if ( (_WORD)v15 != 68 )
          {
            v35 = v16 + 3;
            v34 = (__int64)&v16[4 * v34];
            v15 = *v16[3];
            LOWORD(v15) = v15 & 0x1FF;
            if ( (_WORD)v15 != 68 )
            {
              while ( 1 )
              {
                v35 = v16 + 4;
                if ( (unsigned __int16 **)v34 == v16 + 4 )
                {
                  a2 = v33 - v35;
                  goto LABEL_38;
                }
                v15 = *v16[4];
                LOWORD(v15) = v15 & 0x1FF;
                if ( (_WORD)v15 == 68 )
                  goto LABEL_42;
                v15 = *v16[5];
                LOWORD(v15) = v15 & 0x1FF;
                if ( (_WORD)v15 == 68 )
                {
                  v35 = v16 + 5;
                  goto LABEL_42;
                }
                v15 = *v16[6];
                LOWORD(v15) = v15 & 0x1FF;
                if ( (_WORD)v15 == 68 )
                {
                  v35 = v16 + 6;
                  goto LABEL_42;
                }
                v15 = *v16[7];
                LOWORD(v15) = v15 & 0x1FF;
                if ( (_WORD)v15 == 68 )
                  break;
                v16 += 4;
              }
              v35 = v16 + 7;
            }
          }
        }
      }
      goto LABEL_42;
    }
    v35 = v16;
LABEL_38:
    if ( a2 != 2 )
    {
      if ( a2 != 3 )
      {
        if ( a2 != 1 )
        {
          v35 = v33;
          goto LABEL_42;
        }
        goto LABEL_51;
      }
      if ( (**v35 & 0x1FF) == 0x44 )
        goto LABEL_42;
      ++v35;
    }
    if ( (**v35 & 0x1FF) == 0x44 )
      goto LABEL_42;
    ++v35;
LABEL_51:
    if ( (**v35 & 0x1FF) != 0x44 )
    {
      v110 = v33;
      sub_F61BB0(v14, a2, v15, v34, a5, a6);
      v40 = v110;
      v39 = v110;
      goto LABEL_53;
    }
LABEL_42:
    v123 = v33;
    v109 = v35;
    LOBYTE(v16) = sub_F61BB0(v14, a2, v15, v34, a5, a6);
    v39 = v109;
    v40 = v123;
    if ( !(_BYTE)v16 && v109 != v123 )
    {
      *(_DWORD *)a5 = 0;
      *(_DWORD *)(a5 + 184) = 40;
      return (char)v16;
    }
LABEL_53:
    v41 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 232) + 1LL);
    v42 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (v41 & 0x10) == 0 )
    {
      if ( (_BYTE)v43 != 48 )
        goto LABEL_84;
      goto LABEL_124;
    }
    LOBYTE(v41) = v39 == v40;
    v36 = (unsigned int)v41;
    if ( (unsigned int)((__int64)(v11[3] - v11[2]) >> 3) != 1 || v39 != v40 )
    {
      if ( (_BYTE)v43 != 48 )
        goto LABEL_57;
      goto LABEL_124;
    }
    if ( (_BYTE)v43 == 48 )
    {
      v128 = v40;
      v116 = v39;
      v83 = sub_F61BB0(v42, v43, v41, (unsigned int)v41, v37, v38);
      v39 = v116;
      v40 = v128;
      if ( v83 )
      {
        v84 = *(_QWORD *)(*(_QWORD *)v11[2] + 8LL);
        v85 = sub_1A0A350(v84, v132);
        v86 = v132;
        if ( v85 )
        {
LABEL_144:
          if ( a3->m128i_i8[0] == 1 )
          {
            v97 = (void *)v11[5];
            LOWORD(v138[0]) = 0;
            v98 = a3->m128i_i32[1];
            v138[1] = v97;
            HIDWORD(v138[0]) = v98;
          }
          else
          {
            *(__m128i *)v138 = _mm_loadu_si128(a3);
          }
          v137[0].m128i_i64[0] = (__int64)v11;
          LOBYTE(v16) = sub_1A24D50(a1, v10, (unsigned int)v138, (unsigned int)v137, 1, v86, a5, 1);
          return (char)v16;
        }
        v87 = sub_BFB1C0((unsigned __int64)v11);
        v89 = sub_183BD10(a1, v87, v84, v132, v88, v132);
        v39 = v116;
        v40 = v128;
        if ( v89 )
        {
          v86 = v132;
          goto LABEL_144;
        }
      }
    }
    v124 = v40;
    v112 = v39;
    v79 = sub_A72040(*(_QWORD **)(a1 + 248), v132);
    v39 = v112;
    v40 = v124;
    v43 = v79;
    if ( v79 )
    {
      v36 = *(_QWORD *)v11[2];
      v137[0].m128i_i64[0] = v36;
      v37 = *(unsigned __int8 *)(v79 + 16);
      if ( (unsigned int)(v37 - 2) <= 1 && !*(_DWORD *)v10 )
      {
        v130 = v124;
        v125 = v112;
        v113 = v36;
        v80 = sub_1A0B620(v10);
        v36 = v113;
        v39 = v125;
        v40 = v130;
        if ( (*(_BYTE *)(v80 + 28) & 0x7F) == 0x2E )
        {
          v103 = (void *)v11[5];
          LOWORD(v138[0]) = 0;
          v104 = a3->m128i_i32[1];
          v138[1] = v103;
          HIDWORD(v138[0]) = v104;
          sub_1A18FC0(a1, (unsigned int)v138, v10, v113, v132, a5, v8);
          LOBYTE(v16) = v108;
          if ( *(_DWORD *)a5 )
            LOBYTE(v16) = (unsigned __int8)sub_1A0D590(a5, (__int64)v11);
          return (char)v16;
        }
      }
      if ( (_BYTE)v37 != 6 )
      {
        v126 = v40;
        v114 = v39;
        v81 = sub_1A0A380(v36, v43);
        v39 = v114;
        v40 = v126;
        if ( !v81 )
        {
          if ( a3->m128i_i8[0] == 1 )
          {
            v95 = (void *)v11[5];
            LOWORD(v138[0]) = 0;
            v96 = a3->m128i_i32[1];
            v138[1] = v95;
            HIDWORD(v138[0]) = v96;
          }
          else
          {
            *(__m128i *)v138 = _mm_loadu_si128(a3);
          }
          v43 = a1;
          sub_1A172F0(a5, a1, v10, (unsigned int)v138, (unsigned int)v137, 1, 1, v8);
          v38 = v107;
          v39 = v114;
          v40 = v126;
          if ( *(_DWORD *)a5 )
          {
LABEL_111:
            LOBYTE(v16) = (unsigned __int8)sub_1A0D750(a5, *(_QWORD *)(v10 + 16), (__int64)v11);
            return (char)v16;
          }
        }
      }
    }
    v42 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
    {
LABEL_125:
      LOBYTE(v41) = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
      if ( (v41 & 0x10) != 0 )
      {
        LOBYTE(v36) = v39 == v40;
LABEL_57:
        v43 = v132;
        v111 = v36;
        if ( (unsigned __int8)sub_1844E60(a1, v132, nullptr) )
        {
          v36 = v111;
          if ( v111 )
            goto LABEL_59;
        }
        LOBYTE(v41) = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
      }
LABEL_84:
      v65 = v41 & 8;
      if ( !(_DWORD)v65 )
        goto LABEL_87;
      if ( sub_F61BB0(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL), v43, v65, v36, v37, v38) )
        goto LABEL_87;
      v69 = (__int64 *)v11[2];
      if ( (unsigned int)((__int64)(v11[3] - (_QWORD)v69) >> 3) != 1 )
        goto LABEL_87;
      v75 = *v69;
      v76 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v76 + 16) == 47 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0 && a3->m128i_i8[0] == 1 )
      {
        v117 = v75;
        if ( (*((_BYTE *)sub_F60F10(*v76, v43, v75, v66, v67, v68) + 77) & 2) != 0
          && !sub_1A0A350(*(_QWORD *)(v117 + 8), v132) )
        {
          v99 = sub_F61920(*(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFF0LL), v132, v117, v90 & 0xFFFFFFFFFFFFFFF0LL, v91, v92);
          v100 = v117;
          if ( v99 || (v101 = sub_F58060(*(_QWORD *)(*(_QWORD *)(v117 + 8) & 0xFFFFFFFFFFFFFFF0LL)), v100 = v117, v101) )
          {
            v120 = v100;
            LODWORD(v138[0]) = 6;
            v138[1] = nullptr;
            sub_1BCD530(&v139);
            v102 = v120;
            if ( ((__int64)v138[0] & 0x7FFFFFFF) == 3 )
            {
              sub_1BD22E0(&v139);
              v102 = v120;
            }
            v121 = v102;
            LODWORD(v138[0]) &= 0x80000000;
            sub_1BCD530(&v139);
            if ( (*(_BYTE *)(v121 + 1) & 6) != 0 )
              LOBYTE(v139) = 1;
            BYTE1(v139) = !sub_F58060(*(_QWORD *)(*(_QWORD *)(v121 + 8) & 0xFFFFFFFFFFFFFFF0LL)) ? 9 : 12;
            v140 = *(_QWORD *)(v121 + 8);
            v141 = *(_QWORD *)(v121 + 8);
            v142 = v132;
            v143 = v132;
            sub_1A0BA10(a5, (const __m128i *)v138, v132, 1);
            sub_1A0D750(a5, *(_QWORD *)(v10 + 16), (__int64)v11);
            LOBYTE(v16) = v138[0];
            if ( ((__int64)v138[0] & 0x7FFFFFFF) == 3 )
              LOBYTE(v16) = sub_1BD22E0(&v139);
            return (char)v16;
          }
        }
        v75 = *(_QWORD *)v11[2];
      }
      v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v77 + 16) != 48 )
      {
        if ( *(_BYTE *)(v77 + 16) != 13
          || ((*(_WORD *)(v77 + 18) >> 3) & 0x1FF) != 0x1E8
          || (v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              *(_BYTE *)(v78 + 16) != 13)
          || ((*(_WORD *)(v78 + 18) >> 3) & 0x1FF) != 0x1B4 )
        {
LABEL_87:
          LOBYTE(v16) = sub_1A1D150((unsigned int)v138, a1, v10, (_DWORD)v11, (unsigned int)&v132, 1, v8, 0, 0);
          if ( LOBYTE(v138[1]) )
          {
            *(_DWORD *)a5 = 0;
            *(_DWORD *)(a5 + 184) = 35;
          }
          else
          {
            v137[0].m128i_i32[0] = 16;
            v137[0].m128i_i64[1] = v132;
            LOBYTE(v16) = (unsigned __int8)sub_1A0C040(a5 + 8, v137);
          }
          return (char)v16;
        }
      }
      if ( a3->m128i_i8[0] == 1 )
      {
        v93 = (void *)v11[5];
        v94 = a3->m128i_i32[1];
        LOWORD(v138[0]) = 0;
        HIDWORD(v138[0]) = v94;
        v138[1] = v93;
      }
      else
      {
        *(__m128i *)v138 = _mm_loadu_si128(a3);
      }
      v137[0].m128i_i64[0] = v75;
      sub_1A172F0(a5, a1, v10, (unsigned int)v138, (unsigned int)v137, 1, 1, v8);
      LOBYTE(v16) = v106;
      if ( !*(_DWORD *)a5 )
        return (char)v16;
      goto LABEL_111;
    }
LABEL_124:
    v127 = v40;
    v115 = v39;
    v82 = sub_F61BB0(v42, v43, v41, v36, v37, v38);
    v39 = v115;
    v40 = v127;
    if ( !v82 )
    {
LABEL_59:
      v16 = *(unsigned __int16 ***)(a1 + 232);
      if ( (*((_BYTE *)v16 + 1) & 0x10) == 0 )
      {
        *(_DWORD *)a5 = 0;
        *(_DWORD *)(a5 + 184) = 28;
        return (char)v16;
      }
      if ( !(unsigned int)((__int64)(v11[3] - v11[2]) >> 3) )
      {
        v45 = sub_F63270(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL), v43, v44, v36, v37, v38);
        if ( sub_1A69F50(a1, v45) )
        {
          LOBYTE(v16) = (unsigned __int8)sub_1A15F40(
                                           a1,
                                           v10,
                                           a3->m128i_i8,
                                           (_DWORD *)a5,
                                           (__int64)v11,
                                           (__m128i)a7,
                                           *(double *)a8.m128_u64);
          return (char)v16;
        }
      }
      v133 = 0;
      if ( !(unsigned __int8)sub_1844E60(a1, v132, &v133) )
      {
        v138[0] = v11;
        LOBYTE(v16) = sub_1A155A0(
                        a1,
                        v10,
                        a3->m128i_i8,
                        (__int64 *)v138,
                        1,
                        v132,
                        (__m128i)a7,
                        *(double *)a8.m128_u64,
                        v132,
                        a5,
                        1,
                        0);
        return (char)v16;
      }
      v49 = sub_C00A40((unsigned __int64)v11, v132, v46, v47, v48);
      if ( !(unsigned __int8)sub_1E63330(a1, v49, v133, 1, 0) )
      {
        v50 = v11[3];
        v51 = v11[2];
        v52 = *(_QWORD *)(a1 + 248);
        for ( i = (v50 - v51) >> 3; v50 != v51; v51 += 8 )
        {
          if ( (**(_WORD **)v51 & 0x1FF) == 0x42 )
            LODWORD(i) = i + *(_DWORD *)(*(_QWORD *)v51 + 52LL) - 1;
        }
        v54 = sub_A63CE0(*(_QWORD **)(a1 + 248));
        LODWORD(v138[1]) = sub_A97D20(v52, *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL));
        if ( LODWORD(v138[1]) > 0x40 )
          sub_2205470(v138, (unsigned int)i, 0);
        else
          v138[0] = (void *)(unsigned int)i;
        v55 = v133 | 1;
        v56 = sub_A70F70(v52, v133 | 1, (__int64)v138, nullptr, 0, 0);
        if ( LODWORD(v138[1]) > 0x40 && v138[0] )
        {
          v119 = v56;
          operator delete[](v138[0]);
          v56 = v119;
        }
        v139 = v56;
        LODWORD(v138[0]) = 9;
        v138[1] = nullptr;
        LODWORD(v140) = 0;
        v141 = 0;
        v57 = sub_BFB220((unsigned __int64)v11);
        v58 = sub_BFB1C0((unsigned __int64)v11);
        v62 = sub_C00A40((unsigned __int64)v11, v55, v59, v60, v61);
        LOWORD(v134) = 1;
        HIDWORD(v134) = v62;
        v135 = v58;
        v136 = v57;
        LOBYTE(v16) = sub_1A16120(a1, v138, &v134, v11, a5, v8);
        if ( *(_DWORD *)a5 )
        {
          v137[0].m128i_i32[0] = 33;
          v137[0].m128i_i64[1] = v132;
          LOBYTE(v16) = (unsigned __int8)sub_1A0C040(a5 + 8, v137);
        }
        return (char)v16;
      }
      v16 = (unsigned __int16 **)v133;
LABEL_128:
      *(_QWORD *)(a5 + 8056) = v16;
      *(_DWORD *)a5 = 0;
      *(_DWORD *)(a5 + 184) = 33;
      return (char)v16;
    }
    goto LABEL_125;
  }
  v16 = *(unsigned __int16 ***)(a1 + 232);
  if ( (*((_BYTE *)v16 + 1) & 0x10) == 0 || *(_DWORD *)v10 == 17 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 184) = 27;
    return (char)v16;
  }
  v129 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v129;
  v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v129 + 16LL) - 43;
  if ( (unsigned int)v18 > 1 )
    goto LABEL_10;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v17 + 32);
    if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      v17 = *(_QWORD *)v20;
      v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v20 + 16LL) - 43;
      if ( (unsigned int)v18 <= 1 )
        break;
LABEL_10:
      v21 = sub_F63050(v17, a2, v18, a4);
      v19 = *(_QWORD *)(v21 + 32);
      if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
        goto LABEL_11;
    }
  }
LABEL_11:
  v22 = *(_QWORD **)(a1 + 248);
  v133 = 0;
  v23 = sub_A725A0(v22, v19, (__int64 *)&v133, a4, a5);
  v26 = (unsigned __int64 *)v11[2];
  v122 = v23;
  if ( (unsigned int)((__int64)(v11[3] - (_QWORD)v26) >> 3) == 1 )
  {
    v131 = *v26;
    v70 = sub_1E5F5F0(a1);
    v71 = *(_QWORD **)(a1 + 248);
    v137[0].m128i_i64[0] = 0;
    v134 = v70;
    v138[0] = (void *)sub_A725A0(v71, v70, v137[0].m128i_i64, v72, v73);
    LOBYTE(v16) = sub_1A0D460(a1, v131, &v134, (unsigned __int64 *)v138, v122, (_DWORD *)a5);
    if ( (_BYTE)v16 )
      return (char)v16;
    v74 = sub_EEB7E0(v131, v131, *(double *)a7.m128_u64);
    if ( (int)sub_1BE5E80(a1, v74, v19, v134, 0) > 0 )
    {
      LOBYTE(v16) = sub_1A0E5F0(
                      (_QWORD *)a1,
                      v10,
                      (__int64)a3,
                      v131,
                      v19,
                      v122,
                      a7,
                      v133,
                      v134,
                      (__int64)v138[0],
                      v137[0].m128i_u64[0],
                      (_DWORD *)a5,
                      1);
      if ( *(_DWORD *)a5 )
        LOBYTE(v16) = (unsigned __int8)sub_1A0D750(a5, v19, (__int64)v11);
      return (char)v16;
    }
    if ( 5LL * *(unsigned int *)(a5 + 16) )
      sub_1A0D750(a5, v19, (__int64)v11);
  }
  v27 = v19;
  if ( (v133 & 0xFFFFFE00) != 0 )
  {
    v28 = *(_QWORD **)(a1 + 248);
    v29 = v11[1];
    v138[0] = nullptr;
    sub_A725A0(v28, v29, (__int64 *)v138, v24, v25);
    v30 = v133;
    v31 = *(_QWORD *)(a1 + 248);
    if ( LODWORD(v138[0]) >> 9 != (unsigned int)v133 >> 9 )
    {
      LOBYTE(v16) = sub_F56A30((unsigned int)v133 >> 9, LODWORD(v138[0]) >> 9, *(_QWORD *)(a1 + 248));
      if ( !(_BYTE)v16 )
      {
        *(_DWORD *)a5 = 0;
        *(_DWORD *)(a5 + 184) = 20;
        return (char)v16;
      }
      v31 = *(_QWORD *)(a1 + 248);
      v30 = v133;
    }
    v27 = sub_A70F20(v31, v122, v30 & 0xFFFFFFFF000001FFLL);
  }
  LODWORD(v138[0]) = 9;
  v138[1] = nullptr;
  v139 = v27;
  LODWORD(v140) = 0;
  v141 = 0;
  LOBYTE(v16) = sub_1A16120(a1, v138, a3, v11, a5, v8);
  if ( *(_DWORD *)a5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44
      || (LOBYTE(v16) = v133, (v133 & 1) != 0) && (v133 & 4) == 0 )
    {
      if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0
        && *(_BYTE *)(sub_F63050(*(_QWORD *)(v122 & 0xFFFFFFFFFFFFFFF0LL), v138, v137, v32) + 16) == 5
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44 )
      {
        v137[0].m128i_i32[0] = 9;
        v137[0].m128i_i64[1] = v19;
        sub_1A0C040(a5 + 8, v137);
      }
      v137[0].m128i_i64[1] = v27;
      v137[0].m128i_i32[0] = 5;
      sub_1A0C040(a5 + 8, v137);
      LOBYTE(v16) = v133;
      if ( (v133 & 0xFFFFFE00) != 0 )
        LOBYTE(v16) = (unsigned __int8)sub_1A0B930(
                                         a5,
                                         v19,
                                         (unsigned int)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 8LL)
                                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                                 + 16LL) == 44)
                                       + 1);
    }
    else
    {
      *(_DWORD *)a5 = 0;
      *(_DWORD *)(a5 + 184) = 14;
    }
  }
  return (char)v16;
}
