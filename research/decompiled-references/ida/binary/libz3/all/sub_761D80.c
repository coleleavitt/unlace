__int64 __fastcall sub_761D80(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 result; // rax
  __int64 v22; // rax
  int *v23; // rax
  int v24; // r15d
  int v25; // r13d
  _QWORD *v26; // rcx
  __int64 v27; // r12
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rcx
  __int64 v38; // r12
  int v39; // eax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // r12
  char *v46; // rax
  int *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  unsigned int v50; // ecx
  size_t v51; // rsi
  __int64 v52; // rax
  _DWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r15
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  unsigned int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // r12
  int v64; // r10d
  __int64 v65; // rcx
  __int64 *v66; // r13
  int v67; // esi
  __int64 v68; // r10
  __int64 v69; // rdi
  __int64 *v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  unsigned int v74; // ecx
  size_t v75; // rsi
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  unsigned __int64 v79; // rax
  __int64 v80; // r9
  unsigned int v81; // r12d
  unsigned int v82; // ecx
  unsigned int *v83; // rax
  __int64 v84; // rcx
  unsigned int v85; // r12d
  unsigned int v86; // ecx
  unsigned int *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rdi
  int *v90; // rdi
  __int64 v91; // rax
  int v92; // r8d
  __m128i *v93; // rdx
  __m128i *v94; // rax
  const __m128i *v95; // r14
  __m128i *v96; // r9
  __int64 v97; // rdx
  __m128i *v98; // rsi
  __int64 v99; // rdi
  __m128i *v100; // rdx
  __int64 v101; // rax
  _QWORD *v102; // rdx
  char **exception; // r15
  char **v104; // r15
  char **v105; // r15
  char **v106; // r15
  int v107; // [rsp-8h] [rbp-128h]
  int v108; // [rsp+0h] [rbp-120h]
  int v109; // [rsp+0h] [rbp-120h]
  int v110; // [rsp+8h] [rbp-118h]
  int v111; // [rsp+8h] [rbp-118h]
  int v112[2]; // [rsp+10h] [rbp-110h]
  int v113; // [rsp+10h] [rbp-110h]
  int v114; // [rsp+10h] [rbp-110h]
  int v115; // [rsp+18h] [rbp-108h]
  int *v116; // [rsp+18h] [rbp-108h]
  int v117; // [rsp+18h] [rbp-108h]
  __int64 v118; // [rsp+20h] [rbp-100h]
  int v119; // [rsp+20h] [rbp-100h]
  int v120; // [rsp+20h] [rbp-100h]
  size_t v121; // [rsp+20h] [rbp-100h]
  char v122; // [rsp+28h] [rbp-F8h]
  int v123; // [rsp+28h] [rbp-F8h]
  char v124; // [rsp+28h] [rbp-F8h]
  size_t v125; // [rsp+28h] [rbp-F8h]
  int v126; // [rsp+28h] [rbp-F8h]
  __int64 *v127; // [rsp+30h] [rbp-F0h]
  int v128; // [rsp+30h] [rbp-F0h]
  int v129[2]; // [rsp+38h] [rbp-E8h]
  int v130; // [rsp+38h] [rbp-E8h]
  __int64 v131; // [rsp+40h] [rbp-E0h] BYREF
  void *v132; // [rsp+48h] [rbp-D8h]
  int v133; // [rsp+50h] [rbp-D0h]
  int v134; // [rsp+58h] [rbp-C8h]
  void *ptr; // [rsp+60h] [rbp-C0h]
  __int64 v136; // [rsp+68h] [rbp-B8h]
  int v137[14]; // [rsp+70h] [rbp-B0h] BYREF
  void *v138; // [rsp+A8h] [rbp-78h]
  int v139; // [rsp+B0h] [rbp-70h]
  __int64 v140; // [rsp+B8h] [rbp-68h]

  v8 = *((unsigned int *)a1 + 10);
  v9 = (__int64 *)a1[4];
  v127 = a3;
  v10 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)v129 = a2;
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    v15 = &v9[(unsigned __int64)v13 / 8];
    do
    {
      v16 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
        {
LABEL_10:
          v17 = v15[1];
          if ( v17 )
            goto LABEL_11;
          goto LABEL_12;
        }
      }
      else if ( !v16 )
      {
        *(_QWORD *)v129 = a2;
        goto LABEL_25;
      }
      v15 += 2;
    }
    while ( v12 != v15 );
    *(_QWORD *)v129 = a2;
  }
  for ( ; v14 != v9; v9 += 2 )
  {
    v22 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v22 + 12) == v10 && *(_QWORD *)v129 == v22 )
      {
        v15 = v9;
        goto LABEL_10;
      }
    }
    else if ( !v22 )
    {
      break;
    }
  }
