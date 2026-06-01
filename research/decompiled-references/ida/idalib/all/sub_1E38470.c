unsigned __int64 __fastcall sub_1E38470(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __m128 a6,
        __m128 a7,
        __m128i a8)
{
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned int v13; // r13d
  char v14; // al
  __int64 v15; // rcx
  bool v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned int v21; // eax
  bool v22; // si
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // cl
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rsi
  int *v34; // r13
  int *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int32 v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // r8
  __int64 v61; // rbx
  __int64 *v62; // r8
  __int64 *v63; // rbp
  int v64; // ebx
  unsigned __int64 v65; // rax
  __int64 (__fastcall *v66)(__int64); // rdx
  __int64 (__fastcall *v67)(__int64); // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  bool v70; // r11
  __int64 v71; // rsi
  __int64 (__fastcall *v72)(__int64); // rax
  unsigned __int64 v73; // r13
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  int v79; // eax
  _QWORD *v80; // rax
  __int64 (__fastcall *v81)(__int64); // rax
  __int64 v82; // r14
  unsigned __int64 v83; // rdi
  __int64 v84; // rax
  __int64 (*v85)(void); // rax
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 *v90; // r8
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rdx
  unsigned __int64 v97; // rax
  const __m128i *v98; // rdx
  const __m128i *v99; // rbx
  __m128 *v100; // rax
  const __m128i *v101; // r12
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 *v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // r14
  unsigned __int64 v111; // rdx
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // r13
  __int64 v115; // r14
  __int64 v116; // rax
  unsigned __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  unsigned __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r12
  __int64 v136; // rax
  unsigned __int64 v137; // rax
  __int64 v138; // rbx
  __int64 v139; // [rsp+0h] [rbp-2A8h]
  int v140; // [rsp+8h] [rbp-2A0h]
  __int64 v141; // [rsp+8h] [rbp-2A0h]
  bool v142; // [rsp+10h] [rbp-298h]
  bool v143; // [rsp+10h] [rbp-298h]
  bool v144; // [rsp+10h] [rbp-298h]
  __int64 v145; // [rsp+10h] [rbp-298h]
  unsigned __int64 v146; // [rsp+10h] [rbp-298h]
  __int64 v147; // [rsp+18h] [rbp-290h]
  char v148; // [rsp+18h] [rbp-290h]
  _QWORD *v149; // [rsp+20h] [rbp-288h]
  unsigned int v150; // [rsp+28h] [rbp-280h]
  bool v151; // [rsp+2Fh] [rbp-279h]
  const __m128i *v152; // [rsp+50h] [rbp-258h]
  const __m128i *v153; // [rsp+60h] [rbp-248h]
  __int64 v154; // [rsp+78h] [rbp-230h]
  __m128 v155; // [rsp+80h] [rbp-228h] BYREF
  __int64 v156; // [rsp+90h] [rbp-218h]
  char v157; // [rsp+98h] [rbp-210h] BYREF
  __m128i v158; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v159; // [rsp+B0h] [rbp-1F8h]
  __m128i v160; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v161[16]; // [rsp+D0h] [rbp-1D8h] BYREF
  __m128i ptr; // [rsp+150h] [rbp-158h] BYREF
  _BYTE v163[256]; // [rsp+160h] [rbp-148h] BYREF
  unsigned int v164; // [rsp+260h] [rbp-48h]
  unsigned int v165; // [rsp+264h] [rbp-44h]

  v9 = a4;
  v10 = a1;
  v11 = *(_QWORD *)(a3 + 16);
  v150 = a2;
  LOBYTE(v140) = a5;
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 4) != 0 )
    v12 = *(_QWORD *)v12;
  v13 = *(_DWORD *)(a4 + 112);
  v14 = sub_B8E180(v12);
  v16 = v14;
  if ( !v14 )
  {
    v17 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( (_BYTE)v17 != 43 )
    {
      v16 = (_BYTE)v17 == 47 || (((_BYTE)v17 + 61) & 0x7Fu) <= 1;
      if ( !v16 )
        goto LABEL_11;
      goto LABEL_20;
    }
    goto LABEL_37;
  }
  if ( v13 )
  {
    v144 = v14;
    v20 = sub_B8C1B0(v12);
    v21 = sub_B8D390(v20);
    v15 = *(unsigned __int8 *)(a3 + 28);
    v16 = v144;
    v17 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( (_BYTE)v17 != 43 )
    {
      v15 = ((_BYTE)v17 + 61) & 0x7F;
      v22 = (unsigned __int8)v15 <= 1u;
      LOBYTE(v15) = (_BYTE)v17 == 47;
      if ( (_BYTE)v17 != 47 && !v22 )
      {
        if ( v13 >= v21 )
        {
          v16 = 0;
          goto LABEL_11;
        }
        goto LABEL_8;
      }
      goto LABEL_20;
    }
    if ( v13 < v21 )
    {
LABEL_30:
      v23 = *(_QWORD *)(a1 + 11280);
      if ( !v23 )
      {
        v27 = v15 & 0x7F;
        goto LABEL_41;
      }
      goto LABEL_21;
    }
LABEL_37:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0 )
      return a3;
    goto LABEL_38;
  }
  v15 = *(unsigned __int8 *)(a3 + 28);
  v17 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (_BYTE)v17 == 43 )
    goto LABEL_30;
  if ( (((_BYTE)v17 + 61) & 0x7Fu) <= 1 || (_BYTE)v17 == 47 )
  {
LABEL_20:
    v23 = *(_QWORD *)(a1 + 11280);
    if ( !v23 )
      return a3;
LABEL_21:
    v24 = (__int64 *)sub_1DBE240(v23, a3, v17, v15);
    if ( v24 )
    {
      v25 = *v24;
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v25 || (v25 & 4) != 0 || !v26 )
        return *(_QWORD *)(*(_QWORD *)v26 + 8LL * (unsigned int)(*(_DWORD *)(v10 + 12632) - 1));
      if ( (*(_BYTE *)(v26 + 28) & 0x7F) == 0x34 && sub_B799A0(v26) && *(_DWORD *)(v10 + 12632) )
        return *(_QWORD *)(sub_B9AE60(v19) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 12632) - 1));
      return v19;
    }
