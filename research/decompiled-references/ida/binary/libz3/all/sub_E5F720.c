__int64 *__fastcall sub_E5F720(__int64 *a1, _QWORD *a2)
{
  char **v2; // r12
  __int64 v3; // rdx
  char **v4; // r12
  __int64 v5; // rdx
  char **exception; // r12
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  void (*v11)(); // rax
  _BYTE *v12; // rax
  __int64 *v13; // r13
  __int64 v14; // rbp
  _DWORD *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // r11d
  __m128i *v19; // rbx
  unsigned int v20; // r9d
  __int64 v21; // r8
  char *m128i_i8; // r12
  int v23; // ecx
  __int64 v24; // r9
  __m128i *v25; // rsi
  char *v26; // rax
  char *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rax
  _QWORD *(__fastcall *v31)(void **, __int64); // rax
  _DWORD *v32; // rdi
  void (__noreturn *v33)(); // rax
  void *v34; // rdi
  __int64 v35; // r8
  char *v36; // rbp
  char *v37; // r12
  __int64 v38; // r13
  _QWORD *v39; // rax
  __int64 *v40; // rdx
  __int64 *v41; // rbx
  int v42; // eax
  bool v43; // zf
  __int64 v44; // r13
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 *v49; // rcx
  char *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // edx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rax
  unsigned int v57; // ecx
  size_t v58; // rsi
  unsigned int *v59; // rax
  _DWORD *v60; // rdx
  __int64 *v61; // r12
  __int64 *v62; // rbp
  __int64 v63; // rsi
  void (__fastcall ***v64)(void *); // rbp
  void *v65; // rdi
  __int64 *v66; // rbp
  unsigned __int64 v67; // r12
  __int64 v68; // rsi
  __int64 *v69; // rbx
  unsigned __int64 v70; // rbp
  __int64 v71; // rsi
  __int64 v73; // r12
  __m128i *v74; // rax
  int v75; // r11d
  __m128i *v76; // rdx
  const __m128i *v77; // rcx
  __m128i *v78; // r10
  __int64 v79; // rax
  __m128i *v80; // rdx
  __m128i *v81; // rax
  __m128i v82; // xmm0
  unsigned int v83; // r10d
  __m128i *v84; // rbx
  unsigned int v85; // r11d
  __int64 v86; // r8
  char *v87; // r12
  int v88; // ecx
  __int64 v89; // r11
  __m128i *v90; // rsi
  char *v91; // rax
  char *v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rax
  _DWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // r8
  void *v98; // rdi
  __int64 v99; // r12
  __m128i *v100; // rax
  int v101; // r10d
  __m128i *v102; // rdx
  const __m128i *v103; // rcx
  __m128i *v104; // r9
  __int64 v105; // rax
  __m128i *v106; // rdx
  __m128i *v107; // rax
  _QWORD *v108; // rax
  __int64 *v109; // [rsp+8h] [rbp-E0h]
  unsigned int v110; // [rsp+8h] [rbp-E0h]
  unsigned int v111; // [rsp+8h] [rbp-E0h]
  size_t v113; // [rsp+18h] [rbp-D0h]
  unsigned int v114; // [rsp+18h] [rbp-D0h]
  size_t v115; // [rsp+18h] [rbp-D0h]
  unsigned int v116; // [rsp+18h] [rbp-D0h]
  int v117; // [rsp+20h] [rbp-C8h]
  size_t v118; // [rsp+20h] [rbp-C8h]
  int v119; // [rsp+20h] [rbp-C8h]
  size_t v120; // [rsp+20h] [rbp-C8h]
  int v121; // [rsp+30h] [rbp-B8h]
  int v122; // [rsp+30h] [rbp-B8h]
  void *v123; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v125; // [rsp+58h] [rbp-90h]
  __int64 v126; // [rsp+60h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v128; // [rsp+78h] [rbp-70h]
  int v129; // [rsp+80h] [rbp-68h]
  __int64 v130[11]; // [rsp+90h] [rbp-58h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 72LL))(a2);
  a1[1] = 0;
  *a1 = v9;
  v10 = v9;
  v124 = v9;
  v126 = v9;
  v125 = nullptr;
  sub_E5ED50((__int64)a2, (__int64)&v124);
  v11 = *(void (**)())(*a2 + 344LL);
  if ( v11 != nullsub_159 )
    ((void (__fastcall *)(_QWORD *, __int64 *))v11)(a2, &v124);
  v12 = (_BYTE *)sub_186B270(0x80u);
  v13 = v125;
  *(_QWORD *)v12 = 0;
  v12[8] = 0;
  *((_QWORD *)v12 + 2) = 0;
  v12[24] = 0;
  *((_QWORD *)v12 + 4) = 0;
  v12[40] = 0;
  *((_QWORD *)v12 + 6) = 0;
  v12[56] = 0;
  *((_QWORD *)v12 + 8) = 0;
  v12[72] = 0;
  *((_QWORD *)v12 + 10) = 0;
  v12[88] = 0;
  *((_QWORD *)v12 + 12) = 0;
  v12[104] = 0;
  *((_QWORD *)v12 + 14) = 0;
  v12[120] = 0;
  ptr = v12;
  v128 = 8;
  v129 = 0;
  if ( !v13 )
    goto LABEL_30;
  v109 = &v13[*((unsigned int *)v13 - 1)];
  if ( v13 == v109 )
    goto LABEL_30;
  do
  {
    v14 = *v13;
    if ( *(_WORD *)(*v13 + 4)
      || (v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL)) == nullptr
      || *v15
      || v15[1] != 8
      || *(_DWORD *)(v14 + 24) != 1 )
    {
LABEL_8:
      if ( !sub_E5E5B0(v10, v14) )
      {
        if ( *(_WORD *)(v14 + 4) )
          goto LABEL_29;
        v30 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
        if ( !v30 || *v30 || v30[1] != 8 || *(_DWORD *)(v14 + 24) != 1 || !sub_E5E5B0(v10, *(_QWORD *)(v14 + 32)) )
          goto LABEL_29;
      }
      v16 = (unsigned int)v128;
      v17 = HIDWORD(v128) + v129;
      ++*(_DWORD *)(v14 + 8);
      v18 = 2 * v16;
      if ( 3 * (int)v16 < (unsigned int)(4 * v17) )
      {
        v73 = v18;
        v117 = 2 * v16;
        v113 = 16LL * v18;
        v74 = (__m128i *)sub_186B270(v113);
        v75 = v117;
        v21 = v113;
        v19 = v74;
        v76 = &v74[v73];
        if ( v117 )
        {
          do
          {
            v74->m128i_i64[0] = 0;
            ++v74;
            v74[-1].m128i_i8[8] = 0;
          }
          while ( v74 != v76 );
        }
        v77 = (const __m128i *)ptr;
        v20 = v117 - 1;
        m128i_i8 = v19[v113 / 0x10].m128i_i8;
        v78 = (__m128i *)((char *)ptr + 16 * (unsigned int)v128);
        if ( ptr != v78 )
        {
          do
          {
            while ( v77->m128i_i64[0] <= 1uLL )
            {
              if ( v78 == ++v77 )
                goto LABEL_109;
            }
            v79 = 16LL * (*(_DWORD *)(v77->m128i_i64[0] + 12) & v20);
            v80 = &v19[(unsigned __int64)v79 / 0x10];
            if ( v113 == v79 )
            {
LABEL_113:
              if ( v19 == v80 )
              {
LABEL_136:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v81 = v19;
              while ( v81->m128i_i64[0] )
              {
                if ( v80 == ++v81 )
                  goto LABEL_136;
              }
            }
            else
            {
              v81 = &v19[(unsigned __int64)v79 / 0x10];
              while ( v81->m128i_i64[0] )
              {
                if ( m128i_i8 == (char *)++v81 )
                  goto LABEL_113;
              }
            }
            v82 = _mm_loadu_si128(v77++);
            *v81 = v82;
          }
          while ( v78 != v77 );
LABEL_109:
          v78 = (__m128i *)ptr;
        }
        if ( v78 )
        {
          v121 = v117;
          v118 = v113;
          v114 = v75 - 1;
          sub_186B220(v78);
          v20 = v114;
          v21 = v118;
          v75 = v121;
        }
        ptr = v19;
        LODWORD(v128) = v75;
        v129 = 0;
      }
      else
      {
        v19 = (__m128i *)ptr;
        v20 = v16 - 1;
        v21 = 16 * v16;
        m128i_i8 = (char *)ptr + v21;
      }
      v23 = *(_DWORD *)(v14 + 12);
      v24 = 16LL * (v23 & v20);
      v25 = &v19[(unsigned __int64)v24 / 0x10];
      if ( v24 != v21 )
      {
        v26 = v19[(unsigned __int64)v24 / 0x10].m128i_i8;
        v27 = nullptr;
        while ( 1 )
        {
          v28 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 > 1u )
          {
            if ( *(_DWORD *)(v28 + 12) == v23 && v28 == v14 )
            {
              *(_QWORD *)v26 = v14;
              v26[8] = 1;
              goto LABEL_29;
            }
          }
          else
          {
            if ( !v28 )
            {
              if ( v27 )
                goto LABEL_119;
              v27 = v26;
              goto LABEL_120;
            }
            v27 = v26;
          }
          v26 += 16;
          if ( v26 == m128i_i8 )
            goto LABEL_22;
        }
      }
      v27 = nullptr;
      while ( 1 )
      {
LABEL_22:
        if ( v25 == v19 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v29 = v19->m128i_i64[0];
        if ( v19->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v29 + 12) == v23 && v29 == v14 )
          {
            v19->m128i_i64[0] = v14;
            v19->m128i_i8[8] = 1;
            goto LABEL_29;
          }
        }
        else
        {
          if ( !v29 )
          {
            if ( v27 )
LABEL_119:
              --v129;
            else
              v27 = (char *)v19;
LABEL_120:
            *(_QWORD *)v27 = v14;
            v27[8] = 1;
            ++HIDWORD(v128);
            goto LABEL_29;
          }
          v27 = (char *)v19;
        }
        ++v19;
      }
    }
    v14 = *(_QWORD *)(v14 + 32);
    if ( sub_E5E5B0(v10, v14) )
    {
      if ( !v14 )
        goto LABEL_126;
    }
    else
    {
      if ( *(_WORD *)(v14 + 4) )
        goto LABEL_8;
      v95 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
      if ( !v95 || *v95 || v95[1] != 8 || *(_DWORD *)(v14 + 24) != 1 || !sub_E5E5B0(v10, *(_QWORD *)(v14 + 32)) )
        goto LABEL_8;
    }
    ++*(_DWORD *)(v14 + 8);
