__m128i *__fastcall sub_D26480(const __m128i *a1, __int64 a2, unsigned int *a3)
{
  char **v3; // rbp
  char **exception; // r12
  void *v7; // rcx
  __m128i *v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rbp
  int *v18; // rcx
  _QWORD *v19; // rax
  __m128 *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdi
  __m128 v23; // xmm0
  _QWORD *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rsi
  __int64 *v31; // r12
  int v32; // edi
  _QWORD *v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // r9
  _QWORD *v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r8
  _QWORD *j; // rax
  _QWORD *v41; // rbp
  unsigned __int64 v42; // r14
  __int64 *v43; // rbx
  __int64 v44; // rsi
  bool v45; // zf
  unsigned int v46; // r14d
  __int64 v47; // rdx
  int v48; // eax
  __int64 *v49; // rdx
  __int64 v50; // rsi
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // r15
  unsigned int v54; // eax
  unsigned int v55; // ebx
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // r8d
  size_t v60; // rdi
  int *v61; // r9
  int v62; // r8d
  _QWORD *v63; // r12
  __int64 v64; // rdi
  _DWORD *v65; // rdx
  _QWORD *v66; // rsi
  _QWORD *i; // rax
  __int64 v68; // r11
  __int64 v69; // r11
  __int64 v70; // r11
  __int64 *v71; // rbx
  __int64 *v72; // rax
  int *v73; // r12
  __int64 *v74; // rbp
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __m128i *v79; // rdi
  __int64 v80; // rbx
  char *v81; // rax
  char *v82; // rdi
  unsigned __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  void *v91; // r13
  __int64 *v92; // rbx
  unsigned __int64 v93; // rbp
  __int64 v94; // rsi
  __int64 v96; // rsi
  __int64 v97; // r15
  __int64 v98; // rcx
  int v99; // eax
  char *v100; // rdx
  char *v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // r8
  _QWORD *v104; // rax
  __int64 v105; // rsi
  __int64 v106; // r8
  unsigned __int64 v107; // rax
  _QWORD *v108; // [rsp+0h] [rbp-1D8h] BYREF
  int v109[2]; // [rsp+8h] [rbp-1D0h]
  __m128i *v110; // [rsp+10h] [rbp-1C8h]
  int *v111; // [rsp+18h] [rbp-1C0h]
  _QWORD *v112; // [rsp+20h] [rbp-1B8h]
  int *v113; // [rsp+28h] [rbp-1B0h]
  __int64 v114; // [rsp+30h] [rbp-1A8h]
  char *v115; // [rsp+38h] [rbp-1A0h]
  char *v116; // [rsp+40h] [rbp-198h]
  void *v117; // [rsp+48h] [rbp-190h]
  char *v118; // [rsp+50h] [rbp-188h]
  __int64 v119; // [rsp+58h] [rbp-180h]
  __int64 v120[4]; // [rsp+60h] [rbp-178h] BYREF
  void *v121; // [rsp+80h] [rbp-158h]
  int v122[2]; // [rsp+88h] [rbp-150h]
  _BYTE v123[128]; // [rsp+90h] [rbp-148h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h]
  __int64 v125; // [rsp+118h] [rbp-C0h]
  _BYTE v126[184]; // [rsp+120h] [rbp-B8h] BYREF

  v7 = (void *)a1[2].m128i_i64[0];
  v119 = a2;
  v118 = v123;
  v121 = v123;
  v117 = v7;
  v116 = (char *)a3;
  *(_QWORD *)v122 = 0x1000000000LL;
  v115 = v126;
  ptr = v126;
  v125 = 0x1000000000LL;
  v8 = (__m128i *)sub_186B270(0x50u);
  v8[1].m128i_i8[8] = 1;
  v9 = _mm_loadl_epi64(a1 + 2);
  v8->m128i_i32[2] = 0;
  v8[1].m128i_i64[0] = 0;
  v110 = v8;
  strcpy(&v8[3].m128i_i8[8], "reduce_args");
  v8->m128i_i64[0] = (__int64)&off_1C60CE8;
  v10 = a3[2];
  v8[3].m128i_i64[0] = 11;
  v8[4].m128i_i64[1] = 0;
  v8[2] = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&v8[3].m128i_u64[1]);
  v11 = *(_QWORD **)a3;
  v12 = *(_QWORD *)a3 + 16 * v10;
  v108 = v11;
  v112 = (_QWORD *)v12;
  if ( (_QWORD *)v12 == v11 )
    goto LABEL_167;
  v13 = v11;
  while ( *v13 <= 1u )
  {
    v13 += 2;
    if ( (_QWORD *)v12 == v13 )
      goto LABEL_30;
  }
  if ( v112 != v13 )
  {
    do
    {
      v14 = v13[1];
      v15 = *(_QWORD **)(v14 + 16);
      v16 = &v15[3 * *(unsigned int *)(v14 + 24)];
      if ( v15 != v16 )
      {
        while ( *((_DWORD *)v15 + 1) != 2 )
        {
          v15 += 3;
          if ( v16 == v15 )
            goto LABEL_24;
        }
        if ( v16 != v15 )
        {
          v17 = v15[2];
          v18 = (int *)v110[4].m128i_i64[1];
          v108 = (_QWORD *)v110[2].m128i_i64[0];
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
          if ( !v18 )
          {
            v19 = (_QWORD *)sub_186B270(0x58u);
            *v19 = 2;
            v18 = (int *)(v19 + 1);
            v20 = (__m128 *)(v19 + 1);
            v110[4].m128i_i64[1] = (__int64)(v19 + 1);
            v21 = 1;
            goto LABEL_15;
          }
          while ( 1 )
          {
            v25 = *(v18 - 1);
            if ( v25 == *(v18 - 2) )
            {
              v59 = (3 * v25 + 1) >> 1;
              v60 = 40 * v59 + 8;
              if ( 40 * v25 + 8 >= (unsigned int)v60 || v25 >= v59 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_D240F0(v120, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v120);
                sub_233E40((__int64)v120);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v109[0] = (3 * v25 + 1) >> 1;
              v61 = (int *)sub_186B270(v60);
              v62 = v109[0];
              v18 = v61 + 2;
              v63 = (_QWORD *)v110[4].m128i_i64[1];
              if ( v63 )
              {
                v64 = *((unsigned int *)v63 - 1);
                v65 = v61 + 2;
                v61[1] = v64;
                v66 = &v63[5 * v64];
                for ( i = v63; v66 != i; *(v65 - 2) = *((_DWORD *)i - 2) )
                {
                  v68 = i[1];
                  i += 5;
                  v65 += 10;
                  *((_QWORD *)v65 - 4) = v68;
                  v69 = *(i - 5);
                  *(i - 5) = 0;
                  *((_QWORD *)v65 - 5) = v69;
                  *((_QWORD *)v65 - 2) = *(i - 2);
                  v70 = *(i - 3);
                  *(i - 3) = 0;
                  *((_QWORD *)v65 - 3) = v70;
                }
                if ( (_DWORD)v64 )
                {
                  *(_QWORD *)v109 = v15;
                  v71 = v63;
                  v72 = &v63[5 * v64];
                  v114 = v17;
                  v73 = v61 + 2;
                  LODWORD(v111) = v62;
                  v74 = v72;
                  v113 = v61;
                  do
                  {
                    while ( 1 )
                    {
                      v77 = v71[2];
                      if ( v77 )
                      {
                        v78 = v71[3];
                        v45 = (*(_DWORD *)(v77 + 8))-- == 1;
                        if ( v45 )
                          sub_15D7BC0(v78, v77);
                      }
                      v75 = *v71;
                      if ( *v71 )
                      {
                        v76 = v71[1];
                        v45 = (*(_DWORD *)(v75 + 8))-- == 1;
                        if ( v45 )
                          break;
                      }
                      v71 += 5;
                      if ( v71 == v74 )
                        goto LABEL_81;
                    }
                    sub_15D7BC0(v76, v75);
                    v71 += 5;
                  }
                  while ( v71 != v74 );
LABEL_81:
                  v18 = v73;
                  v15 = *(_QWORD **)v109;
                  v62 = (int)v111;
                  v61 = v113;
                  v63 = (_QWORD *)v110[4].m128i_i64[1];
                }
                v113 = v18;
                v111 = v61;
                v109[0] = v62;
                sub_186B220(v63 - 1);
                v61 = v111;
                v18 = v113;
                v62 = v109[0];
                v20 = (__m128 *)&v113[10 * v111[1]];
                v21 = v111[1] + 1;
              }
              else
              {
                v61[1] = 0;
                v20 = (__m128 *)(v61 + 2);
                v21 = 1;
              }
              v79 = v110;
              *v61 = v62;
              v79[4].m128i_i64[1] = (__int64)v18;
            }
            else
            {
              v26 = v25;
              v21 = v25 + 1;
              v20 = (__m128 *)&v18[10 * v26];
            }
LABEL_15:
            v22 = v108;
            v20[1].m128_u64[0] = 0;
            v23 = _mm_loadh_ps((const double *)&v108);
            v20[2].m128_i32[0] = 0;
            v20[1].m128_u64[1] = (unsigned __int64)v22;
            *v20 = v23;
            *(v18 - 1) = v21;
            v24 = v15 + 3;
            if ( v16 == v15 + 3 )
              break;
            while ( 1 )
            {
              v15 = v24;
              if ( *((_DWORD *)v24 + 1) == 2 )
                break;
              v24 += 3;
              if ( v16 == v24 )
                goto LABEL_24;
            }
            if ( v16 == v24 )
              break;
            v17 = v24[2];
            v108 = (_QWORD *)v110[2].m128i_i64[0];
            if ( v17 )
              ++*(_DWORD *)(v17 + 8);
          }
        }
      }
LABEL_24:
      v27 = v13 + 2;
      if ( v112 == v13 + 2 )
        break;
      while ( 1 )
      {
        v13 = v27;
        if ( *v27 > 1u )
          break;
        v27 += 2;
        if ( v112 == v27 )
          goto LABEL_29;
      }
    }
    while ( v112 != v27 );
LABEL_29:
    v28 = 2LL * *((unsigned int *)v116 + 2);
    v108 = *(_QWORD **)v116;
    v112 = &v108[v28];
  }
LABEL_30:
  v29 = v108;
  if ( v108 == v112 )
    goto LABEL_167;
  while ( *v29 <= 1u )
  {
    v29 += 2;
    if ( v29 == v112 )
      goto LABEL_167;
  }
  v108 = v29;
  if ( v29 == v112 )
  {
LABEL_167:
    if ( ptr != v115 && ptr )
      sub_186B220(ptr);
  }
  else
  {
    v30 = *v29;
    v31 = nullptr;
    do
    {
      v32 = *(_DWORD *)(v30 + 12);
      v33 = *(_QWORD **)v119;
      v34 = *(unsigned int *)(v119 + 8);
      v35 = v34 - 1;
      v34 *= 24;
      v36 = 3LL * (v32 & v35);
      v37 = (_QWORD *)(*(_QWORD *)v119 + v34);
      v38 = 8 * v36;
      v39 = *(_QWORD *)v119 + v38;
      if ( v38 != v34 )
      {
        for ( j = (_QWORD *)(*(_QWORD *)v119 + v38); v37 != j; j += 3 )
        {
          v41 = (_QWORD *)*j;
          if ( *j > 1u )
          {
            if ( *((_DWORD *)v41 + 3) == v32 && v41 == (_QWORD *)v30 )
            {
              v41 = j;
              goto LABEL_43;
            }
          }
          else if ( !v41 )
          {
            goto LABEL_43;
          }
        }
      }
      if ( v33 == (_QWORD *)v39 )
      {
LABEL_157:
        v41 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v41 = (_QWORD *)*v33;
            if ( *v33 > 1u )
              break;
            if ( !v41 )
              goto LABEL_43;
            v33 += 3;
            if ( (_QWORD *)v39 == v33 )
              goto LABEL_157;
          }
          if ( *((_DWORD *)v41 + 3) == v32 && v41 == (_QWORD *)v30 )
            break;
          v33 += 3;
          if ( (_QWORD *)v39 == v33 )
            goto LABEL_157;
        }
        v41 = v33;
      }
LABEL_43:
      if ( v31 )
      {
        v42 = (unsigned __int64)&v31[*((unsigned int *)v31 - 1)];
        if ( (unsigned __int64)v31 < v42 )
        {
          v43 = v31;
          do
          {
            while ( 1 )
            {
              v44 = *v43;
              if ( *v43 )
              {
                v45 = (*(_DWORD *)(v44 + 8))-- == 1;
                if ( v45 )
                  break;
              }
              if ( (unsigned __int64)++v43 >= v42 )
                goto LABEL_50;
            }
            sub_15D7BC0(v117, v44);
            ++v43;
          }
          while ( (unsigned __int64)v43 < v42 );
LABEL_50:
          v30 = *v108;
        }
        *((_DWORD *)v31 - 1) = 0;
      }
      v122[0] = 0;
      if ( *(_DWORD *)(v30 + 32) )
      {
        v46 = 0;
        do
        {
          v52 = sub_15DB5C0(a1[2].m128i_i64[0], v46, *(_QWORD *)(v30 + 8LL * v46 + 48));
          v53 = v52;
          if ( v52 )
            ++*(_DWORD *)(v52 + 8);
          if ( v31 )
          {
            v54 = *((_DWORD *)v31 - 1);
            if ( v54 == *((_DWORD *)v31 - 2) )
            {
              v55 = (3 * v54 + 1) >> 1;
              v56 = 8 * v55 + 8;
              if ( 8 * v54 + 8 >= (unsigned int)v56 || v54 >= v55 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_D240F0(v120, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v120);
                sub_233E40((__int64)v120);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v57 = (unsigned int *)sub_186B300(v31 - 1, v56);
              v58 = v57[1];
              v31 = (__int64 *)(v57 + 2);
              *v57 = v55;
              LODWORD(v57) = v58;
              v49 = &v31[v58];
              v48 = (_DWORD)v57 + 1;
            }
            else
            {
              v47 = v54;
              v48 = v54 + 1;
              v49 = &v31[v47];
            }
          }
          else
          {
            v104 = (_QWORD *)sub_186B270(0x18u);
            v31 = v104 + 1;
            v49 = v104 + 1;
            *v104 = 2;
            v48 = 1;
          }
          *v49 = v53;
          v50 = v41[2];
          LODWORD(v37) = v46;
          *((_DWORD *)v31 - 1) = v48;
          if ( (*(_DWORD *)(v50 + 4LL * (v46 >> 5)) & (1 << v46)) == 0 )
          {
            v51 = v122[0];
            if ( v122[0] >= (unsigned int)v122[1] )
            {
              v80 = (unsigned int)(2 * v122[1]);
              v81 = (char *)sub_186B270(8 * v80);
              v51 = v122[0];
              v82 = (char *)v121;
              v37 = v81;
              if ( v122[0] )
              {
                if ( (unsigned int)(v122[0] - 1) <= 2 || v81 == (char *)v121 + 8 )
                {
                  v107 = 0;
                  v39 = 8LL * (unsigned int)v122[0];
                  do
                  {
                    v37[v107 / 8] = *(_QWORD *)&v82[v107];
                    v107 += 8LL;
                  }
                  while ( v39 != v107 );
                }
                else
                {
                  v83 = 0;
                  v84 = 16LL * ((unsigned int)v122[0] >> 1);
                  do
                  {
                    *(__m128i *)&v37[v83 / 8] = _mm_loadu_si128((const __m128i *)&v82[v83]);
                    v83 += 16LL;
                  }
                  while ( v83 != v84 );
                  if ( (v51 & 1) != 0 )
                    v37[v51 & 0xFFFFFFFE] = *(_QWORD *)&v82[8 * (v51 & 0xFFFFFFFE)];
                }
              }
              if ( v82 != v118 && v82 )
              {
                *(_QWORD *)v109 = v37;
                sub_186B220(v82);
                v51 = v122[0];
                v37 = *(_QWORD **)v109;
              }
              v121 = v37;
              v122[1] = v80;
            }
            else
            {
              v37 = v121;
            }
            v37[v51] = v53;
            v122[0] = v51 + 1;
          }
          ++v46;
          v30 = *v108;
        }
        while ( v46 < *(_DWORD *)(*v108 + 32LL) );
      }
      v85 = v108[1];
      v86 = *(_QWORD *)(v85 + 16);
      v87 = v86 + 24LL * *(unsigned int *)(v85 + 24);
      if ( v86 == v87 )
      {
LABEL_161:
        *(_QWORD *)v109 = 0;
      }
      else
      {
        while ( *(_DWORD *)(v86 + 4) != 2 )
        {
          v86 += 24;
          if ( v87 == v86 )
            goto LABEL_161;
        }
        *(_QWORD *)v109 = 0;
        if ( v87 != v86 )
        {
          do
          {
            v88 = sub_15DC610(
                    a1[2].m128i_i64[0],
                    *(_QWORD *)(v86 + 16),
                    v122[0],
                    (int)v121,
                    v39,
                    v38,
                    (int)v108,
                    v109[0],
                    (int)v110,
                    (int)v111,
                    (int)v112,
                    (char)v113,
                    v114,
                    (int)v115,
                    (int)v116,
                    v117);
            v111 = (int *)v88;
            if ( *(_QWORD *)v109 )
            {
              LODWORD(v125) = 0;
              v96 = *(unsigned int *)(*v108 + 32LL);
              if ( (_DWORD)v96 )
              {
                v97 = 0;
                do
                {
                  while ( (*(_DWORD *)(v41[2] + 4LL * ((unsigned int)v97 >> 5)) & (1 << v97)) == 0 )
                  {
                    if ( (unsigned int)++v97 >= (unsigned int)v96 )
                      goto LABEL_135;
                  }
                  v98 = sub_15E1B70(a1[2].m128i_i64[0]);
                  v99 = v125;
                  if ( (unsigned int)v125 >= HIDWORD(v125) )
                  {
                    v114 = v98;
                    LODWORD(v113) = 2 * HIDWORD(v125);
                    v100 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v125)));
                    v99 = v125;
                    v101 = (char *)ptr;
                    v98 = v114;
                    if ( (_DWORD)v125 )
                    {
                      if ( (unsigned int)(v125 - 1) <= 2 || v100 == (char *)ptr + 8 )
                      {
                        v105 = 0;
                        v106 = 8LL * (unsigned int)v125;
                        do
                        {
                          *(_QWORD *)&v100[v105] = *(_QWORD *)&v101[v105];
                          v105 += 8;
                        }
                        while ( v106 != v105 );
                      }
                      else
                      {
                        v102 = 0;
                        v103 = 16LL * ((unsigned int)v125 >> 1);
                        do
                        {
                          *(__m128i *)&v100[v102] = _mm_loadu_si128((const __m128i *)&v101[v102]);
                          v102 += 16;
                        }
                        while ( v103 != v102 );
                        if ( (v99 & 1) != 0 )
                          *(_QWORD *)&v100[8 * (v99 & 0xFFFFFFFE)] = *(_QWORD *)&v101[8 * (v99 & 0xFFFFFFFE)];
                      }
                    }
                    if ( v101 != v115 && v101 )
                    {
                      v116 = v100;
                      v114 = v98;
                      sub_186B220(v101);
                      v99 = v125;
                      v100 = v116;
                      v98 = v114;
                    }
                    ptr = v100;
                    HIDWORD(v125) = (_DWORD)v113;
                  }
                  else
                  {
                    v100 = (char *)ptr;
                  }
                  ++v97;
                  *(_QWORD *)&v100[8 * v99] = v98;
                  LODWORD(v125) = v99 + 1;
                  LODWORD(v96) = *(_DWORD *)(*v108 + 32LL);
                }
                while ( (unsigned int)v97 < (unsigned int)v96 );
LABEL_135:
                v96 = (unsigned int)v125;
              }
              sub_15EC1C0(a1[2].m128i_i64[0], v96);
              v88 = sub_15E1BF0(a1[2].m128i_i64[0]);
            }
            *(_QWORD *)v109 = v88;
            v89 = v86 + 24;
            if ( v87 == v86 + 24 )
              break;
            while ( 1 )
            {
              v86 = v89;
              if ( *(_DWORD *)(v89 + 4) == 2 )
                break;
              v89 += 24;
              if ( v87 == v89 )
                goto LABEL_107;
            }
          }
          while ( v87 != v89 );
LABEL_107:
          v30 = *v108;
        }
      }
      sub_13333D0((_DWORD)v110, v30, v109[0], (_DWORD)v37, v39, v38);
      v90 = v108 + 2;
      if ( v108 + 2 == v112 )
        break;
      while ( 1 )
      {
        v30 = *v90;
        if ( *v90 > 1u )
          break;
        v90 += 2;
        if ( v112 == v90 )
          goto LABEL_113;
      }
      v108 = v90;
    }
    while ( v90 != v112 );
LABEL_113:
    if ( ptr != v115 && ptr )
      sub_186B220(ptr);
    if ( v31 )
    {
      v91 = v117;
      v92 = v31;
      v93 = (unsigned __int64)&v31[*((unsigned int *)v31 - 1)];
      if ( (unsigned __int64)v31 < v93 )
      {
        do
        {
          while ( 1 )
          {
            v94 = *v92;
            if ( *v92 )
            {
              v45 = (*(_DWORD *)(v94 + 8))-- == 1;
              if ( v45 )
                break;
            }
            if ( (unsigned __int64)++v92 >= v93 )
              goto LABEL_123;
          }
          ++v92;
          sub_15D7BC0(v91, v94);
        }
        while ( (unsigned __int64)v92 < v93 );
      }
LABEL_123:
      sub_186B220(v31 - 1);
    }
  }
  if ( v121 && v121 != v118 )
    sub_186B220(v121);
  return v110;
}