LABEL_39:
    v27 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( ((v27 + 61) & 0x7Fu) <= 1 || v27 == 47 )
      return a3;
LABEL_41:
    if ( *(char *)(a3 + 28) < 0 )
      return 0;
    if ( (unsigned int)v27 - 59 <= 2 )
    {
      v29 = a3;
      do
      {
        v30 = *(_QWORD *)(v29 + 16);
        v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v30 & 4) != 0 )
          v31 = *(_QWORD *)v31;
        if ( (*(_BYTE *)(v31 + 8) & 0x7Fu) - 59 > 2 )
          break;
        v29 = v31 - 64;
      }
      while ( v29 );
    }
    v19 = sub_1E02D80(v10, a3, *(_QWORD *)(v10 + 544), v9);
    sub_1DC20B0(*(_QWORD *)(v10 + 11280), a3, v19, v32);
    return v19;
  }
LABEL_8:
  v15 = *(_BYTE *)(v12 + 8) & 0x7F;
  if ( (unsigned __int8)v15 <= 0x12u )
  {
    if ( ((1LL << v15) & 0x40182) != 0 )
      goto LABEL_38;
  }
  else if ( (unsigned __int8)v15 <= 0x21u )
  {
    v15 = ((_BYTE)v15 + 102) & 0x7F;
    if ( (unsigned __int8)v15 <= 1u )
      goto LABEL_38;
  }
  else if ( (unsigned __int8)v15 <= 0x27u )
  {
    goto LABEL_38;
  }