LABEL_126:
    v83 = 2 * v128;
    if ( 3 * (int)v128 < (unsigned int)(4 * (HIDWORD(v128) + v129)) )
    {
      v99 = v83;
      v119 = 2 * v128;
      v115 = 16LL * v83;
      v100 = (__m128i *)sub_186B270(v115);
      v101 = v119;
      v86 = v115;
      v84 = v100;
      v102 = &v100[v99];
      if ( v119 )
      {
        do
        {
          v100->m128i_i64[0] = 0;
          ++v100;
          v100[-1].m128i_i8[8] = 0;
        }
        while ( v100 != v102 );
      }
      v103 = (const __m128i *)ptr;
      v85 = v119 - 1;
      v87 = v84[v115 / 0x10].m128i_i8;
      v104 = (__m128i *)((char *)ptr + 16 * (unsigned int)v128);
      if ( ptr == v104 )
      {
        if ( !v104 )
        {
LABEL_173:
          ptr = v84;
          LODWORD(v128) = v101;
          v129 = 0;
          goto LABEL_128;
        }
      }
      else
      {
        do
        {
          while ( v103->m128i_i64[0] <= 1uLL )
          {
            if ( v104 == ++v103 )
              goto LABEL_181;
          }
          v105 = 16LL * (*(_DWORD *)(v103->m128i_i64[0] + 12) & v85);
          v106 = &v84[(unsigned __int64)v105 / 0x10];
          if ( v115 == v105 )
          {
LABEL_183:
            if ( v84 == v106 )
            {
LABEL_196:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v107 = v84;
            while ( v107->m128i_i64[0] )
            {
              if ( v106 == ++v107 )
                goto LABEL_196;
            }
          }
          else
          {
            v107 = &v84[(unsigned __int64)v105 / 0x10];
            while ( v107->m128i_i64[0] )
            {
              if ( v87 == (char *)++v107 )
                goto LABEL_183;
            }
          }
          *v107 = _mm_loadu_si128(v103++);
        }
        while ( v104 != v103 );
LABEL_181:
        v104 = (__m128i *)ptr;
        if ( !ptr )
          goto LABEL_173;
      }
      v122 = v119;
      v120 = v115;
      v116 = v101 - 1;
      sub_186B220(v104);
      v85 = v116;
      v86 = v120;
      v101 = v122;
      goto LABEL_173;
    }
    v84 = (__m128i *)ptr;
    v85 = v128 - 1;
    v86 = 16LL * (unsigned int)v128;
    v87 = (char *)ptr + v86;
LABEL_128:
    v88 = *(_DWORD *)(v14 + 12);
    v89 = 16LL * (v88 & v85);
    v90 = &v84[(unsigned __int64)v89 / 0x10];
    if ( v89 != v86 )
    {
      v91 = v84[(unsigned __int64)v89 / 0x10].m128i_i8;
      v92 = nullptr;
      while ( 1 )
      {
        v93 = *(_QWORD *)v91;
        if ( *(_QWORD *)v91 > 1u )
        {
          if ( *(_DWORD *)(v93 + 12) == v88 && v14 == v93 )
          {
            *(_QWORD *)v91 = v14;
            v91[8] = 0;
            goto LABEL_29;
          }
        }
        else
        {
          if ( !v93 )
          {
            if ( v92 )
              goto LABEL_192;
            v92 = v91;
            goto LABEL_193;
          }
          v92 = v91;
        }
        v91 += 16;
        if ( v91 == v87 )
          goto LABEL_142;
      }
    }
    v92 = nullptr;
    while ( 1 )
    {
LABEL_142:
      if ( v90 == v84 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v94 = v84->m128i_i64[0];
      if ( v84->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v94 + 12) == v88 && v14 == v94 )
      {
        v84->m128i_i64[0] = v14;
        v84->m128i_i8[8] = 0;
        goto LABEL_29;
      }
LABEL_141:
      ++v84;
    }
    if ( v94 )
    {
      v92 = (char *)v84;
      goto LABEL_141;
    }
    if ( v92 )
LABEL_192:
      --v129;
    else
      v92 = (char *)v84;
LABEL_193:
    *(_QWORD *)v92 = v14;
    v92[8] = 0;
    ++HIDWORD(v128);
LABEL_29:
    ++v13;
  }
  while ( v109 != v13 );
