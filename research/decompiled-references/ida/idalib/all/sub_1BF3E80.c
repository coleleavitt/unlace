__int64 __fastcall sub_1BF3E80(
        __int64 *a1,
        __int64 a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        char a10)
{
  _QWORD *v10; // r14
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r9
  unsigned __int64 v17; // r12
  void *v18; // rbp
  __int64 v19; // r10
  int v20; // edx
  __int64 v21; // r11
  char *v22; // rax
  char *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rsi
  __int64 v26; // r12
  unsigned int v27; // r9d
  __int64 *v28; // r8
  __int64 v29; // r13
  _BYTE *v30; // r8
  __int64 v31; // rdi
  unsigned __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdi
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  unsigned __int64 v37; // rbp
  _QWORD *v38; // rax
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  __int64 (__fastcall *v48)(__int64); // rdx
  __int64 v49; // rax
  unsigned int v50; // edi
  __int64 *v51; // rsi
  __int64 v52; // r8
  unsigned __int64 v53; // rbp
  char *v54; // rbx
  __int64 v55; // r10
  int v56; // edx
  __int64 v57; // r11
  char *v58; // rax
  char *v59; // rdi
  __int64 v60; // rcx
  _QWORD *v61; // rsi
  __int64 v62; // rbp
  unsigned int v63; // r9d
  __int64 *v64; // r8
  __int64 v65; // r13
  _BYTE *v66; // r8
  __int64 v67; // rdi
  unsigned __int64 v68; // r11
  __int64 v69; // rdi
  unsigned __int64 v70; // r8
  __int64 v71; // rdx
  unsigned __int64 v72; // rbp
  _QWORD *v73; // rax
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  __int64 *v80; // rax
  __int64 v81; // rdx
  char *v82; // rbx
  __int64 v83; // r15
  unsigned __int64 v84; // r13
  __int64 v85; // r14
  __int8 v86; // al
  __int8 v88; // al
  int v89; // esi
  int v90; // esi
  unsigned int v91; // edx
  unsigned __int64 v92; // rdi
  unsigned __int64 *v93; // rax
  int i; // r8d
  int j; // r8d
  int v96; // r10d
  int v97; // r10d
  char *v98; // [rsp+8h] [rbp-F0h]
  __int64 v102; // [rsp+28h] [rbp-D0h]
  char v103; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v104; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 *v105; // [rsp+48h] [rbp-B0h]
  __m128d v106; // [rsp+50h] [rbp-A8h]
  __int64 v107; // [rsp+60h] [rbp-98h]
  __int64 v108; // [rsp+68h] [rbp-90h]
  _QWORD *v109; // [rsp+70h] [rbp-88h]
  int v110; // [rsp+7Ch] [rbp-7Ch]
  __m128 v111; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v112; // [rsp+90h] [rbp-68h] BYREF
  __int64 v113; // [rsp+98h] [rbp-60h]
  unsigned int v114; // [rsp+A0h] [rbp-58h]
  void *ptr; // [rsp+A8h] [rbp-50h]
  __int64 v116; // [rsp+B0h] [rbp-48h]
  __int64 v117; // [rsp+B8h] [rbp-40h] BYREF

  v10 = &v112;
  *(_QWORD *)&v106.m128d_f64[0] = a6;
  LOBYTE(v109) = a10;
  ptr = &v117;
  v112 = nullptr;
  v113 = 0;
  v114 = 0;
  v116 = 0;
  sub_1A680A0((__int64)a1, a2, a3, (__int64)a4, a5, (__int64)&v112);
  v105 = nullptr;
  v11 = *(__int64 **)a9;
  v102 = *(_QWORD *)a9 + 168LL * *(unsigned int *)(a9 + 8);
  if ( *(_QWORD *)a9 != v102 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
        goto LABEL_58;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(*v11);
      if ( !v114 )
        break;
      v14 = (v114 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v15 = &v112[2 * v14];
      v16 = *v15;
      if ( v13 != *v15 )
      {
        v89 = 1;
        if ( v16 == -4096 )
          break;
        while ( 1 )
        {
          v96 = v89 + 1;
          v14 = (v114 - 1) & (v89 + v14);
          v15 = &v112[2 * v14];
          if ( v13 == *v15 )
            break;
          if ( *v15 == -4096 )
            goto LABEL_74;
          v89 = v96;
        }
      }
      sub_17AC880(&v111, v15, &v112[2 * v114], (__int64)&v112, 1);
      v17 = v111.m128_u64[0];
LABEL_6:
      sub_17AC880(&v111, &v112[2 * v114], &v112[2 * v114], (__int64)&v112, 1);
      if ( v17 == v111.m128_u64[0] )
        goto LABEL_29;
      v18 = ptr;
      v19 = 16LL * *(unsigned int *)(v17 + 8);
      v20 = v116;
      v21 = 16LL * (unsigned int)v116;
      v22 = (char *)ptr + v19;
      v23 = (char *)ptr + v21;
      if ( (char *)ptr + v21 == (char *)ptr + v19 )
        goto LABEL_29;
      v24 = v114;
      v25 = v112;
      if ( v114 )
      {
        v26 = *(_QWORD *)v22;
        LODWORD(v104) = v114 - 1;
        v27 = (v114 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
        v28 = &v112[2 * v27];
        v29 = *v28;
        if ( *v28 == v26 )
          goto LABEL_10;
        v30 = ptr;
        if ( v29 != -4096 )
        {
          for ( i = 1; ; i = v110 )
          {
            v27 = v104 & (i + v27);
            v110 = i + 1;
            v28 = &v112[2 * v27];
            if ( v26 == *v28 )
              break;
            if ( *v28 == -4096 )
              goto LABEL_86;
          }
LABEL_10:
          *v28 = -8192;
          v30 = ptr;
          LODWORD(v113) = v113 - 1;
          ++HIDWORD(v113);
          v23 = (char *)ptr + v21;
        }
      }
      else
      {
LABEL_86:
        v30 = ptr;
      }
      v31 = v23 - (v22 + 16);
      v32 = v31 >> 4;
      if ( v31 > 0 )
      {
        v33 = (__int64)v18 + v19 + 16;
        v34 = 0;
        v35 = 0;
        do
        {
          a8 = (__m128)_mm_loadu_si128((const __m128i *)(v33 + v34));
          ++v35;
          *(__m128 *)&v22[v34] = a8;
          v34 += 16;
        }
        while ( v35 < v32 );
        v30 = ptr;
      }
      v36 = (unsigned int)(v20 - 1);
      LODWORD(v116) = v36;
      if ( v22 != &v30[16 * v36] )
      {
        v37 = (v22 - v30) >> 4;
        v38 = &v25[2 * v24];
        if ( (_DWORD)v113 )
          sub_17AC880(&v111, v25, v38, (__int64)&v112, 0);
        else
          sub_17AC880(&v111, v38, v38, (__int64)&v112, 1);
        v40 = v111.m128_u64[1];
        v39 = v111.m128_u64[0];
        sub_17AC880(&v111, &v112[2 * v114], &v112[2 * v114], (__int64)&v112, 1);
        v41 = v111.m128_u64[0];
        while ( v41 != v39 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v42 = *(unsigned int *)(v39 + 8);
              if ( v37 < v42 )
                *(_DWORD *)(v39 + 8) = v42 - 1;
              v43 = v39 + 16;
              if ( v40 != v39 + 16 )
                break;
              v39 = v40;
              if ( v41 == v40 )
                goto LABEL_29;
            }
            v44 = *(_QWORD *)(v39 + 16);
            if ( v44 == -8192 || v44 == -4096 )
              break;
            v39 += 16LL;
            if ( v41 == v43 )
              goto LABEL_29;
          }
          v45 = (__int64 *)(v39 + 32);
          do
          {
            v39 = (unsigned __int64)v45;
            if ( (__int64 *)v40 == v45 )
              break;
            v46 = *v45;
            v45 += 2;
          }
          while ( v46 == -4096 || v46 == -8192 );
        }
      }
LABEL_29:
      v47 = (_QWORD *)sub_B77AF0(v12);
      if ( !v47 )
        goto LABEL_58;
      v48 = *(__int64 (__fastcall **)(__int64))(*v47 + 32LL);
      if ( v48 == sub_6EE8E0 )
        v49 = v47[9];
      else
        v49 = v48((__int64)v47);
      if ( !v114 )
      {
LABEL_79:
        sub_17AC880(&v111, &v112[2 * v114], &v112[2 * v114], (__int64)&v112, 1);
        v53 = v111.m128_u64[0];
        goto LABEL_35;
      }
      v50 = (v114 - 1) & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
      v51 = &v112[2 * v50];
      v52 = *v51;
      if ( v49 != *v51 )
      {
        v90 = 1;
        if ( v52 == -4096 )
          goto LABEL_79;
        while ( 1 )
        {
          v97 = v90 + 1;
          v50 = (v114 - 1) & (v90 + v50);
          v51 = &v112[2 * v50];
          if ( v49 == *v51 )
            break;
          if ( *v51 == -4096 )
            goto LABEL_79;
          v90 = v97;
        }
      }
      sub_17AC880(&v111, v51, &v112[2 * v114], (__int64)&v112, 1);
      v53 = v111.m128_u64[0];
LABEL_35:
      sub_17AC880(&v111, &v112[2 * v114], &v112[2 * v114], (__int64)&v112, 1);
      if ( v111.m128_u64[0] != v53 )
      {
        v54 = (char *)ptr;
        v55 = 16LL * *(unsigned int *)(v53 + 8);
        v56 = v116;
        v57 = 16LL * (unsigned int)v116;
        v58 = (char *)ptr + v55;
        v59 = (char *)ptr + v57;
        if ( (char *)ptr + v57 != (char *)ptr + v55 )
        {
          v60 = v114;
          v61 = v112;
          if ( v114 )
          {
            v62 = *(_QWORD *)v58;
            v63 = (v114 - 1) & (((unsigned int)*(_QWORD *)v58 >> 9) ^ ((unsigned int)*(_QWORD *)v58 >> 4));
            v64 = &v112[2 * v63];
            v65 = *v64;
            if ( *(_QWORD *)v58 == *v64 )
              goto LABEL_39;
            v66 = ptr;
            if ( v65 != -4096 )
            {
              for ( j = 1; ; j = v104 )
              {
                v63 = (v114 - 1) & (j + v63);
                LODWORD(v104) = j + 1;
                v64 = &v112[2 * v63];
                if ( v62 == *v64 )
                  break;
                if ( *v64 == -4096 )
                  goto LABEL_89;
              }
LABEL_39:
              *v64 = -8192;
              v66 = ptr;
              LODWORD(v113) = v113 - 1;
              ++HIDWORD(v113);
              v59 = (char *)ptr + v57;
            }
          }
          else
          {
LABEL_89:
            v66 = ptr;
          }
          v67 = v59 - (v58 + 16);
          v68 = v67 >> 4;
          if ( v67 > 0 )
          {
            v69 = 0;
            v70 = 0;
            do
            {
              ++v70;
              *(__m128i *)&v58[v69] = _mm_loadu_si128((const __m128i *)&v54[v55 + 16 + v69]);
              v69 += 16;
            }
            while ( v70 < v68 );
            v66 = ptr;
          }
          v71 = (unsigned int)(v56 - 1);
          LODWORD(v116) = v71;
          if ( v58 != &v66[16 * v71] )
          {
            v72 = (v58 - v66) >> 4;
            v73 = &v61[2 * v60];
            if ( (_DWORD)v113 )
              sub_17AC880(&v111, v61, v73, (__int64)&v112, 0);
            else
              sub_17AC880(&v111, v73, v73, (__int64)&v112, 1);
            v75 = v111.m128_u64[1];
            v74 = v111.m128_u64[0];
            sub_17AC880(&v111, &v112[2 * v114], &v112[2 * v114], (__int64)&v112, 1);
            v76 = v111.m128_u64[0];
            while ( v74 != v76 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v77 = *(unsigned int *)(v74 + 8);
                  if ( v72 < v77 )
                    *(_DWORD *)(v74 + 8) = v77 - 1;
                  v78 = v74 + 16;
                  if ( v75 != v74 + 16 )
                    break;
                  v74 = v75;
                  if ( v75 == v76 )
                    goto LABEL_58;
                }
                v79 = *(_QWORD *)(v74 + 16);
                if ( v79 == -8192 || v79 == -4096 )
                  break;
                v74 += 16LL;
                if ( v78 == v76 )
                  goto LABEL_58;
              }
              v80 = (__int64 *)(v74 + 32);
              do
              {
                v74 = (unsigned __int64)v80;
                if ( (__int64 *)v75 == v80 )
                  break;
                v81 = *v80;
                v80 += 2;
              }
              while ( v81 == -8192 || v81 == -4096 );
            }
          }
        }
      }