LABEL_11:
  if ( (unsigned int)(unsigned __int8)v17 - 59 > 2 )
    goto LABEL_53;
  v18 = *(_QWORD *)(a3 + 128);
  if ( !v18 || (*(_BYTE *)(v18 + 10) & 0x20) == 0 )
    goto LABEL_16;
  v142 = v16;
  if ( (unsigned int)sub_B8D390(a3) > *(_DWORD *)(v9 + 112) )
  {
LABEL_38:
    v23 = *(_QWORD *)(a1 + 11280);
    if ( !v23 )
      goto LABEL_39;
    goto LABEL_21;
  }
  v16 = v142;
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 59 <= 2 )
  {
LABEL_16:
    v143 = v16;
    v147 = a3 + 64;
    if ( !(unsigned __int8)sub_B8E180(a3 + 64) )
      return a3;
    v65 = sub_B97230(a3);
    v70 = v143;
    v71 = v65;
    v149 = (_QWORD *)v65;
    if ( v65 )
    {
      v66 = sub_6EE8F0;
      v72 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL);
      if ( v72 == sub_6EE8F0 )
      {
        v149 = *(_QWORD **)(v71 + 72);
      }
      else
      {
        v93 = v72(v71);
        v70 = v143;
        v149 = (_QWORD *)v93;
      }
    }
    else if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 60 <= 1 )
    {
      v89 = (_QWORD *)sub_BBF290(a3);
      v67 = sub_6EE8F0;
      v70 = v143;
      v66 = *(__int64 (__fastcall **)(__int64))(*v89 + 32LL);
      if ( v66 == sub_6EE8F0 )
      {
        v149 = (_QWORD *)v89[9];
      }
      else
      {
        v130 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v66)(v89, 0);
        v70 = v143;
        v149 = (_QWORD *)v130;
      }
    }
    v146 = v12;
    v73 = *(_QWORD *)(a1 + 544);
    v151 = v70;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v73 + 8) & 0x7F) == 0 || (*(_BYTE *)(v73 + 8) & 0x7F) == 0x18 )
      {
        v12 = v146;
        v16 = v151;
        break;
      }
      v74 = sub_B91570(v73, v71, (__int64)v66, (__int64)v67, v68, v69);
      if ( v74 == sub_B91570(v147, v71, v75, v76, v77, v78) )
        return a3;
      v79 = *(_BYTE *)(v73 + 8) & 0x7F;
      if ( (unsigned int)(v79 - 59) > 2 )
      {
LABEL_111:
        if ( (unsigned int)(v79 - 34) > 5 || v73 == 72 )
          goto LABEL_118;
        if ( (*(_WORD *)(v73 - 42) & 0x180) != 0
          && ((v87 = *(_BYTE *)(sub_B8DFE0(v73 - 72) + 8) & 0x7F) == 0 || v87 == 24) )
        {
          v88 = *(_QWORD *)(v73 - 56);
          v73 = v88 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v88 & 4) != 0 )
            v73 = *(_QWORD *)(v73 + 8);
        }
        else
        {
          if ( (*(_BYTE *)(v73 - 44) & 0x7F) != 0x27 || (*(_BYTE *)(v73 - 43) & 2) == 0 )
            goto LABEL_118;
          if ( (*(_DWORD *)(v73 - 32) & 7) != 7 || (v94 = *(_QWORD *)(v73 - 32) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v94) )
          {
            ptr.m128i_i64[0] = (__int64)v163;
            ptr.m128i_i64[1] = 0x800000000LL;
            v164 = v150;
            v165 = v150;
            BUG();
          }
          v95 = *(_QWORD *)(v94 + 16);
          v96 = *(_QWORD *)v9;
          ptr.m128i_i64[0] = (__int64)v163;
          ptr.m128i_i64[1] = 0x800000000LL;
          v164 = v150;
          v165 = v150;
          v97 = *(_QWORD *)(v96 + 16);
          v98 = *(const __m128i **)(v96 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)(v95 + 56) + 20LL) & 0x1FFFFFFFu) < v97 )
            v97 = *(_DWORD *)(*(_QWORD *)(v95 + 56) + 20LL) & 0x1FFFFFFF;
          v153 = (const __m128i *)((char *)v98 + 24 * v97);
          if ( v153 != v98 )
          {
            v152 = v98;
            v154 = v9;
            do
            {
              v99 = (const __m128i *)&v157;
              a7 = (__m128)_mm_loadu_si128(v152);
              v155 = a7;
              v156 = v152[1].m128i_i64[0];
              v100 = &v155;
              if ( (a7.m128_i32[0] & 0x7FFFFFFF) != 9
                || (v100 = (__m128 *)v155.m128_u64[1],
                    v99 = (const __m128i *)(v155.m128_u64[1] + 24LL * v155.m128_u32[1]),
                    (const __m128i *)v155.m128_u64[1] != v99) )
              {
                v101 = (const __m128i *)v100;
                do
                {
                  a6 = (__m128)_mm_loadu_si128(v101);
                  v101 = (const __m128i *)((char *)v101 + 24);
                  v158 = (__m128i)a6;
                  v159 = v101[-1].m128i_i64[1];
                  sub_1D3AAD0(&v160, v10, &v158, 0, v150, 0, *(double *)a6.m128_u64, a7);
                  sub_17429A0((__int64)&ptr, &v160);
                }
                while ( v99 != v101 );
              }
              v152 = (const __m128i *)((char *)v152 + 24);
            }
            while ( v153 != v152 );
            v9 = v154;
          }
          sub_F22AA0((unsigned __int64 *)&v160, v95);
          v71 = v160.m128i_i64[0];
          v158.m128i_i64[0] = sub_1CDD580(
                                v10,
                                v160.m128i_i64[0],
                                v150,
                                (__int64)&ptr,
                                a6,
                                a7,
                                v102,
                                v103,
                                v139,
                                v140,
                                v146,
                                v147,
                                (int)v149,
                                v150);
          v108 = (__int64 *)(v158.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
          if ( (v158.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_181;
          if ( (*(_BYTE *)(*v108 + 17) & 0x10) != 0 )
            goto LABEL_181;
          v109 = sub_F63270(*v108, v71, v104, v105, v106, v107);
          v110 = (__int64)v109;
          if ( !v109 )
            goto LABEL_181;
          if ( (_BYTE)v140 )
          {
            v71 = v150;
            if ( (unsigned __int8)sub_1DBD760(
                                    v10,
                                    v150,
                                    (__int64)v109,
                                    *(double *)a6.m128_u64,
                                    *(double *)a7.m128_u64,
                                    a8) )
            {
              sub_168B9F0((__int64)&v160, (__int64 *)(v10 + 8), v150, 0x138Cu, 0);
              v138 = sub_1605D30((__int64)&v160, v158.m128i_i64);
              v155.m128_i8[0] = (unsigned int)sub_B97260(v110) == 2;
              sub_1588420(v138, (unsigned __int8 *)&v155);
              sub_15F7200(&v160);
LABEL_181:
              if ( (_BYTE *)ptr.m128i_i64[0] != v163 )
                free((void *)ptr.m128i_i64[0]);
              return 0;
            }
          }
          v73 = v110 + 64;
          if ( (_BYTE *)ptr.m128i_i64[0] != v163 )
            free((void *)ptr.m128i_i64[0]);
        }
      }
      else
      {
        if ( v73 != 64 )
        {
          if ( (*(_BYTE *)(v73 - 36) & 0x7Fu) - 60 > 1
            || (v80 = (_QWORD *)sub_BBF290(v73 - 64), !v149)
            || (v71 = (__int64)v80, !(unsigned __int8)sub_1DFE9F0(v149, v80)) )
          {
            v81 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL);
            if ( v81 == sub_A01140 )
              v82 = sub_B70A60(a3);
            else
              v82 = v81(a3);
            v83 = v73 - 64;
            while ( 1 )
            {
              v85 = *(__int64 (**)(void))(*(_QWORD *)v83 + 32LL);
              v84 = (char *)v85 == (char *)sub_A01140 ? sub_B70A60(v83) : v85();
              if ( v82 == v84 )
                break;
              v83 = sub_B971E0(v84);
              if ( !v83 )
              {
                v79 = *(_BYTE *)(v73 + 8) & 0x7F;
                goto LABEL_111;
              }
            }
          }
          return v73 - 64;
        }
LABEL_118:
        v73 = sub_B72690(v73);
      }
    }
  }
