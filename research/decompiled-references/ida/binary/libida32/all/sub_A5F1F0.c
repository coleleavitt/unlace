void __fastcall sub_A5F1F0(__int64 a1, char **a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r14
  char *v7; // r15
  size_t v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  char *v32; // rdx
  void *v33; // r15
  __int64 v34; // r12
  size_t v35; // rbp
  __int64 v36; // rax
  char v37; // al
  int v38; // edx
  __int64 v39; // rbx
  __int64 *v40; // r13
  __int64 *v41; // rdx
  __int64 v42; // rdx
  __int64 *v43; // rcx
  __int64 *v44; // r13
  size_t v45; // rax
  __int64 v46; // r14
  __int64 (*v47)(); // rax
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  unsigned int *v52; // rsi
  char *v53; // r14
  __m128i *v54; // r13
  __int64 v55; // rdx
  _BYTE *v56; // rsi
  __int64 *v57; // rdi
  const __m128i *v58; // rsi
  void *v59; // rdi
  char v60; // al
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r14
  __int64 *v64; // rax
  __int64 v65; // rbp
  int v66; // eax
  __int64 v67; // r13
  size_t v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r13
  const void *v71; // r14
  const __m128i *v72; // r14
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  __m128i v75; // xmm0
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r13
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r14
  char *v84; // r13
  size_t v85; // rax
  const __m128i *v86; // rsi
  __int64 v87; // rax
  void **v88; // r14
  char *v89; // rcx
  char *v90; // rdx
  size_t v91; // rax
  __int64 v92; // rbp
  __int64 v93; // rdi
  __int64 *v94; // rax
  int v95; // eax
  void (__fastcall *v96)(void **, __int64, __int64, __int64); // r14
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __m128i v100; // xmm2
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // kr10_8
  char *v106; // rax
  __int32 v107; // edi
  unsigned int v108; // edx
  unsigned int v109; // ecx
  __int32 v110; // esi
  __int64 v111; // rbx
  __int64 v112; // rbp
  __int64 v113; // rdi
  unsigned __int64 v115; // [rsp+10h] [rbp-318h]
  char *v116; // [rsp+10h] [rbp-318h]
  __m128i *v117; // [rsp+10h] [rbp-318h]
  char *v118; // [rsp+18h] [rbp-310h]
  __m128i *v119; // [rsp+18h] [rbp-310h]
  __int64 v120; // [rsp+20h] [rbp-308h]
  _BYTE *v121; // [rsp+20h] [rbp-308h]
  unsigned __int64 v122; // [rsp+28h] [rbp-300h]
  __int64 v123; // [rsp+28h] [rbp-300h]
  __m128i v124; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v125[2]; // [rsp+40h] [rbp-2E8h] BYREF
  __m128i v126; // [rsp+50h] [rbp-2D8h] BYREF
  __int64 v127; // [rsp+60h] [rbp-2C8h]
  __int128 v128; // [rsp+70h] [rbp-2B8h] BYREF
  __int64 v129; // [rsp+80h] [rbp-2A8h]
  void *v130[2]; // [rsp+90h] [rbp-298h] BYREF
  _QWORD v131[8]; // [rsp+A0h] [rbp-288h] BYREF
  void *ptr; // [rsp+E0h] [rbp-248h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-240h] BYREF
  void *s1; // [rsp+F8h] [rbp-230h]
  size_t n; // [rsp+100h] [rbp-228h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL);
  v7 = *(char **)(v6 + 64);
  v8 = *(_QWORD *)(v6 + 72);
  v9 = sub_B681F0(a3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    goto LABEL_24;
  v10 = v9;
  v11 = sub_B68690(v9);
  v12 = *(__int64 **)v11;
  v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
  if ( (unsigned __int64)v12 >= v13 )
  {
    if ( v12 == (__int64 *)v13 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 376 )
    {
      v14 = (__int64 *)(v13 + 8);
      while ( v14 != v12 )
      {
        v15 = *v14++;
        if ( *(_WORD *)(v15 + 36) == 376 )
          goto LABEL_39;
      }
      goto LABEL_8;
    }
LABEL_39:
    v42 = *v12;
    if ( *(_WORD *)(*v12 + 36) != 376 )
    {
      v43 = v12 + 1;
      do
        v42 = *v43++;
      while ( *(_WORD *)(v42 + 36) != 376 );
    }
    sub_A449F0((__int64)&ptr, a1, v42);
    v44 = *(__int64 **)(a1 + 17448);
    if ( (unsigned int)(*((_DWORD *)v44 + 62) - 3) > 2 )
    {
      sub_A4BC30((void ***)&ptr, (const __m128i *)ptr, *(char **)(v44[26] + 232), *(char **)(v44[26] + 240));
      v44 = *(__int64 **)(a1 + 17448);
    }
    v45 = j__strlen(&byte_22CD811);
    v46 = *v44;
    if ( n != v45 || n && memcmp(s1, &byte_22CD811, n) )
    {
      v47 = *(__int64 (**)())(v46 + 480);
      if ( v47 == sub_A32180
        || (v60 = ((__int64 (__fastcall *)(__int64 *, void *, size_t))v47)(v44, s1, n),
            v44 = *(__int64 **)(a1 + 17448),
            v46 = *v44,
            v60) )
      {
        v7 = (char *)s1;
        v8 = n;
      }
    }
    (*(void (__fastcall **)(__int64 *, char **, _QWORD, char *, size_t, void **))(v46 + 440))(
      v44,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL),
      v7,
      v8,
      &ptr);
    sub_990CF0((void ***)&ptr);
    return;
  }
  v41 = v12;
  if ( *(_WORD *)(*v12 + 36) == 376 )
  {
LABEL_38:
    if ( (__int64 *)v13 == v41 )
      goto LABEL_8;
    goto LABEL_39;
  }
  while ( (__int64 *)v13 != ++v41 )
  {
    if ( *(_WORD *)(*v41 + 36) == 376 )
      goto LABEL_38;
  }
LABEL_8:
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    goto LABEL_23;
  v16 = sub_B68690(v10);
  v17 = *(__int64 **)v16;
  v18 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
  if ( (unsigned __int64)v17 < v18 )
  {
    v19 = v17;
    while ( *(_WORD *)(*v19 + 36) != 158 )
    {
      if ( (__int64 *)v18 == ++v19 )
        goto LABEL_13;
    }
    if ( (__int64 *)v18 != v19 )
      goto LABEL_52;
    goto LABEL_13;
  }
  if ( v17 == (__int64 *)v18 )
  {
LABEL_13:
    if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
    {
      v20 = sub_B68690(v10);
      v21 = *(__int64 **)v20;
      v22 = *(_QWORD *)v20 + 8LL * *(unsigned int *)(v20 + 8);
      if ( (unsigned __int64)v21 >= v22 )
      {
        if ( v21 != (__int64 *)v22 )
        {
          if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 377 )
          {
LABEL_72:
            v63 = *v21;
            if ( *(_WORD *)(*v21 + 36) != 377 )
            {
              v64 = v21 + 1;
              do
                v63 = *v64++;
              while ( *(_WORD *)(v63 + 36) != 377 );
            }
            v65 = *(_QWORD *)(a1 + 17448);
            v66 = *(_DWORD *)(v65 + 248);
            v67 = 16LL * a4;
            if ( (unsigned int)(v66 - 3) <= 2 )
            {
              ptr = &si128.m128i_u64[1];
              si128.m128i_i64[0] = 0x800000000LL;
              v68 = j__strlen("default");
              v69 = v67 + *(_QWORD *)(v63 + 48);
              v70 = *(_QWORD *)(v69 + 8);
              v71 = *(const void **)v69;
              if ( v68 != v70 || v68 && memcmp(v71, "default", *(_QWORD *)(v69 + 8)) )
              {
                v125[0] = v71;
                v125[1] = v70;
                v130[0] = v131;
                v130[1] = (void *)0x400000000LL;
                sub_22239B0(v125, v130, 43, 0xFFFFFFFFLL, 1);
                v117 = (__m128i *)((char *)v130[0] + 16 * LODWORD(v130[1]));
                if ( v130[0] != v117 )
                {
                  v72 = (const __m128i *)v130[0];
                  do
                  {
                    v77 = 0;
                    v126 = _mm_loadu_si128(v72);
                    v78 = sub_2223270(&v126, asc_22BE270, 6, 0);
                    v79 = v126.m128i_i64[1];
                    if ( v78 < v126.m128i_i64[1] )
                    {
                      v77 = v126.m128i_i64[1] - v78;
                      v79 = v78;
                    }
                    *(_QWORD *)&v128 = v126.m128i_i64[0] + v79;
                    *((_QWORD *)&v128 + 1) = v77;
                    v73 = sub_22233F0(&v128, asc_22BE270, 6, -1) + 1;
                    v126.m128i_i64[0] = v128;
                    if ( v73 > *((_QWORD *)&v128 + 1) )
                      v73 = *((_QWORD *)&v128 + 1);
                    v74 = *((_QWORD *)&v128 + 1) - v77 + v73;
                    if ( v74 > *((_QWORD *)&v128 + 1) )
                      v74 = *((_QWORD *)&v128 + 1);
                    v126.m128i_i64[1] = v74;
                    v75 = _mm_load_si128(&v126);
                    v76 = si128.m128i_u32[0] + 1LL;
                    if ( v76 > si128.m128i_u32[1] )
                    {
                      v124 = v75;
                      sub_22134E0(&ptr, &si128.m128i_u64[1], v76, 16);
                      v75 = _mm_load_si128(&v124);
                    }
                    *((__m128i *)ptr + si128.m128i_u32[0]) = v75;
                    ++v72;
                    ++si128.m128i_i32[0];
                  }
                  while ( v117 != v72 );
                  v117 = (__m128i *)v130[0];
                }
                if ( v117 != (__m128i *)v131 )
                  free(v117);
              }
              sub_A5EFA0((__int64)v130, (__int64)&ptr);
              sub_A4C260(
                (void ***)v130,
                (const __m128i *)v130[0],
                *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 232LL),
                *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 240LL));
              (*(void (__fastcall **)(_QWORD, char **, _QWORD, char *, size_t, void **))(**(_QWORD **)(a1 + 17448)
                                                                                       + 440LL))(
                *(_QWORD *)(a1 + 17448),
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL),
                v7,
                v8,
                v130);
              goto LABEL_60;
            }
            v82 = v67 + *(_QWORD *)(v63 + 48);
            v83 = *(_QWORD *)v82;
            v84 = *(char **)(v82 + 8);
            if ( (unsigned int)(v66 - 27) > 1 )
            {
              v128 = 0;
              v129 = 0;
              v91 = j__strlen("arch=");
              if ( v91 <= (unsigned __int64)v84 && (!v91 || !memcmp((const void *)v83, "arch=", v91)) )
              {
                v8 = 0;
                if ( (unsigned __int64)v84 > 4 )
                {
                  v8 = (size_t)(v84 - 5);
                  v84 = &byte_5;
                }
                v7 = &v84[v83];
              }
              else if ( (char *)j__strlen("default") != v84 || v84 && memcmp((const void *)v83, "default", (size_t)v84) )
              {
                ptr = "+";
                si128.m128i_i64[0] = j__strlen("+");
                LOWORD(n) = 1285;
                si128.m128i_i64[1] = v83;
                s1 = v84;
                sub_222F820(v130, &ptr);
                sub_A5EF20((__int64)&v128, (__m128i *)v130);
                if ( v130[0] != v131 )
                  operator delete(v130[0]);
                v65 = *(_QWORD *)(a1 + 17448);
              }
              (*(void (__fastcall **)(__int64, char **, _QWORD, char *, size_t, __int128 *, double))(*(_QWORD *)v65 + 440LL))(
                v65,
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL),
                v7,
                v8,
                &v128,
                0.0);
              sub_990CF0((void ***)&v128);
              return;
            }
            *(_OWORD *)v130 = 0;
            v131[0] = 0;
            v85 = j__strlen("default");
            if ( (char *)v85 == v84 && (!v85 || !memcmp((const void *)v83, "default", v85)) )
            {
              v86 = nullptr;
            }
            else
            {
              (*(void (__fastcall **)(void **, __int64, __int64, char *, double))(*(_QWORD *)v65 + 496LL))(
                &ptr,
                v65,
                v83,
                v84,
                0.0);
              sub_A4C260((void ***)v130, (const __m128i *)v130[0], (char *)ptr, (char *)si128.m128i_i64[0]);
              sub_990CF0((void ***)&ptr);
              v65 = *(_QWORD *)(a1 + 17448);
              v86 = (const __m128i *)v130[0];
            }
            v87 = *(_QWORD *)(v65 + 208);
            v88 = v130;
            v89 = *(char **)(v87 + 240);
            v90 = *(char **)(v87 + 232);
LABEL_106:
            sub_A4C260((void ***)v88, v86, v90, v89);
            (*(void (__fastcall **)(_QWORD, char **, _QWORD, char *, size_t, void **, double))(**(_QWORD **)(a1 + 17448)
                                                                                             + 440LL))(
              *(_QWORD *)(a1 + 17448),
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL),
              v7,
              v8,
              v88,
              0.0);
            sub_990CF0((void ***)v88);
            return;
          }
          v80 = (__int64 *)(v22 + 8);
          while ( v21 != v80 )
          {
            v81 = *v80++;
            if ( *(_WORD *)(v81 + 36) == 377 )
              goto LABEL_72;
          }
        }
      }
      else
      {
        v23 = v21;
        while ( *(_WORD *)(*v23 + 36) != 377 )
        {
          if ( (__int64 *)v22 == ++v23 )
            goto LABEL_18;
        }
        if ( (__int64 *)v22 != v23 )
          goto LABEL_72;
      }
