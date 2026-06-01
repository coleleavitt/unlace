__int64 __fastcall sub_CCB640(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  _DWORD **v6; // rbx
  _DWORD **v7; // r12
  _DWORD *v8; // rbp
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rax
  const __m128i *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // ebp
  const __m128i *v25; // rax
  __m128i v26; // xmm2
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm1
  unsigned int v30; // edx
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm2
  __m128i v34; // xmm1
  int v35; // eax
  __int64 v36; // rdi
  int v37; // edi
  __int64 v38; // rdx
  int v39; // edx
  _DWORD *v40; // rdi
  unsigned int v41; // ebx
  unsigned int v42; // ebp
  size_t v43; // rsi
  unsigned int *v44; // rax
  unsigned int v45; // eax
  _DWORD *v46; // rbx
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r13
  int v51; // r9d
  unsigned int *v52; // rsi
  unsigned int *v53; // r8
  size_t v54; // rdx
  int v55; // r12d
  int v56; // eax
  __int64 v57; // rcx
  _BYTE *v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  int *v61; // r10
  unsigned int v62; // eax
  int v63; // esi
  int v64; // r9d
  int v65; // r12d
  unsigned int *v66; // rcx
  unsigned int *v67; // r8
  int v68; // edi
  unsigned int v69; // r11d
  int v70; // eax
  __int64 v71; // rdx
  _BYTE *j; // rax
  unsigned int v73; // esi
  __int64 v74; // rcx
  int v75; // edi
  __int64 v76; // rdx
  char v77; // bl
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rax
  void *v82; // r12
  __int64 v83; // r12
  int v84; // eax
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  void (__fastcall ***v92)(void *); // rbp
  _DWORD *v93; // r12
  unsigned int v94; // edx
  unsigned int v95; // ebp
  _DWORD **v96; // rbx
  __int64 v98; // rax
  int *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 *v102; // rax
  unsigned int v103; // r13d
  size_t v104; // rsi
  unsigned int *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  unsigned int v108; // edx
  unsigned int v109; // ebx
  _DWORD **v110; // rbp
  __int64 v111; // rbp
  __int64 v112; // rax
  _QWORD *v113; // rdi
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rax
  _QWORD *v118; // rdi
  __int64 v119; // rax
  unsigned int v120; // r13d
  unsigned int v121; // edx
  unsigned int *v122; // rax
  __int64 v123; // rax
  __int64 k; // rax
  __int64 i; // rax
  char **v126; // r12
  __int64 v127; // rdx
  char **exception; // r12
  __int64 v129; // rdx
  char **v130; // r12
  const char *v131; // rax
  __int64 v132; // rdx
  char **v133; // r12
  __int64 v134; // rdx
  _Unwind_Exception *v135; // [rsp+0h] [rbp-A8h]
  int v136; // [rsp+8h] [rbp-A0h]
  __int64 *v137; // [rsp+10h] [rbp-98h]
  __int64 v138; // [rsp+18h] [rbp-90h]
  __int64 v139; // [rsp+18h] [rbp-90h]
  __int64 v140; // [rsp+20h] [rbp-88h]
  __int64 v141; // [rsp+20h] [rbp-88h]
  __int64 v142; // [rsp+30h] [rbp-78h]
  char v143[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v144[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v145[9]; // [rsp+60h] [rbp-48h] BYREF

  v5 = *a2;
  v6 = *(_DWORD ***)a3;
  v137 = a2;
  *((_BYTE *)a1 + 96) = (*(_BYTE *)(*a2 + 123) & 4) != 0;
  v7 = &v6[*(unsigned int *)(a3 + 8)];
  if ( v6 < v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = v8[8]-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_7;
      }
      ++v6;
      sub_ED44E0(v8);
      sub_186B220(v8);
    }
    while ( v6 < v7 );
LABEL_7:
    v5 = *a2;
  }
  *(_DWORD *)(a3 + 8) = 0;
  sub_EE4940(v143, "diff-neq", v5);
  sub_EE4F60("diff-neq");
  sub_EE5110("diff-neq");
  v11 = *a2;
  v12 = *(_BYTE *)(*a2 + 123);
  if ( (v12 & 0x20) != 0 )
  {
    ++*(_DWORD *)(v11 + 32);
    v108 = *(_DWORD *)(a3 + 8);
    v109 = *(_DWORD *)(a3 + 12);
    if ( v108 >= v109 )
    {
      v116 = 2 * v109;
      v117 = sub_186B270(8 * v116);
      v108 = *(_DWORD *)(a3 + 8);
      v118 = *(_QWORD **)a3;
      v110 = (_DWORD **)v117;
      if ( v108 )
      {
        if ( v108 - 1 <= 2 || (_QWORD *)v117 == v118 + 1 )
        {
          for ( i = 0; i != v108; ++i )
            v110[i] = (_DWORD *)v118[i];
        }
        else
        {
          v119 = 0;
          do
          {
            *(__m128i *)&v110[v119] = _mm_loadu_si128((const __m128i *)&v118[v119]);
            v119 += 2;
          }
          while ( v119 != 2LL * (v108 >> 1) );
          if ( (v108 & 1) != 0 )
            v110[v108 & 0xFFFFFFFE] = (_DWORD *)v118[v108 & 0xFFFFFFFE];
        }
      }
      if ( v118 != (_QWORD *)(a3 + 16) && v118 )
      {
        sub_186B220(v118);
        v108 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v110;
      *(_DWORD *)(a3 + 12) = v116;
    }
    else
    {
      v110 = *(_DWORD ***)a3;
    }
    v110[v108] = (_DWORD *)v11;
    *(_DWORD *)(a3 + 8) = v108 + 1;
    return sub_EE4A00(v143);
  }
  v13 = *(_QWORD *)(v11 + 72);
  if ( !v13 )
    goto LABEL_19;
  v14 = *(unsigned __int8 *)(v13 + 3);
  LOBYTE(v14) = (unsigned __int8)v14 >> 6;
  if ( (_BYTE)v14 )
  {
    if ( (_BYTE)v14 != 1 )
    {
LABEL_12:
      if ( (_BYTE)v14 == 2 )
        v15 = (unsigned int)(*(_DWORD *)(v13 + 4) - 1);
      else
        v15 = *(unsigned int *)(v13 + 4);
      goto LABEL_14;
    }
  }
  else
  {
    do
    {
      v13 = *(_QWORD *)(v13 + 16);
      v14 = *(unsigned __int8 *)(v13 + 3);
      LOBYTE(v14) = (unsigned __int8)v14 >> 6;
    }
    while ( !(_BYTE)v14 );
    if ( (_BYTE)v14 != 1 )
      goto LABEL_12;
  }
  v15 = (unsigned int)(*(_DWORD *)(v13 + 4) + 1);
LABEL_14:
  if ( !(_DWORD)v15 )
    goto LABEL_19;
  v16 = *(__int64 **)v11;
  v17 = 0;
  if ( (v12 & 0x20) != 0 )
  {
LABEL_16:
    v18 = v16[108];
    goto LABEL_17;
  }
  while ( 2 )
  {
    v101 = *(_QWORD *)(v11 + 72);
    v14 = 17;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(v101 + 3);
      v13 = v10;
      LOBYTE(v13) = (unsigned __int8)v10 >> 6;
      if ( (v10 & 0x80u) != 0LL )
      {
        if ( (_BYTE)v13 != 2 )
        {
          v102 = (__int64 *)(*(_QWORD *)(v101 + 16) + 8 * v17);
          goto LABEL_137;
        }
        goto LABEL_142;
      }
      if ( *(_DWORD *)(v101 + 4) == (_DWORD)v17 )
        break;
LABEL_142:
      v101 = *(_QWORD *)(v101 + 16);
      v14 = (unsigned int)(v14 - 1);
      if ( !(_DWORD)v14 )
      {
        v13 = v11 + 72;
        v16 += 77;
        sub_233F80(v16, (_DWORD *)(v11 + 72));
        v102 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 72) + 16LL) + 8 * v17);
        goto LABEL_137;
      }
    }
    v102 = (__int64 *)(v101 + 8);