LABEL_53:
  if ( !v16 )
    return a3;
  v33 = v150;
  v34 = (int *)sub_1E39240(v10, v150, v12, v9);
  if ( !v34 )
    return 0;
  v35 = (int *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v35 = *(int **)v35;
  if ( v34 == v35 )
    return a3;
  if ( (v34[2] & 0x7Fu) - 59 <= 2 )
  {
    if ( v34 == &dword_40 )
    {
      v34 = &dword_40;
      v148 = 0;
      goto LABEL_69;
    }
    if ( !(unsigned __int8)sub_B8E180((unsigned __int64)v34) )
    {
      v39 = *((_QWORD *)v34 - 2);
      if ( v39 )
      {
        v40 = v39 & 0xFFFFFFFFFFFFFFF0LL;
        v41 = v40;
        v42 = v40;
      }
      else
      {
        v33 = (__int64)(v34 - 16);
        v41 = sub_A7AA70(*(_QWORD *)(v10 + 248), (__int64)(v34 - 16), 0, v36, v37, v38);
        v42 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v43 + 16) != 48 )
        v43 = 0;
      v148 = sub_F60F20(v43, v33, v40, v36, v37, v38);
      if ( !(unsigned __int8)sub_F60F20(v43, v33, v44, v45, v46, v47) )
      {
        v33 = v150;
        if ( (unsigned __int8)sub_1E63CF0(v10, v150, v41, 1, 3968) )
          return 0;
      }
      v34 = (int *)sub_F60F10(v43, v33, v48, v49, v50, v51);
      if ( v34 )
        v34 += 16;
      goto LABEL_69;
    }
  }
  v148 = 0;