LABEL_30:
  v31 = *(_QWORD *(__fastcall **)(void **, __int64))(*a2 + 336LL);
  if ( (char *)v31 != (char *)sub_2B1E10 )
  {
    v31(&v123, (__int64)a2);
    v32 = v123;
    if ( !v123 )
      goto LABEL_161;
LABEL_33:
    v33 = *(void (__noreturn **)())(*(_QWORD *)v32 + 80LL);
    if ( v33 == sub_37D840 )
    {
      sub_1872CE0("");
      sub_1873130(114, 94);
    }
    ((void (__fastcall *)(_DWORD *, void **))v33)(v32, &ptr);
    v34 = ptr;
    v35 = 16LL * (unsigned int)v128;
    v36 = (char *)ptr + v35;
    if ( ptr != (char *)ptr + v35 )
      goto LABEL_36;
    goto LABEL_201;
  }
  v32 = (_DWORD *)a2[7];
  v123 = v32;
  if ( v32 )
  {
    ++v32[2];
    goto LABEL_33;
  }
LABEL_161:
  v34 = ptr;
  v97 = 16LL * (unsigned int)v128;
  v36 = (char *)ptr + v97;
  if ( ptr == (char *)ptr + v97 )
  {
LABEL_162:
    if ( v34 )
      sub_186B220(v34);
    goto LABEL_84;
  }