LABEL_18:
      if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
      {
        v24 = sub_B68690(v10);
        v25 = *(__int64 **)v24;
        v26 = *(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8);
        if ( (unsigned __int64)v25 >= v26 )
        {
          v92 = *(_QWORD *)(a1 + 17448);
          if ( v25 != (__int64 *)v26 )
          {
            if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 378 )
            {
LABEL_120:
              v93 = *v25;
              if ( *(_WORD *)(*v25 + 36) != 378 )
              {
                v94 = v25 + 1;
                do
                  v93 = *v94++;
                while ( *(_WORD *)(v93 + 36) != 378 );
              }
              v95 = *(_DWORD *)(v92 + 248);
              v127 = 0;
              v126 = 0;
              if ( (unsigned int)(v95 - 27) > 1 )
              {
                si128.m128i_i64[0] = 0x800000000LL;
                ptr = &si128.m128i_u64[1];
                sub_A3B3E0(v93, (__int64)&ptr, 43);
                sub_A5EFA0((__int64)&v128, (__int64)&ptr);
                v100 = _mm_load_si128(&v126);
                v131[0] = v127;
                *(__m128i *)v130 = v100;
                v101 = *((_QWORD *)&v128 + 1);
                v126.m128i_i64[0] = v128;
                v128 = 0;
                v126.m128i_i64[1] = v101;
                v102 = v129;
                v129 = 0;
                v127 = v102;
                sub_990CF0((void ***)v130);
                sub_990CF0((void ***)&v128);
                if ( ptr != &si128.m128i_u64[1] )
                  free(ptr);
              }
              else
              {
                v96 = *(void (__fastcall **)(void **, __int64, __int64, __int64))(*(_QWORD *)v92 + 496LL);
                v97 = sub_A3B340(v93);
                v96(&ptr, v92, v97, v98);
                sub_A4C260((void ***)&v126, (const __m128i *)v126.m128i_i64[0], (char *)ptr, (char *)si128.m128i_i64[0]);
                sub_990CF0((void ***)&ptr);
              }
              v86 = (const __m128i *)v126.m128i_i64[0];
              v88 = (void **)&v126;
              v99 = *(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL);
              v89 = *(char **)(v99 + 240);
              v90 = *(char **)(v99 + 232);
              goto LABEL_106;
            }
            v103 = (__int64 *)(v26 + 8);
            while ( v25 != v103 )
            {
              v104 = *v103++;
              if ( *(_WORD *)(v104 + 36) == 378 )
                goto LABEL_120;
            }
          }
        }
        else
        {
          v27 = v25;
          while ( *(_WORD *)(*v27 + 36) != 378 )
          {
            if ( (__int64 *)v26 == ++v27 )
              goto LABEL_23;
          }
          v92 = *(_QWORD *)(a1 + 17448);
          if ( (__int64 *)v26 != v27 )
            goto LABEL_120;
        }
        v6 = *(_QWORD *)(v92 + 208);
