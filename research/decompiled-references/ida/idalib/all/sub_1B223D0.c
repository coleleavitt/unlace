char *__fastcall sub_1B223D0(__int64 a1, __int64 a2, char a3, unsigned int a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  __int64 v11; // r12
  char *v12; // r13
  bool v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  char *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rsi
  int v26; // edx
  int v27; // r14d
  __int64 v29; // rax
  char v30; // r8
  bool v31; // al
  __int64 i; // rax
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  char v41; // al
  __int64 v42; // rax
  char v43; // r8
  const __m128i *v44; // r15
  int v45; // edx
  __int64 v46; // rcx
  bool v47; // al
  int v48; // eax
  __int64 v49; // r8
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r9
  char v56; // al
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  int v65; // r14d
  unsigned __int64 v66; // rax
  _DWORD *v67; // rax
  __int64 v68; // rcx
  __m128 *v69; // rdi
  __m128i *v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // r8d
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // r9
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rbp
  int v86; // ecx
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // r14
  unsigned __int64 v89; // rdi
  int v90; // ecx
  __int64 *v91; // r8
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  __m128i *v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rsi
  char v97; // [rsp+0h] [rbp-118h]
  char v98; // [rsp+0h] [rbp-118h]
  bool v99; // [rsp+0h] [rbp-118h]
  bool v100; // [rsp+0h] [rbp-118h]
  __int64 v101; // [rsp+0h] [rbp-118h]
  __int64 v102; // [rsp+8h] [rbp-110h]
  __int64 *v103; // [rsp+8h] [rbp-110h]
  int v104; // [rsp+14h] [rbp-104h]
  bool v105; // [rsp+14h] [rbp-104h]
  __int64 v106; // [rsp+18h] [rbp-100h]
  __int64 v107; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v108; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v109; // [rsp+38h] [rbp-E0h]
  char *v110; // [rsp+40h] [rbp-D8h]
  char v111[4]; // [rsp+50h] [rbp-C8h] BYREF
  int v112; // [rsp+54h] [rbp-C4h]
  __int64 v113; // [rsp+68h] [rbp-B0h]
  char v114; // [rsp+74h] [rbp-A4h]
  void *ptr[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v116; // [rsp+90h] [rbp-88h] BYREF
  __int64 v117; // [rsp+98h] [rbp-80h]
  _BYTE v118[4]; // [rsp+B0h] [rbp-68h] BYREF
  int v119; // [rsp+B4h] [rbp-64h]
  __int64 v120; // [rsp+C0h] [rbp-58h]

  v97 = a3;
  v9 = sub_1AEE450(a2);
  v10 = *(_BYTE *)(v9 + 28) & 0x7F;
  if ( (unsigned int)v10 - 40 <= 6 )
  {
    if ( v10 == 43 || *(char *)(v9 + 97) >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      if ( !a3 )
      {
        v12 = (char *)v9;
        v13 = sub_9B48E0(v9);
        if ( v13 )
        {
LABEL_6:
          v14 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
          if ( !v14 || *(_DWORD *)(v14 + 976) == 103 )
            goto LABEL_27;
          goto LABEL_8;
        }
        goto LABEL_57;
      }
      v29 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
      if ( !v29 )
      {
        v12 = (char *)v9;
        v97 = 0;
        v13 = sub_9B48E0(v9);
        if ( !v13 )
          goto LABEL_57;
        goto LABEL_39;
      }
      v30 = *(_BYTE *)(v29 + 1108);
      v12 = (char *)v9;
      if ( !v30 )
        goto LABEL_33;
LABEL_37:
      ++*(_DWORD *)(v11 + 27504);
      if ( v12 )
      {
        v30 = 1;
LABEL_33:
        v98 = v30;
        v31 = sub_9B48E0((__int64)v12);
        v13 = v98;
        if ( v31 )
          goto LABEL_34;
LABEL_57:
        v99 = v13;
        v37 = sub_15F3040(*(_QWORD *)a1);
        v13 = v99;
        if ( !v37 )
        {
          v58 = sub_15F24E0(*(_QWORD *)a1, a2, v38, v39, v99, v40);
          v13 = v99;
          if ( !v58 )
          {
            v62 = sub_15F2610(*(_QWORD *)a1, 0, v59, v60, v99, v61);
            v13 = v99;
            if ( !v62 )
              goto LABEL_34;
          }
        }
        v100 = v13;
        v41 = sub_1AF2F40(a1);
        v13 = v100;
        if ( !v41 )
        {
LABEL_59:
          if ( *(_DWORD *)(a1 + 24) )
          {
            v97 = v13;
            v42 = sub_168B6E0(a1);
            v43 = v97;
            if ( *(_DWORD *)(v42 + 64) > 0x2Du || (v63 = sub_B06290(v12), v43 = v97, BYTE4(v63)) )
            {
              v97 = v43;
              v12 = nullptr;
            }
            else
            {
              sub_1B21670(a1, 0, v12, 0, *(double *)a5.m128_u64);
              v12 = nullptr;
            }
            goto LABEL_28;
          }
LABEL_34:
          v97 = v13;
          if ( !a3 )
            goto LABEL_6;
          goto LABEL_39;
        }
        sub_1AFB290((__int64)v118, *(_QWORD *)(a1 + 8), v9, *(_DWORD *)(*(_QWORD *)(a1 + 8) + 27456LL) != 106);
        v13 = v100;
        if ( v119 == 106 || !v120 )
        {
          v51 = sub_B06290(v12);
          v13 = v100;
          if ( BYTE4(v51) )
            goto LABEL_88;
          v52 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
          v53 = *(unsigned int *)(*(_QWORD *)a1 + 40LL);
          v54 = v52 + 8 * v53;
          if ( a3 )
            v54 -= 8 * (v53 - (a4 + 1));
          if ( v52 == v54 )
LABEL_136:
            BUG();
          v55 = *(_QWORD *)(v54 - 8);
          v56 = *(_BYTE *)(v55 + 8) & 7;
          if ( (unsigned __int8)(v56 - 1) > 2u )
          {
LABEL_88:
            v12 = nullptr;
          }
          else
          {
            v57 = v54 - 8;
            while ( v56 != 3 || *(_WORD *)(v55 + 1560) != 2 )
            {
              if ( v57 == v52 )
                goto LABEL_136;
              v55 = *(_QWORD *)(v57 - 8);
              v57 -= 8;
              v56 = *(_BYTE *)(v55 + 8) & 7;
              if ( (unsigned __int8)(v56 - 1) > 2u )
                goto LABEL_88;
            }
            v105 = v100;
            ptr[1] = (void *)0x400000000LL;
            v64 = *(_QWORD *)(a1 + 8);
            ptr[0] = &v116;
            v101 = v55;
            sub_FFF220(
              (__int64)ptr,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v64 + 336) + 6776LL * *(unsigned int *)(v64 + 344) - 6776)
                              + 1688LL * *(unsigned __int16 *)(v55 + 1562)
                              + 976));
            v13 = v105;
            if ( *((_DWORD *)ptr[0] + *(unsigned __int16 *)(v101 + 1564)) == 88 )
            {
              if ( ptr[0] != &v116 )
              {
                free(ptr[0]);
                v13 = v105;
              }
              goto LABEL_59;
            }
            if ( ptr[0] != &v116 )
            {
              free(ptr[0]);
              v13 = v105;
            }
          }
        }
        v97 = v13;
        goto LABEL_28;
      }
      v97 = 1;
LABEL_39:
      if ( a4 == -1 )
        goto LABEL_27;
LABEL_40:
      for ( i = a4; ; i = --a4 )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 8 * i);
        v34 = *(_BYTE *)(v33 + 8) & 7;
        if ( (unsigned __int8)(v34 - 1) > 2u )
          break;
        if ( v34 == 3 && *(_WORD *)(v33 + 1560) == 2 )
          goto LABEL_6;
        if ( !a4 )
          goto LABEL_27;
      }
      goto LABEL_27;
    }
    return nullptr;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( a3 )
  {
    v35 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
    v12 = (char *)v35;
    if ( !v35 )
    {
      if ( a4 == -1 )
        return v12;
      v97 = 0;
      goto LABEL_40;
    }
    if ( !*(_BYTE *)(v35 + 1108) )
    {
      v97 = 0;
      v12 = nullptr;
      goto LABEL_39;
    }
    v12 = nullptr;
    goto LABEL_37;
  }
  v36 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
  v12 = (char *)v36;
  if ( !v36 )
    return v12;
  if ( *(_DWORD *)(v36 + 976) == 103 )
    return nullptr;
  v15 = v11;
  v12 = nullptr;