LABEL_137:
    v18 = *v102;
LABEL_17:
    if ( *(_WORD *)(v18 + 4) )
      goto LABEL_18;
    v14 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 24LL);
    if ( !v14 )
      goto LABEL_18;
    v13 = *(unsigned int *)v14;
    if ( (_DWORD)v13 != 5 )
    {
      if ( !(_DWORD)v13 && *(_DWORD *)(v14 + 4) == 8 && *(_DWORD *)(v18 + 24) == 1 )
      {
        v100 = *(_QWORD *)(v18 + 32);
        if ( !*(_WORD *)(v100 + 4) )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v100 + 16) + 24LL);
          if ( v14 )
          {
            v10 = *(unsigned int *)v14;
            if ( *(_QWORD *)v14 == 0x200000000LL && *(_DWORD *)(v100 + 24) == 2 )
            {
              v13 = *(_QWORD *)(v100 + 32);
              sub_CCACD0((__int64)a1, v13, *(_QWORD *)(v100 + 40));
              goto LABEL_131;
            }
          }
        }
      }
LABEL_18:
      sub_163AEC(v16, v13, v14, v10);
    }
    v14 = *(unsigned int *)(v14 + 4);
    if ( (_DWORD)v14 == 2 )
    {
      if ( *(_DWORD *)(v18 + 24) != 2 )
        goto LABEL_18;
      v13 = *(_QWORD *)(v18 + 32);
      sub_CCA940((__int64)a1, v13, *(_QWORD *)(v18 + 40));
    }
    else
    {
      if ( (_DWORD)v14 != 3 || *(_DWORD *)(v18 + 24) != 2 )
        goto LABEL_18;
      v13 = *(_QWORD *)(v18 + 40);
      sub_CCA940((__int64)a1, v13, *(_QWORD *)(v18 + 32));
    }