LABEL_24:
        ptr = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
        if ( *(_DWORD *)(v6 + 292) )
        {
          sub_2220EB0(&ptr, *(unsigned int *)(v6 + 288));
          v30 = *(_QWORD *)(v6 + 292);
          v118 = (char *)ptr;
          v31 = *(_QWORD *)(v6 + 280);
          v120 = 8LL * si128.m128i_u32[0] + 8;
          *(__int64 *)((char *)si128.m128i_i64 + 4) = v30;
          if ( si128.m128i_i32[0] )
          {
            v32 = (char *)ptr;
            v33 = nullptr;
            v115 = (unsigned int)(si128.m128i_i32[0] - 1);
            v34 = v31 + 8LL * si128.m128i_u32[0] + 8;
            while ( 1 )
            {
              v39 = *(_QWORD *)(v31 + 8LL * (_QWORD)v33);
              v40 = (__int64 *)&v32[8 * (_QWORD)v33];
              if ( v39 == -8 || !v39 )
              {
                *v40 = v39;
              }
              else
              {
                v35 = *(_QWORD *)v39;
                v36 = sub_220C370(*(_QWORD *)v39 + 17LL, 8, v32, v30, v28, v29);
                v30 = v36;
                if ( v35 )
                {
                  v123 = v36;
                  memcpy((void *)(v36 + 16), (const void *)(v39 + 16), v35);
                  v30 = v123;
                }
                *(_BYTE *)(v30 + v35 + 16) = 0;
                v37 = *(_BYTE *)(v39 + 8);
                v38 = *(_DWORD *)(v34 + 4LL * (_QWORD)v33);
                *(_QWORD *)v30 = v35;
                *(_BYTE *)(v30 + 8) = v37;
                *v40 = v30;
                *(_DWORD *)&v118[4 * (_QWORD)v33 + v120] = v38;
                v32 = (char *)ptr;
              }
              if ( (void *)v115 == v33 )
                break;
              v33 = (char *)v33 + 1;
              v31 = *(_QWORD *)(v6 + 280);
            }
          }
        }
        v105 = si128.m128i_i64[0];
        v106 = *a2;
        v107 = si128.m128i_i32[2];
        *a2 = (char *)ptr;
        v108 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 2) = v105;
        v109 = *((_DWORD *)a2 + 3);
        *((_DWORD *)a2 + 3) = HIDWORD(v105);
        v110 = *((_DWORD *)a2 + 4);
        ptr = v106;
        si128.m128i_i64[0] = __PAIR64__(v109, v108);
        *((_DWORD *)a2 + 4) = v107;
        si128.m128i_i32[2] = v110;
        if ( v109 && v108 )
        {
          v111 = 0;
          v112 = 8LL * (v108 - 1) + 8;
          do
          {
            v113 = *(_QWORD *)&v106[v111];
            if ( v113 != -8 )
            {
              if ( v113 )
              {
                operator delete();
                v106 = (char *)ptr;
              }
            }
            v111 += 8;
          }
          while ( v112 != v111 );
        }
        v59 = ptr;
        goto LABEL_61;
      }
    }