LABEL_8:
  if ( *(_DWORD *)(v15 + 27456) != 106 )
  {
    v16 = sub_1AE6050(v15);
    if ( !v16 || *(_DWORD *)(v16 + 976) == 103 )
      goto LABEL_27;
  }
  if ( (unsigned int)sub_1AFA3A0(v15, v9) )
  {
    if ( !v12 )
      v12 = v17;
    goto LABEL_28;
  }
  if ( v12 )
  {
    if ( sub_9B48E0((__int64)v12) )
    {
      v18 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
      v19 = v18 ? *(_DWORD *)(v18 + 976) : 103;
      if ( sub_FFE740(v19) )
        goto LABEL_28;
      if ( sub_FFEA60(v19, v9, v20, v21) )
        goto LABEL_28;
      v24 = sub_FFEF70(v19, v9, v22, v23);
      if ( v19 == 103 || v24 )
        goto LABEL_28;
    }
    v25 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v25 + 27472) )
      goto LABEL_28;
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 8);
  }
  sub_1AFB290((__int64)v111, v25, v9, *(_DWORD *)(v25 + 27456) != 106);
  v27 = v112;
  if ( v112 != 106 && (unsigned __int8)sub_FFEF20(v112) )
  {
    if ( !v12 )
    {
      v12 = *(char **)(v113 + 16);
      goto LABEL_28;
    }
    if ( sub_9B48E0((__int64)v12) || !v114 )
      goto LABEL_28;
  }
  if ( (unsigned __int8)sub_FFEF60(v27, v25, v26) )
  {
LABEL_27:
    v12 = nullptr;
    goto LABEL_28;
  }
  v44 = (const __m128i *)&v108;
  sub_1AF1480(
    (__int64)ptr,
    *(_QWORD *)(a1 + 8),
    v9,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE69D0,
    (__int64)&v108,
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 27456LL) != 106,
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1AE9810,
    (__int64)v118);
  v45 = HIDWORD(ptr[0]);
  v46 = v117;
  if ( v12 )
  {
    v106 = v117;
    v104 = HIDWORD(ptr[0]);
    v47 = sub_9B48E0((__int64)v12);
    v45 = v104;
    v46 = v106;
    if ( !v47 )
    {
      if ( v104 != 106 )
        goto LABEL_28;
      v48 = sub_1AE7690(*(_QWORD *)(a1 + 8));
      if ( ((v48 - 4) & 0xFFFFFFFB) != 0 && v48 != 1 || v27 == 94 )
        goto LABEL_27;
      goto LABEL_75;
    }
  }
  if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 49 > 2 )
  {
    if ( v45 != 106 )
    {
      if ( v12 )
        goto LABEL_28;
LABEL_98:
      v12 = *(char **)(v46 + 16);
      goto LABEL_28;
    }
LABEL_99:
    if ( !v12 )
      goto LABEL_27;
    v49 = *(_QWORD *)(a1 + 8);
LABEL_75:
    v50 = sub_1AE7690(v49);
    if ( ((v50 - 4) & 0xFFFFFFFB) != 0 && v50 != 1 )
      goto LABEL_27;
    goto LABEL_28;
  }
  if ( v45 == 106 )
    goto LABEL_99;
  if ( v12 )
    goto LABEL_28;
  if ( v46 )
    goto LABEL_98;
  sub_1AF1480(
    (__int64)v118,
    *(_QWORD *)(a1 + 8),
    v9,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE93B0,
    (__int64)&v107,
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 27456LL) != 106,
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1AE9820,
    (__int64)&v108);
  v65 = v119;
  if ( v119 == 106 )
    goto LABEL_27;
  v12 = (char *)sub_1AE6110(*(_QWORD *)(a1 + 8), v9);
  if ( !v12 )
  {
    if ( (sub_19A27D0(*(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v102 = *(_QWORD *)a1;
      v66 = sub_19A27D0(*(_QWORD *)a1);
      v67 = sub_19B4F00(v102, 0, v66, 1);
      v68 = *(_QWORD *)(v9 + 48);
      v69 = *(__m128 **)a1;
      LODWORD(v109) = 0;
      v108 = 0;
      v110 = nullptr;
      v107 = v9 | (*(_BYTE *)(v9 + 29) >> 5) & 3;
      v103 = sub_19C4C50(v69, (__int64)v67, 1, 0, 0, 0, a5, a6, 0, v9, v107, 0, (__int64)&v108, v68, 1, 0, 0);
      v70 = (__m128i *)sub_B72690(*(_QWORD *)(*(_QWORD *)a1 + 544LL));
      v71 = *(_QWORD *)(v9 + 40);
      if ( (v71 & 7) == 0 )
        v12 = (char *)(v71 & 0xFFFFFFFFFFFFFFF8LL);
      v72 = sub_1AEC6A0(*(_QWORD *)a1, (__int64)v12, (unsigned __int64)v103, v65 != 82, v70, 0, a5, a6);
      v108 = *(_QWORD *)(v72 + 48);
      v75 = sub_C1BEF0((__int64)&v108, (__int64)v12, v73, v74);
      v76 = sub_1AE9760(*(_QWORD *)a1, v72, v75, 0);
      v77 = *(_QWORD *)(a1 + 8);
      v12 = *(char **)(v76 + 16);
      v78 = *(unsigned int *)(v77 + 344);
      if ( (_DWORD)v78 )
      {
        v79 = *(_DWORD *)(v77 + 27504);
        v80 = *(_QWORD *)(v77 + 336) + 6776 * v78 - 6776;
        v81 = *(_QWORD *)v80;
        v82 = *(unsigned int *)(v80 + 8);
        v83 = v82 - v79;
        v84 = *(_QWORD *)v80 + 1688 * v83;
        if ( *(_QWORD *)(v80 + 6768) == *(_QWORD *)(v77 + 328) )
        {
          if ( v79 >= (unsigned int)v82 )
            v83 = 0;
        }
        else
        {
          v83 = 0;
        }
        while ( 1 )
        {
          v85 = v84;
          if ( v81 == v84 )
            break;
          v86 = *(_DWORD *)(v84 - 760);
          v84 -= 1688;
          if ( ((v86 - 4) & 0xFFFFFFFB) == 0 )
          {
            v87 = *(unsigned int *)(v85 - 352);
            v88 = *(_QWORD *)(v85 - 360);
            v89 = *(unsigned int *)(v85 - 348);
            v90 = *(_DWORD *)(v85 - 352);
            v91 = (__int64 *)(v88 + 24 * v87);
            if ( v87 >= v89 )
            {
              v92 = v87 + 1;
              v108 = v9;
              v109 = v83;
              v110 = v12;
              if ( v89 < v92 )
              {
                v95 = v84 + 1328;
                v96 = v85 - 344;
                if ( v88 > (unsigned __int64)&v108 || v91 <= &v108 )
                {
                  sub_2237220(v95, v96, v92, 24);
                  v93 = *(_QWORD *)(v85 - 360);
                }
                else
                {
                  sub_2237220(v95, v96, v92, 24);
                  v93 = *(_QWORD *)(v85 - 360);
                  v44 = (const __m128i *)((char *)&v108 + v93 - v88);
                }
              }
              else
              {
                v93 = *(_QWORD *)(v85 - 360);
              }
              v94 = (__m128i *)(24LL * *(unsigned int *)(v85 - 352) + v93);
              *v94 = _mm_loadu_si128(v44);
              v94[1].m128i_i64[0] = v44[1].m128i_i64[0];
              ++*(_DWORD *)(v85 - 352);
            }
            else
            {
              *v91 = v9;
              v91[1] = v83;
              v91[2] = (__int64)v12;
              *(_DWORD *)(v85 - 352) = v90 + 1;
            }
            goto LABEL_28;
          }
          --v83;
        }
      }
      goto LABEL_28;
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( v97 )
    --*(_DWORD *)(v11 + 27504);
  return v12;
}