LABEL_36:
  v37 = (char *)v34;
  while ( *(_QWORD *)v37 <= 1u )
  {
    v37 += 16;
    if ( v37 == v36 )
      goto LABEL_201;
  }
  if ( v37 == v36 )
  {
LABEL_201:
    v64 = (void (__fastcall ***)(void *))v123;
    if ( v123 )
    {
      v41 = nullptr;
      goto LABEL_73;
    }
    goto LABEL_162;
  }
  v38 = *(_QWORD *)v37;
  if ( *(_QWORD *)v37 )
    ++*(_DWORD *)(v38 + 8);
  v39 = (_QWORD *)sub_186B270(0x18u);
  v40 = v39 + 1;
  v41 = v39 + 1;
  *v39 = 2;
  v42 = 1;
  while ( 1 )
  {
    v43 = v37[8] == 0;
    *v40 = v38;
    *((_DWORD *)v41 - 1) = v42;
    v44 = *(_QWORD *)v37;
    if ( v43 )
      break;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    v45 = (_QWORD *)a1[1];
    if ( !v45 )
    {
      v96 = (_QWORD *)sub_186B270(0x18u);
      v45 = v96 + 1;
      a1[1] = (__int64)(v96 + 1);
      v49 = v96 + 1;
      *v96 = 2;
      v48 = 1;
      goto LABEL_49;
    }
    v46 = *((_DWORD *)v45 - 1);
    if ( v46 != *((_DWORD *)v45 - 2) )
      goto LABEL_48;
    v57 = (3 * v46 + 1) >> 1;
    v58 = 8 * v57 + 8;
    if ( 8 * v46 + 8 >= (unsigned int)v58 || v46 >= v57 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_182962(v130, "Overflow encountered when expanding vector", v7);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v130);
      sub_233E40((__int64)v130);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
LABEL_65:
    v111 = v57;
    v59 = (unsigned int *)sub_186B300(v45 - 1, v58);
    v60 = v59 + 2;
    a1[1] = (__int64)(v59 + 2);
    *v59 = v111;
    LODWORD(v59) = v59[1];
    *(_QWORD *)&v60[2 * (unsigned int)v59] = v44;
    *(v60 - 1) = (_DWORD)v59 + 1;
    v50 = v37 + 16;
    if ( v37 + 16 == v36 )
      goto LABEL_66;
LABEL_52:
    while ( 1 )
    {
      v38 = *(_QWORD *)v50;
      v37 = v50;
      if ( *(_QWORD *)v50 > 1u )
        break;
      v50 += 16;
      if ( v36 == v50 )
        goto LABEL_66;
    }
    if ( v50 == v36 )
      goto LABEL_66;
    ++*(_DWORD *)(v38 + 8);
    v51 = *((_DWORD *)v41 - 1);
    if ( v51 == *((_DWORD *)v41 - 2) )
    {
      v53 = (3 * v51 + 1) >> 1;
      v54 = 8 * v53 + 8;
      if ( 8 * v51 + 8 >= (unsigned int)v54 || v51 >= v53 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_182962(v130, "Overflow encountered when expanding vector", v3);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v130);
        sub_233E40((__int64)v130);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v110 = (3 * v51 + 1) >> 1;
      v55 = (unsigned int *)sub_186B300(v41 - 1, v54);
      v41 = (__int64 *)(v55 + 2);
      *v55 = v110;
      LODWORD(v55) = v55[1];
      v40 = &v41[(unsigned int)v55];
      v42 = (_DWORD)v55 + 1;
    }
    else
    {
      v52 = v51;
      v42 = v51 + 1;
      v40 = &v41[v52];
    }
  }
  v56 = sub_15E1A70(v10);
  v44 = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v45 = (_QWORD *)a1[1];
  if ( v45 )
  {
    v46 = *((_DWORD *)v45 - 1);
    if ( v46 != *((_DWORD *)v45 - 2) )
    {
LABEL_48:
      v47 = v46;
      v48 = v46 + 1;
      v49 = &v45[v47];
      goto LABEL_49;
    }
    v57 = (3 * v46 + 1) >> 1;
    v58 = 8 * v57 + 8;
    if ( 8 * v46 + 8 >= (unsigned int)v58 || v46 >= v57 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_182962(v130, "Overflow encountered when expanding vector", v5);
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v130);
      sub_233E40((__int64)v130);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_65;
  }
  v108 = (_QWORD *)sub_186B270(0x18u);
  v45 = v108 + 1;
  *v108 = 2;
  v49 = v45;
  v48 = 1;
  a1[1] = (__int64)v45;