LABEL_25:
  v23 = *(int **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 40LL) + 24LL) + 8LL);
  if ( *((_BYTE *)v23 + 8) )
    sub_DBF6E(0);
  v24 = *v23;
  if ( *v23 == 1 )
  {
    v17 = sub_15DC610(
            *a1,
            v129[0],
            0,
            0,
            (int)v14,
            a6,
            v108,
            v110,
            v112[0],
            v115,
            v118,
            v122,
            (int)v127,
            v129[0],
            v131,
            v132);
    if ( v17 )
LABEL_11:
      ++*(_DWORD *)(v17 + 8);
LABEL_12:
    v18 = *v127;
    if ( *v127 )
    {
      v19 = v127[1];
      v20 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v20 )
        sub_15D7BC0(v19, v18);
    }
    result = (__int64)v127;
    *v127 = v17;
  }
  else
  {
    v123 = sub_1674700(a1 + 1, 1);
    v116 = v137;
    ptr = v137;
    v136 = 0x1000000000LL;
    if ( v24 )
    {
      v25 = 0;
      while ( 1 )
      {
        v38 = *a1;
        sub_180C5A0(&v131, 0);
        v39 = sub_15E3D10(
                v38,
                (int)&v131,
                (int)&qword_18D6CD0,
                0,
                0,
                v123,
                1,
                v107,
                v108,
                v110,
                v112[0],
                (int)v116,
                v118,
                v123,
                (char)v127,
                v129[0],
                v131,
                (int)v132,
                v133,
                v134,
                (int)ptr,
                v136,
                v137[0],
                v137[2],
                v137[4],
                v137[6],
                v137[8],
                v137[10],
                v137[12],
                v138,
                v139,
                v140);
        v42 = sub_15DC610(v38, v39, 0, 0, v40, v41, v109, v111, v113, v117, v119, v124, v128, v130, v131, v132);
        v43 = v136;
        v44 = v42;
        if ( (unsigned int)v136 < HIDWORD(v136) )
        {
          v26 = ptr;
        }
        else
        {
          v118 = v42;
          v45 = (unsigned int)(2 * HIDWORD(v136));
          v46 = (char *)sub_186B270(8 * v45);
          v43 = v136;
          v47 = (int *)ptr;
          v26 = v46;
          v44 = v118;
          if ( (_DWORD)v136 )
          {
            if ( (unsigned int)(v136 - 1) <= 2 || v46 == (char *)ptr + 8 )
            {
              v79 = 0;
              v80 = 8LL * (unsigned int)v136;
              do
              {
                v26[v79 / 8] = *(_QWORD *)&v47[v79 / 4];
                v79 += 8LL;
              }
              while ( v79 != v80 );
            }
            else
            {
              v48 = 0;
              v49 = 16LL * ((unsigned int)v136 >> 1);
              do
              {
                *(__m128i *)&v26[v48 / 8] = _mm_loadu_si128((const __m128i *)&v47[v48 / 4]);
                v48 += 16LL;
              }
              while ( v48 != v49 );
              if ( (v43 & 1) != 0 )
                v26[v43 & 0xFFFFFFFE] = *(_QWORD *)&v47[2 * (v43 & 0xFFFFFFFE)];
            }
          }
          if ( v47 != v116 && v47 )
          {
            *(_QWORD *)v112 = v26;
            sub_186B220(v47);
            v43 = v136;
            v26 = *(_QWORD **)v112;
          }
          ptr = v26;
          HIDWORD(v136) = v45;
        }
        v27 = *(_QWORD *)(v44 + 16);
        v26[v43] = v44;
        LODWORD(v136) = v43 + 1;
        v28 = (_QWORD *)a1[7];
        if ( v28 )
        {
          v29 = *((_DWORD *)v28 - 1);
          if ( v29 == *((_DWORD *)v28 - 2) )
          {
            v74 = (3 * v29 + 1) >> 1;
            v75 = 8 * v74 + 8;
            if ( 8 * v29 + 8 >= (unsigned int)v75 || v29 >= v74 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_75C2B0(&v131, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v131);
              sub_233E40((__int64)&v131);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v118) = (3 * v29 + 1) >> 1;
            v76 = sub_186B300(v28 - 1, v75);
            v28 = (_QWORD *)(v76 + 8);
            a1[7] = v76 + 8;
            *(_DWORD *)v76 = v118;
            LODWORD(v76) = *(_DWORD *)(v76 + 4);
            v32 = &v28[(unsigned int)v76];
            v31 = v76 + 1;
          }
          else
          {
            v30 = v29;
            v31 = v29 + 1;
            v32 = &v28[v30];
          }
        }
        else
        {
          v78 = (_QWORD *)sub_186B270(0x18u);
          v28 = v78 + 1;
          *v78 = 2;
          v31 = 1;
          a1[7] = (__int64)v28;
          v32 = v28;
        }
        *v32 = v27;
        *((_DWORD *)v28 - 1) = v31;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v33 = (_QWORD *)a1[9];
        if ( !v33 )
          break;
        v34 = *((_DWORD *)v33 - 1);
        if ( v34 == *((_DWORD *)v33 - 2) )
        {
          v50 = (3 * v34 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * v34 + 8 >= (unsigned int)v51 || v34 >= v50 )
          {
            v106 = (char **)__cxa_allocate_exception(0x28u);
            sub_75C2B0(&v131, "Overflow encountered when expanding vector");
            *v106 = (char *)off_1C63128;
            sub_2333C0(v106 + 1, &v131);
            sub_233E40((__int64)&v131);
            __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v118) = (3 * v34 + 1) >> 1;
          v52 = sub_186B300(v33 - 1, v51);
          v53 = (_DWORD *)(v52 + 8);
          ++v25;
          a1[9] = v52 + 8;
          *(_DWORD *)v52 = v118;
          LODWORD(v52) = *(_DWORD *)(v52 + 4);
          *(_QWORD *)&v53[2 * (unsigned int)v52] = v27;
          *(v53 - 1) = v52 + 1;
          if ( v24 == v25 )
            goto LABEL_54;
        }
        else
        {
          v35 = v34;
          v36 = v34 + 1;
          v37 = &v33[v35];
LABEL_38:
          ++v25;
          *v37 = v27;
          *((_DWORD *)v33 - 1) = v36;
          if ( v24 == v25 )
            goto LABEL_54;
        }
      }
      v77 = (_QWORD *)sub_186B270(0x18u);
      v33 = v77 + 1;
      *v77 = 2;
      v36 = 1;
      a1[9] = (__int64)v33;
      v37 = v33;
      goto LABEL_38;
    }
LABEL_54:
    v54 = sub_15E1AF0(a1[2]);
    v55 = v54;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    v56 = (_QWORD *)a1[9];
    if ( v56 )
    {
      v57 = *((_DWORD *)v56 - 1);
      if ( v57 == *((_DWORD *)v56 - 2) )
      {
        v81 = (3 * v57 + 1) >> 1;
        v82 = 8 * v81 + 8;
        if ( 8 * v57 + 8 >= v82 || v57 >= v81 )
        {
          v104 = (char **)__cxa_allocate_exception(0x28u);
          sub_75C2B0(&v131, "Overflow encountered when expanding vector");
          *v104 = (char *)off_1C63128;
          sub_2333C0(v104 + 1, &v131);
          sub_233E40((__int64)&v131);
          __cxa_throw(v104, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v83 = (unsigned int *)sub_186B300(v56 - 1, v82);
        v84 = v83[1];
        v56 = v83 + 2;
        *v83 = v81;
        a1[9] = (__int64)(v83 + 2);
        LODWORD(v83) = v84;
        v60 = &v56[v84];
        v59 = (_DWORD)v83 + 1;
      }
      else
      {
        v58 = v57;
        v59 = v57 + 1;
        v60 = &v56[v58];
      }
    }
    else
    {
      v102 = (_QWORD *)sub_186B270(0x18u);
      *v102 = 2;
      v59 = 1;
      v56 = v102 + 1;
      a1[9] = (__int64)v56;
      v60 = v56;
    }
    *v60 = v55;
    *((_DWORD *)v56 - 1) = v59;
    ++*(_DWORD *)(*(_QWORD *)v129 + 8LL);
    v61 = *((_DWORD *)v56 - 1);
    if ( v61 == *((_DWORD *)v56 - 2) )
    {
      v85 = (3 * v61 + 1) >> 1;
      v86 = 8 * v85 + 8;
      if ( 8 * v61 + 8 >= v86 || v61 >= v85 )
      {
        v105 = (char **)__cxa_allocate_exception(0x28u);
        sub_75C2B0(&v131, "Overflow encountered when expanding vector");
        *v105 = (char *)off_1C63128;
        sub_2333C0(v105 + 1, &v131);
        sub_233E40((__int64)&v131);
        __cxa_throw(v105, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v87 = (unsigned int *)sub_186B300(v56 - 1, v86);
      v56 = v87 + 2;
      *v87 = v85;
      v61 = v87[1];
      a1[9] = (__int64)v56;
    }
    v56[v61] = *(_QWORD *)v129;
    *((_DWORD *)v56 - 1) = v61 + 1;
    v62 = *((_DWORD *)a1 + 10);
    if ( 3 * v62 < 4 * (*((_DWORD *)a1 + 11) + *((_DWORD *)a1 + 12)) )
    {
      v120 = 2 * v62;
      v125 = 32LL * v62;
      v91 = sub_186B270(v125);
      v65 = v125;
      v92 = v120;
      v63 = v91;
      v93 = (__m128i *)v91;
      v94 = (__m128i *)(v125 + v91);
      if ( v120 )
      {
        if ( (((_BYTE)v94 - (_BYTE)v63) & 0x10) == 0
          || (v93 = (__m128i *)(v63 + 16), *(_OWORD *)v63 = 0, (__m128i *)(v63 + 16) != v94) )
        {
          do
          {
            *v93 = 0;
            v93 += 2;
            v93[-1] = 0;
          }
          while ( v93 != v94 );
        }
      }
      v95 = (const __m128i *)a1[4];
      v64 = v120 - 1;
      v66 = (__int64 *)v94;
      v96 = (__m128i *)&v95[*((unsigned int *)a1 + 10)];
      if ( v95 != v96 )
      {
        do
        {
          if ( v95->m128i_i64[0] > 1uLL )
          {
            v97 = 16LL * (*(_DWORD *)(v95->m128i_i64[0] + 12) & (unsigned int)v64);
            v98 = (__m128i *)(v63 + v97);
            if ( v125 == v97 )
            {
LABEL_113:
              if ( (__m128i *)v63 == v98 )
              {
LABEL_132:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v99 = *(_QWORD *)v129;
              v100 = (__m128i *)v63;
              while ( v100->m128i_i64[0] )
              {
                if ( v98 == ++v100 )
                  goto LABEL_132;
              }
            }
            else
            {
              v99 = *(_QWORD *)v129;
              v100 = (__m128i *)(v63 + v97);
              while ( v100->m128i_i64[0] )
              {
                if ( v94 == ++v100 )
                  goto LABEL_113;
              }
            }
            *(_QWORD *)v129 = v99;
            *v100 = _mm_loadu_si128(v95);
          }
          ++v95;
        }
        while ( v96 != v95 );
        v96 = (__m128i *)a1[4];
      }
      if ( v96 )
      {
        v114 = v120;
        v121 = v125;
        v126 = v92 - 1;
        sub_186B220(v96);
        v92 = v114;
        v65 = v121;
        v64 = v126;
      }
      a1[4] = v63;
      *((_DWORD *)a1 + 10) = v92;
      *((_DWORD *)a1 + 12) = 0;
    }
    else
    {
      v63 = a1[4];
      v64 = v62 - 1;
      v65 = 16LL * v62;
      v66 = (__int64 *)(v63 + v65);
    }
    v67 = *(_DWORD *)(*(_QWORD *)v129 + 12LL);
    v68 = 16LL * (v67 & (unsigned int)v64);
    v69 = v63 + v68;
    if ( v68 == v65 )
    {
      v71 = nullptr;
LABEL_70:
      if ( v69 == v63 )
      {
LABEL_92:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v73 = *(_QWORD *)v63;
        if ( *(_QWORD *)v63 > 1u )
        {
          if ( *(_DWORD *)(v73 + 12) == v67 && *(_QWORD *)v129 == v73 )
          {
            *(_QWORD *)v63 = *(_QWORD *)v129;
            *(_QWORD *)(v63 + 8) = v55;
            goto LABEL_93;
          }
        }
        else
        {
          if ( !v73 )
          {
            v101 = *(_QWORD *)v129;
            if ( v71 )
              --*((_DWORD *)a1 + 12);
            else
              v71 = (_QWORD *)v63;
            goto LABEL_125;
          }
          v71 = (_QWORD *)v63;
        }
        v63 += 16;
        if ( v69 == v63 )
          goto LABEL_92;
      }
    }
    v70 = (__int64 *)(v63 + v68);
    v71 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v72 = *v70;
        if ( (unsigned __int64)*v70 <= 1 )
          break;
        if ( *(_DWORD *)(v72 + 12) == v67 && *(_QWORD *)v129 == v72 )
        {
          *v70 = *(_QWORD *)v129;
          v70[1] = v55;
          goto LABEL_93;
        }
        v70 += 2;
        if ( v70 == v66 )
          goto LABEL_70;
      }
      if ( !v72 )
        break;
      v71 = v70;
      v70 += 2;
      if ( v70 == v66 )
        goto LABEL_70;
    }
    if ( v71 )
      --*((_DWORD *)a1 + 12);
    else
      v71 = v70;
    v101 = *(_QWORD *)v129;
LABEL_125:
    *v71 = v101;
    v71[1] = v55;
    ++*((_DWORD *)a1 + 11);
LABEL_93:
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v88 = *v127;
    if ( *v127 )
    {
      v89 = v127[1];
      v20 = (*(_DWORD *)(v88 + 8))-- == 1;
      if ( v20 )
        sub_15D7BC0(v89, v88);
    }
    result = (__int64)v127;
    v90 = (int *)ptr;
    *v127 = v55;
    if ( v90 )
    {
      result = (__int64)v116;
      if ( v90 != v116 )
        return sub_186B220(v90);
    }
  }
  return result;
}