LABEL_131:
    if ( ++v17 != v15 )
    {
      v16 = *(__int64 **)v11;
      if ( (*(_BYTE *)(v11 + 123) & 0x20) != 0 )
        goto LABEL_16;
      continue;
    }
    break;
  }
LABEL_19:
  v19 = (const __m128i *)a1[9];
  if ( v19 )
  {
    v20 = v19[-1].m128i_u32[3];
    if ( (_DWORD)v20 )
    {
      v21 = 4 * v20;
      v22 = 0;
      do
      {
        v23 = *(unsigned int *)(a1[8] + v22);
        if ( (_DWORD)v23 == 0x80000000 || v19->m128i_i32[v22 / 4] == 0x7FFFFFFF )
          sub_163AEC(v21, v19, v23, v10);
        if ( (_DWORD)v23 )
          sub_163AEC(v21, v19, v23, v10);
        v22 += 4LL;
      }
      while ( v21 != v22 );
    }
    *((_DWORD *)a1 + 42) = 0;
    v24 = v19[-1].m128i_u32[3];
    if ( v24 )
    {
      if ( v24 - 1 <= 2 )
      {
        v35 = 0;
        v30 = 0;
        goto LABEL_31;
      }
      v25 = v19;
      v26 = 0;
      do
      {
        v27 = _mm_loadu_si128(v25++);
        v28 = _mm_cmpgt_epi32(v27, v26);
        v26 = _mm_or_si128(_mm_andnot_si128(v28, v26), _mm_and_si128(v27, v28));
      }
      while ( v25 != &v19[v24 >> 2] );
      v29 = _mm_srli_si128(v26, 8);
      v30 = v24 & 0xFFFFFFFC;
      v31 = _mm_cmpgt_epi32(v29, v26);
      v32 = _mm_or_si128(_mm_andnot_si128(v31, v26), _mm_and_si128(v29, v31));
      v33 = _mm_srli_si128(v32, 4);
      v34 = _mm_cmpgt_epi32(v33, v32);
      v35 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v34, v32), _mm_and_si128(v33, v34)));
      if ( (v24 & 3) != 0 )
      {
LABEL_31:
        if ( v35 < v19->m128i_i32[v30] )
          v35 = v19->m128i_i32[v30];
        v36 = v30 + 1;
        if ( (unsigned int)v36 < v24 )
        {
          v37 = v19->m128i_i32[v36];
          if ( v35 < v37 )
            v35 = v37;
          v38 = v30 + 2;
          if ( (unsigned int)v38 < v24 )
          {
            v39 = v19->m128i_i32[v38];
            if ( v35 < v39 )
              v35 = v39;
          }
        }
      }
      v40 = (_DWORD *)a1[22];
      v41 = v35 + 1;
      if ( v40 )
      {
        *(v40 - 1) = 0;
        if ( v35 == -1 )
          goto LABEL_47;
        goto LABEL_45;
      }
      if ( v35 != -1 )
      {
LABEL_170:
        v115 = (_QWORD *)sub_186B270(0xAu);
        v40 = v115 + 1;
        *v115 = 2;
        a1[22] = v115 + 1;
        goto LABEL_45;
      }
      goto LABEL_48;
    }
  }
  else
  {
    *((_DWORD *)a1 + 42) = 0;
  }
  v40 = (_DWORD *)a1[22];
  if ( !v40 )
  {
    v41 = 1;
    goto LABEL_170;
  }
  *(v40 - 1) = 0;
  v41 = 1;