LABEL_49:
  *v49 = v44;
  *((_DWORD *)v45 - 1) = v48;
  v50 = v37 + 16;
  if ( v37 + 16 != v36 )
    goto LABEL_52;
LABEL_66:
  v61 = &v41[*((unsigned int *)v41 - 1)];
  if ( v61 == v41 )
  {
    v64 = (void (__fastcall ***)(void *))v123;
    if ( v123 )
      goto LABEL_73;
    v98 = ptr;
    if ( !ptr )
    {
LABEL_83:
      sub_186B220(v41 - 1);
      goto LABEL_84;
    }
LABEL_165:
    sub_186B220(v98);
    goto LABEL_77;
  }
  v62 = v41;
  do
  {
    while ( 1 )
    {
      v63 = *v62;
      if ( *v62 )
      {
        v43 = (*(_DWORD *)(v63 + 8))-- == 1;
        if ( v43 )
          break;
      }
      if ( v61 == ++v62 )
        goto LABEL_72;
    }
    sub_15D7BC0(v10, v63);
    ++v62;
  }
  while ( v61 != v62 );
LABEL_72:
  v64 = (void (__fastcall ***)(void *))v123;
  if ( !v123 )
  {
    v98 = ptr;
    if ( !ptr )
      goto LABEL_77;
    goto LABEL_165;
  }