LABEL_58:
      v11 += 21;
      if ( v11 == (__int64 *)v102 )
        goto LABEL_59;
    }
LABEL_74:
    sub_17AC880(&v111, &v112[2 * v114], &v112[2 * v114], (__int64)&v112, 1);
    v17 = v111.m128_u64[0];
    goto LABEL_6;
  }
LABEL_59:
  v82 = (char *)ptr;
  v104 = 0;
  v103 = (char)v109;
  if ( (char *)ptr + 16 * (unsigned int)v116 == ptr )
    goto LABEL_68;
  v98 = (char *)ptr + 16 * (unsigned int)v116;
  v83 = *(_QWORD *)&v106.m128d_f64[0];
  v109 = &v112;
  do
  {
    while ( 1 )
    {
      v84 = *((_QWORD *)v82 + 1);
      v111.m128_u64[0] = v84 | 3;
      v85 = v84 | 3;
      if ( (*(_BYTE *)(v84 + 28) & 0x7Fu) - 34 <= 5 )
      {
        if ( !v83 )
        {
          sub_1BF10B0(
            a1,
            v84,
            v111.m128_i64[0],
            (unsigned __int64 *)a4,
            a5,
            (unsigned int *)a9,
            a7,
            a8,
            0,
            v103,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0);
          v88 = *(_BYTE *)(a9 + 2984);
          v111.m128_u64[0] = *(_QWORD *)(a9 + 2976);
          v111.m128_i8[8] = v88;
          if ( (unsigned __int8)sub_1BD2370((__int64)&v111, a1, (__int64)a4, a5, v84) )
          {
            v107 = 0;
            v108 = 0;
            v106 = (__m128d)_mm_loadu_si128(a4);
            a7 = (__m128)_mm_shuffle_pd(v106, v106, 1);
            v111 = a7;
            sub_1BF10B0(
              a1,
              v84,
              v85,
              (unsigned __int64 *)&v111,
              2u,
              (unsigned int *)a9,
              a7,
              a8,
              0,
              v103,
              1,
              0,
              1,
              0,
              0,
              1,
              0,
              0);
          }
        }
        goto LABEL_62;
      }
      sub_1BF3B70(
        a1,
        (__int64 *)v84,
        v111.m128_i64[0],
        v83,
        (unsigned __int64 *)a4,
        a5,
        *(double *)a7.m128_u64,
        a8,
        a9,
        0,
        v103,
        1,
        0);
      v86 = *(_BYTE *)(a9 + 2984);
      v111.m128_u64[0] = *(_QWORD *)(a9 + 2976);
      v111.m128_i8[8] = v86;
      if ( (unsigned __int8)sub_1BD2370((__int64)&v111, a1, (__int64)a4, a5, *(_QWORD *)(v84 + 48)) )
        break;
LABEL_62:
      v82 += 16;
      if ( v98 == v82 )
        goto LABEL_67;
    }
    if ( !v104 )
    {
      v91 = *(_DWORD *)(a9 + 2988);
      v92 = a4->m128i_i64[0];
      v105 = (unsigned __int64 *)a4->m128i_i64[1];
      v104 = v92;
      if ( 4864 - v91 <= 0xF )
      {
        v93 = (unsigned __int64 *)sub_9C3B30((__int64 *)(a9 + 2872), 16, 3u);
      }
      else
      {
        *(_DWORD *)(a9 + 2988) = v91 + 16;
        v93 = (unsigned __int64 *)(a9 + v91 + 2992);
      }
      v105 = v93;
      a7 = _mm_loadh_ps((const double *)&v104);
      v104 = 2;
      *(__m128 *)v93 = a7;
    }
    v82 += 16;
    sub_1BF3B70(a1, (__int64 *)v84, v85, v83, v105, v104, *(double *)a7.m128_u64, a8, a9, 0, v103, 1, 1);
  }
  while ( v98 != v82 );
LABEL_67:
  v10 = v109;
  v82 = (char *)ptr;
LABEL_68:
  if ( v82 != (char *)(v10 + 5) )
    free(v82);
  return operator delete(v112, 16LL * v114, 8);
}