LABEL_45:
  while ( 1 )
  {
    v45 = *(v40 - 2);
    if ( v45 >= v41 )
      break;
    v42 = (3 * v45 + 1) >> 1;
    v43 = v42 + 8;
    if ( v45 + 8 >= (unsigned int)v43 || v45 >= v42 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_163A6C(v144, "Overflow encountered when expanding vector", v129);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v144);
      sub_233E40((__int64)v144);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (unsigned int *)sub_186B300(v40 - 2, v43);
    v40 = v44 + 2;
    *v44 = v42;
    a1[22] = v44 + 2;
  }
  *(v40 - 1) = v41;
  v24 = 0;
  memset(v40, 0, v41);
  v19 = (const __m128i *)a1[9];
  if ( v19 )
LABEL_47:
    v24 = v19[-1].m128i_u32[3];
LABEL_48:
  v46 = (_DWORD *)a1[11];
  v47 = 0;
  if ( !v46 )
    goto LABEL_50;
LABEL_49:
  while ( 2 )
  {
    v47 = *(v46 - 1);
LABEL_50:
    if ( v47 >= v24 )
    {
      v77 = 1;
    }
    else
    {
      if ( !(unsigned __int8)sub_18290A0(*a1) )
      {
        v130 = (char **)__cxa_allocate_exception(0x28u);
        v131 = (const char *)sub_1829130(*a1);
        sub_163A6C(v144, v131, v132);
        *v130 = (char *)off_1C63670;
        sub_2333C0(v130 + 1, v144);
        sub_233E40((__int64)v144);
        __cxa_throw(v130, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      v46 = (_DWORD *)a1[11];
      if ( v46 )
      {
        v48 = (unsigned int)*(v46 - 1);
        v49 = 4 * v48;
      }
      else
      {
        v49 = 0;
        v48 = 0;
      }
      v50 = a1[9];
      v51 = *(_DWORD *)(v50 + v49);
      if ( v51 < 0 )
        goto LABEL_69;
      v52 = *(unsigned int **)(a1[10] + 8 * v48);
      if ( !v52 || (v53 = &v52[2 * *(v52 - 1)], v52 == v53) )
      {
        v55 = 0;
        if ( v46 )
          goto LABEL_118;
        goto LABEL_145;
      }
      v54 = 0xFFFFFFFFLL;
      v55 = 0;
      do
      {
        v56 = v46[*v52] + v52[1];
        if ( v55 <= v56 && v51 >= v56 )
        {
          if ( v55 == v56 )
          {
            if ( v51 < ++v55 )
              goto LABEL_69;
            v57 = a1[22];
            while ( 1 )
            {
              v58 = (_BYTE *)(v57 + (unsigned int)v55);
              if ( !*v58 )
                break;
              ++v55;
              *v58 = 0;
              if ( v51 < v55 )
                goto LABEL_69;
            }
          }
          else
          {
            if ( (int)v54 < v56 )
              v54 = v46[*v52] + v52[1];
            *(_BYTE *)(a1[22] + (unsigned int)v56) = 1;
          }
        }
        v52 += 2;
      }
      while ( v53 != v52 );
      if ( (int)v54 > 0 )
        memset((void *)(a1[22] + 1LL), 0, v54);
      if ( v55 != -1 )
      {
        if ( v46 )
        {
LABEL_118:
          v98 = (unsigned int)*(v46 - 1);
          if ( (_DWORD)v98 == *(v46 - 2) )
          {
            v103 = (unsigned int)(3 * v98 + 1) >> 1;
            v104 = 4 * v103 + 8;
            if ( 4 * (int)v98 + 8 >= (unsigned int)v104 || (unsigned int)v98 >= v103 )
            {
              v133 = (char **)__cxa_allocate_exception(0x28u);
              sub_163A6C(v144, "Overflow encountered when expanding vector", v134);
              *v133 = (char *)off_1C63128;
              sub_2333C0(v133 + 1, v144);
              sub_233E40((__int64)v144);
              __cxa_throw(v133, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v105 = (unsigned int *)sub_186B300(v46 - 2, v104);
            v46 = v105 + 2;
            *v105 = v103;
            v106 = v105[1];
            a1[11] = v46;
            v99 = &v46[v106];
          }
          else
          {
            v99 = &v46[v98];
          }
          goto LABEL_120;
        }
LABEL_145:
        v107 = (_QWORD *)sub_186B270(0x10u);
        *v107 = 2;
        v46 = v107 + 1;
        a1[11] = v107 + 1;
        v99 = (int *)(v107 + 1);
LABEL_120:
        *v99 = v55;
        ++*(v46 - 1);
        continue;
      }
LABEL_69:
      ++*((_DWORD *)a1 + 42);
      if ( v46 )
      {
        while ( 1 )
        {
          do
          {
LABEL_70:
            v59 = *(v46 - 1);
            if ( !v59 )
              goto LABEL_93;
            v60 = (unsigned int)(v59 - 1);
            v61 = &v46[v60];
            v62 = v59 - 1;
            v63 = *v61;
            *(v46 - 1) = v60;
            v64 = *(_DWORD *)(v50 + 4 * v60);
            v65 = v63 + 1;
          }
          while ( v63 + 1 > v64 );
          v66 = *(unsigned int **)(a1[10] + 8 * v60);
          if ( v66 )
          {
            v67 = &v66[2 * *(v66 - 1)];
            if ( v66 != v67 )
              break;
          }
LABEL_90:
          if ( v65 != -1 )
          {
            if ( v62 == *(v46 - 2) )
            {
              v120 = (3 * v62 + 1) >> 1;
              v121 = 4 * v120 + 8;
              if ( 4 * v62 + 8 >= v121 || v62 >= v120 )
              {
                v126 = (char **)__cxa_allocate_exception(0x28u);
                sub_163A6C(v144, "Overflow encountered when expanding vector", v127);
                *v126 = (char *)off_1C63128;
                sub_2333C0(v126 + 1, v144);
                sub_233E40((__int64)v144);
                __cxa_throw(v126, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v122 = (unsigned int *)sub_186B300(v46 - 2, v121);
              v46 = v122 + 2;
              *v122 = v120;
              v123 = v122[1];
              a1[11] = v46;
              v61 = &v46[v123];
            }
            *v61 = v65;
            ++*(v46 - 1);
            goto LABEL_49;
          }
        }
        v136 = v63;
        v68 = v63;
        v69 = v62;
        while ( 1 )
        {
LABEL_79:
          v70 = v46[*v66] + v66[1];
          if ( v65 > v70 || v64 < v70 )
            goto LABEL_78;
          if ( v65 != v70 )
            break;
          if ( v64 < ++v65 )
            goto LABEL_70;
          v71 = a1[22];
          for ( j = (_BYTE *)(v71 + (unsigned int)v65); *j; j = (_BYTE *)(v71 + (unsigned int)v65) )
          {
            ++v65;
            *j = 0;
            if ( v64 < v65 )
              goto LABEL_70;
          }
          v66 += 2;
          if ( v67 == v66 )
          {
LABEL_87:
            v62 = v69;
            v73 = v63 + 2;
            if ( v136 + 2 <= v68 )
            {
              v74 = a1[22];
              v75 = v68 + 1;
              do
              {
                v76 = v73++;
                *(_BYTE *)(v74 + v76) = 0;
              }
              while ( v73 != v75 );
            }
            goto LABEL_90;
          }
        }
        if ( v68 < v70 )
          v68 = v46[*v66] + v66[1];
        *(_BYTE *)(a1[22] + (unsigned int)v70) = 1;
LABEL_78:
        v66 += 2;
        if ( v67 == v66 )
          goto LABEL_87;
        goto LABEL_79;
      }
LABEL_93:
      v77 = 0;
    }
    break;
  }
  sub_EE4A20(":conflicts");
  v142 = *v137;
  if ( v77 )
  {
    if ( *((_BYTE *)a1 + 96) )
    {
      v139 = sub_186B270(0xA0u);
      sub_1373200(v139, *a1);
      v78 = a1[9];
      if ( v78 )
      {
        v79 = *(unsigned int *)(v78 - 4);
        if ( (_DWORD)v79 )
        {
          v80 = 0;
          v141 = 4 * v79;
          do
          {
            v83 = *(_QWORD *)(*(_QWORD *)(a1[4] + 2 * v80) + 16LL);
            v84 = *(_DWORD *)(a1[11] + v80);
            BYTE4(v144[0]) &= 0xFCu;
            v144[1] = 0;
            v145[0] = 1;
            v145[1] = 0;
            LODWORD(v144[0]) = v84;
            sub_182CBA0(qword_1C7F2C0, v145);
            v88 = a1[2];
            BYTE4(v145[0]) &= ~1u;
            LODWORD(v145[0]) = 1;
            if ( !v88 )
            {
              sub_16669E0(a1 + 1);
              v88 = a1[2];
            }
            v81 = sub_166A700(v88, (unsigned int)v144, 1, v85, v86, v87);
            sub_135F9B0(v139, v83, v81);
            v82 = qword_1C7F2C0;
            v80 += 4;
            sub_182CBA0(qword_1C7F2C0, v144);
            sub_182CBA0(v82, v145);
          }
          while ( v80 != v141 );
        }
      }
      v89 = sub_1336B20(v139);
      v90 = sub_1336AB0(*(_QWORD *)(v142 + 8), v89);
      v91 = v90;
      if ( v90 )
        ++*(_DWORD *)(v90 + 8);
      v92 = *(void (__fastcall ****)(void *))(v142 + 8);
      if ( v92 )
      {
        v9 = (*((_DWORD *)v92 + 2))-- == 1;
        if ( v9 )
        {
          (**v92)(v92);
          sub_186B220(v92);
        }
      }
      *(_QWORD *)(v142 + 8) = v91;
      v142 = *v137;
    }
    sub_ED2DA0(v142);
  }
  else
  {
    sub_EDBA20(*v137, *(_QWORD *)(*a1 + 864LL), 0, v135, v136, (int)v137, v138, v140);
  }
  *(_DWORD *)(*v137 + 120) = (*(_DWORD *)(*v137 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(*v137 + 120) & 0xFC000000;
  v93 = (_DWORD *)*v137;
  if ( *v137 )
    ++v93[8];
  v94 = *(_DWORD *)(a3 + 8);
  v95 = *(_DWORD *)(a3 + 12);
  if ( v94 >= v95 )
  {
    v111 = 2 * v95;
    v112 = sub_186B270(8 * v111);
    v94 = *(_DWORD *)(a3 + 8);
    v113 = *(_QWORD **)a3;
    v96 = (_DWORD **)v112;
    if ( v94 )
    {
      if ( v94 - 1 <= 2 || (_QWORD *)v112 == v113 + 1 )
      {
        for ( k = 0; k != v94; ++k )
          v96[k] = (_DWORD *)v113[k];
      }
      else
      {
        v114 = 0;
        do
        {
          *(__m128i *)&v96[v114] = _mm_loadu_si128((const __m128i *)&v113[v114]);
          v114 += 2;
        }
        while ( 2LL * (v94 >> 1) != v114 );
        if ( (v94 & 1) != 0 )
          v96[v94 & 0xFFFFFFFE] = (_DWORD *)v113[v94 & 0xFFFFFFFE];
      }
    }
    if ( v113 != (_QWORD *)(a3 + 16) && v113 )
    {
      sub_186B220(v113);
      v94 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v96;
    *(_DWORD *)(a3 + 12) = v111;
  }
  else
  {
    v96 = *(_DWORD ***)a3;
  }
  v96[v94] = v93;
  *(_DWORD *)(a3 + 8) = v94 + 1;
  return sub_EE4A00(v143);
}