LABEL_69:
  v52 = *(_QWORD *)(a3 + 40);
  if ( !v52 )
  {
    v91 = sub_B8E970((__int64)v34);
    v92 = *(_QWORD *)(v10 + 248);
    v19 = v91;
    if ( !v91 )
      goto LABEL_78;
    while ( !sub_1E38040(v92, (_QWORD *)a3, v19) )
    {
      v19 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v19 )
        goto LABEL_78;
    }
    return v19;
  }
  v53 = *(_DWORD *)(a3 + 24);
  v160.m128i_i64[0] = *(_QWORD *)(a3 + 40);
  v160.m128i_i32[2] = v53;
  sub_B85890(v161, v52);
  sub_1DD8EB0(&ptr, v10, &v160, v9, v54, v55, a6, a7);
  if ( !ptr.m128i_i64[0] )
    return 0;
  v60 = sub_B94670((unsigned __int64)v34, ptr.m128i_i64[0], v56, v57, v58, v59);
  v141 = *(_QWORD *)(v10 + 248);
  if ( !v60 )
    goto LABEL_78;
  v145 = v10;
  while ( 1 )
  {
    v61 = v60;
    v62 = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
    v63 = v62;
    v19 = (__int64)v62;
    v64 = (v61 >> 2) & 1;
    if ( v64 )
    {
      if ( v62 )
      {
        if ( sub_1E38040(v141, (_QWORD *)a3, *v62) )
          break;
        goto LABEL_76;
      }
      v86 = 0;
    }
    else
    {
      v86 = (__int64)v62;
    }
    if ( sub_1E38040(v141, (_QWORD *)a3, v86) )
      break;
    if ( !v64 || !v63 )
    {
LABEL_77:
      v10 = v145;
      goto LABEL_78;
    }
LABEL_76:
    v60 = v63[1];
    if ( !v60 )
      goto LABEL_77;
  }
  v90 = v63;
  v10 = v145;
  if ( !v64 )
    goto LABEL_127;
  if ( !v90 )
    goto LABEL_78;
  v19 = *v90;
LABEL_127:
  if ( !v19 )
  {
LABEL_78:
    if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 53 <= 1 || (unsigned __int8)sub_15F7970(v10) )
      return 0;
    if ( !v148 )
    {
      v111 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v111 = *(_QWORD *)(v111 + 8);
      if ( v111 )
        v111 -= 64LL;
      v112 = sub_1E38470(v10, v150, v111, v9, 0);
      sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), v150, 0xE94u, 0);
      v158.m128i_i64[0] = *(_QWORD *)(a3 + 40);
      v113 = sub_15894B0((__int64)&ptr, v158.m128i_i64);
      v114 = *(_QWORD *)(v10 + 248);
      v115 = v113;
      v116 = *(_QWORD *)(v112 + 16);
      if ( (v116 & 4) != 0 )
        v117 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v117 = v116 & 0xFFFFFFFFFFFFFFF8LL;
      v118 = sub_B8C1B0(v117);
      v122 = *(_QWORD *)(v118 + 48);
      if ( v122 )
        v123 = v122 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v123 = sub_A7AA70(v114, v118, 0, v119, v120, v121);
      v160.m128i_i64[0] = v123;
      sub_162B6D0(v115, v160.m128i_i64);
      sub_15F7200(&ptr);
      sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), *(_DWORD *)(v112 + 24), 0x1730u, 0);
      v128 = *(_QWORD *)(v112 + 48);
      if ( v128 )
        v129 = v128 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v129 = sub_A7AA70(*(_QWORD *)(v10 + 248), v112, v124, v125, v126, v127);
      v160.m128i_i64[0] = v129;
      sub_162B6D0((__int64)&ptr, v160.m128i_i64);
      sub_15F7200(&ptr);
      return 0;
    }
    sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), v150, 0x1039u, 0);
    v158.m128i_i64[0] = *(_QWORD *)(a3 + 40);
    v135 = sub_15894B0((__int64)&ptr, v158.m128i_i64);
    if ( !v34 )
      BUG();
    v136 = *((_QWORD *)v34 - 2);
    if ( v136 )
      v137 = v136 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v137 = sub_A7AA70(*(_QWORD *)(v10 + 248), (__int64)(v34 - 16), v131, v132, v133, v134);
    v160.m128i_i64[0] = v137;
    sub_162B6D0(v135, v160.m128i_i64);
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), *(_DWORD *)(a3 + 24), 0x17E2u, 0);
    v19 = 0;
    sub_15F7200(&ptr);
  }
  return v19;
}