LABEL_73:
  v43 = (*((_DWORD *)v64 + 2))-- == 1;
  if ( v43 )
  {
    (**v64)(v64);
    sub_186B220(v64);
    v65 = ptr;
    if ( ptr )
LABEL_75:
      sub_186B220(v65);
  }
  else
  {
    v65 = ptr;
    if ( ptr )
      goto LABEL_75;
  }
  if ( v41 )
  {
LABEL_77:
    v66 = v41;
    v67 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
    if ( (unsigned __int64)v41 < v67 )
    {
      do
      {
        while ( 1 )
        {
          v68 = *v66;
          if ( *v66 )
          {
            v43 = (*(_DWORD *)(v68 + 8))-- == 1;
            if ( v43 )
              break;
          }
          if ( (unsigned __int64)++v66 >= v67 )
            goto LABEL_83;
        }
        ++v66;
        sub_15D7BC0(v10, v68);
      }
      while ( (unsigned __int64)v66 < v67 );
    }
    goto LABEL_83;
  }
LABEL_84:
  v69 = v125;
  if ( v125 )
  {
    v70 = (unsigned __int64)&v125[*((unsigned int *)v125 - 1)];
    if ( (unsigned __int64)v125 >= v70 )
      goto LABEL_92;
    do
    {
      while ( 1 )
      {
        v71 = *v69;
        if ( *v69 )
        {
          v43 = (*(_DWORD *)(v71 + 8))-- == 1;
          if ( v43 )
            break;
        }
        if ( (unsigned __int64)++v69 >= v70 )
          goto LABEL_91;
      }
      sub_15D7BC0(v124, v71);
      ++v69;
    }
    while ( (unsigned __int64)v69 < v70 );
LABEL_91:
    v69 = v125;
    if ( v125 )
LABEL_92:
      sub_186B220(v69 - 1);
  }
  return a1;
}