LABEL_23:
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL);
    goto LABEL_24;
  }
  if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 158 )
  {
    v61 = (__int64 *)(v18 + 8);
    while ( v17 != v61 )
    {
      v62 = *v61++;
      if ( *(_WORD *)(v62 + 36) == 158 )
        goto LABEL_52;
    }
    goto LABEL_13;
  }
LABEL_52:
  v48 = *v17;
  if ( *(_WORD *)(*v17 + 36) != 158 )
  {
    v49 = v17 + 1;
    do
      v48 = *v49++;
    while ( *(_WORD *)(v48 + 36) != 158 );
  }
  v50 = *(_QWORD *)(a1 + 17448);
  ptr = &si128.m128i_u64[1];
  v51 = *(_QWORD *)(v48 + 48);
  si128.m128i_i64[0] = 0x2000000000LL;
  v52 = *(unsigned int **)(*(_QWORD *)(v51 + 8LL * a4) + 16LL);
  (*(void (__fastcall **)(__int64, unsigned int *, _QWORD, void **))(*(_QWORD *)v50 + 664LL))(v50, v52 + 4, *v52, &ptr);
  v53 = (char *)ptr;
  *(_OWORD *)v130 = 0;
  v121 = ptr;
  v131[0] = 0;
  v116 = (char *)ptr + 16 * si128.m128i_u32[0];
  if ( 16LL * si128.m128i_u32[0] )
  {
    v122 = 2LL * si128.m128i_u32[0];
    v54 = (__m128i *)operator new(v122 * 16);
    v119 = v54;
    v130[0] = v54;
    v131[0] = &v54[v122];
    if ( v53 == v116 )
    {
      v58 = v54;
    }
    else
    {
      do
      {
        v55 = *((_QWORD *)v53 + 1);
        v56 = *(_BYTE **)v53;
        v57 = (__int64 *)v54;
        v54->m128i_i64[0] = (__int64)v54[1].m128i_i64;
        v53 += 16;
        v54 += 2;
        sub_A33D30(v57, v56, (__int64)&v56[v55]);
      }
      while ( v116 != v53 );
      v58 = (const __m128i *)v130[0];
      v119 += 2 * ((unsigned __int64)(v116 - v121 - 16) >> 4) + 2;
    }
  }
  else
  {
    v130[0] = nullptr;
    v58 = nullptr;
    v131[0] = 32LL * si128.m128i_u32[0];
    v119 = nullptr;
  }
  v130[1] = v119;
  sub_A4BC30(
    (void ***)v130,
    v58,
    *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 232LL),
    *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 240LL));
  (*(void (__fastcall **)(_QWORD, char **, _QWORD, char *, size_t, void **))(**(_QWORD **)(a1 + 17448) + 440LL))(
    *(_QWORD *)(a1 + 17448),
    a2,
    *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL),
    v7,
    v8,
    v130);
LABEL_60:
  sub_990CF0((void ***)v130);
  v59 = ptr;
  if ( ptr != &si128.m128i_u64[1] )
LABEL_61:
    free(v59);
}

