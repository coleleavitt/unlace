__int64 __fastcall sub_2532C0(
        int a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128 v11; // xmm0
  int v13; // ebx
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r15d
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  _DWORD *v22; // rax
  _DWORD *v23; // r14
  __int64 v25; // r10
  bool v26; // zf
  const char *v27; // rsi
  __int64 v28; // r10
  const char *v29; // r9
  size_t v30; // r8
  int v31; // eax
  int v32; // edx
  size_t v33; // rcx
  __m128i v34; // xmm0
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // r11
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // eax
  size_t v42; // rdx
  _DWORD *v43; // rdi
  __int64 v44; // rax
  size_t v45; // rax
  size_t v46; // r9
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rbx
  __int64 v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rbp
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rbp
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdi
  int v67; // eax
  __int64 v68; // rax
  size_t v69; // rdx
  void *v70; // rax
  size_t v71; // r8
  size_t v72; // rdx
  void *v73; // rsi
  size_t v74; // rcx
  int v75; // eax
  __int64 v76; // rdi
  __m128i v77; // xmm0
  size_t v78; // rax
  size_t v79; // r11
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdi
  void *v86; // rax
  const void *v87; // rsi
  size_t v88; // rdx
  void *v89; // rax
  size_t v90; // rcx
  size_t v91; // rdx
  void *v92; // rsi
  void *v93; // rax
  void *v94; // rax
  void *v95; // rax
  __m128i v96; // xmm0
  char v97; // [rsp-8h] [rbp-108h]
  size_t n; // [rsp+0h] [rbp-100h] BYREF
  __m128i v99; // [rsp+8h] [rbp-F8h] BYREF
  size_t v100; // [rsp+18h] [rbp-E8h]
  size_t v101; // [rsp+20h] [rbp-E0h]
  size_t v102; // [rsp+28h] [rbp-D8h]
  __int64 *v103; // [rsp+30h] [rbp-D0h]
  __int64 v104; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v105; // [rsp+40h] [rbp-C0h]
  int v106; // [rsp+58h] [rbp-A8h] BYREF
  void *src; // [rsp+60h] [rbp-A0h]
  __int128 v108; // [rsp+68h] [rbp-98h]
  int v109; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v110; // [rsp+80h] [rbp-80h]
  __int128 v111; // [rsp+88h] [rbp-78h]
  int v112; // [rsp+98h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int128 v114; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v115; // [rsp+C0h] [rbp-40h]

  v11 = 0;
  v13 = a2;
  v115 = __readfsqword(0x28u);
  v106 = -2;
  v108 = 0;
  src = (void *)-1LL;
  v19 = sub_23F680(a1, a2, (const char *)&v106, 0.0);
  if ( !(_BYTE)v19 )
    goto LABEL_10;
  a2 = a3;
  if ( (unsigned __int8)sub_235060(&v106, a3) )
  {
LABEL_3:
    if ( v106 >= -1 && src )
    {
      *(_QWORD *)&v108 = 0;
      qfree(src, (const char *)a2);
    }
    return v19;
  }
  v22 = sub_234FE0(a1);
  v23 = v22;
  if ( !v22 )
    goto LABEL_10;
  a2 = (unsigned int)v13;
  v18 = sub_23F1C0((__int64)v22, v13, 0.0, v15, v16);
  if ( !v18 )
    goto LABEL_10;
  if ( v13 < 0 )
    goto LABEL_10;
  if ( v13 >= (unsigned __int64)xmmword_8CC398 )
    goto LABEL_10;
  v15 = 7LL * v13;
  v25 = qword_8CC390 + 56LL * v13;
  if ( !v25 || (*(_BYTE *)(v25 + 36) & 2) != 0 )
    goto LABEL_10;
  v26 = *(_BYTE *)(v25 + 32) == 0xFF;
  v104 = 0;
  v100 = v18;
  v27 = nullptr;
  n = qword_8CC390 + 56LL * v13;
  v103 = &v104;
  v105 = 0;
  if ( !v26 )
  {
    v104 = qvector_reserve(&v104, 0, 1, 48);
    v28 = n;
    v29 = (const char *)v100;
    v30 = v104 + 48 * v105;
    *(_QWORD *)v30 = 0;
    *(_DWORD *)(v30 + 8) = -2;
    *(_OWORD *)(v30 + 24) = 0;
    *(_QWORD *)&v105 = v105 + 1;
    *(_QWORD *)(v30 + 16) = -1;
    *(_QWORD *)v30 = v28;
    *(_DWORD *)(v30 + 40) = v13;
    if ( &v106 == (int *)(v30 + 8) )
    {
LABEL_26:
      v36 = *(int *)(v28 + 44);
      if ( (v36 & 0x80000000) == 0LL && v36 < (unsigned __int64)xmmword_8CC398 )
      {
        v37 = qword_8CC390 + 56 * v36;
        if ( v37 )
        {
          v38 = v105;
          v39 = v104;
          if ( *((_QWORD *)&v105 + 1) < (unsigned __int64)(v105 + 1) )
          {
            v99.m128i_i64[0] = (__int64)v29;
            v100 = v37;
            n = v28;
            v104 = qvector_reserve(v103, v104, v105 + 1, 48);
            v39 = v104;
            v29 = (const char *)v99.m128i_i64[0];
            v38 = v105;
            v37 = v100;
            v28 = n;
          }
          v100 = (size_t)v29;
          n = v28;
          v40 = v39 + 48 * v38;
          *(_QWORD *)v40 = 0;
          *(_DWORD *)(v40 + 8) = -2;
          *(_DWORD *)(v40 + 40) = -1;
          *(_OWORD *)(v40 + 24) = 0;
          *(_QWORD *)(v40 + 16) = -1;
          *(_QWORD *)&v105 = v105 + 1;
          *(_QWORD *)v40 = v37;
          *(_DWORD *)(v40 + 40) = *(_DWORD *)(v28 + 44);
          sub_236190(v37, (const char *)(v40 + 8), (_QWORD *)v23 + 5);
          v29 = (const char *)v100;
          v28 = n;
        }
      }
      goto LABEL_32;
    }
    v31 = v106;
    v32 = *(_DWORD *)(v30 + 8);
    if ( v106 < -1 )
    {
      if ( v32 >= -1 )
      {
        v99.m128i_i64[0] = v30;
        v100 = (size_t)v29;
        n = v28;
        qfree(-1, nullptr);
        v31 = v106;
        v30 = v99.m128i_i64[0];
        v29 = (const char *)v100;
        v28 = n;
      }
      *(_QWORD *)(v30 + 16) = src;
      goto LABEL_25;
    }
    if ( v32 < -1 )
    {
      *(_QWORD *)(v30 + 16) = 0;
      v69 = v108;
      *(_OWORD *)(v30 + 24) = 0;
      if ( v69 )
      {
        v100 = v30;
        v101 = (size_t)v29;
        v99.m128i_i64[0] = v28;
        n = v69;
        v70 = (void *)qalloc_or_throw(v69);
        v71 = v100;
        v72 = n;
        v73 = src;
        *(_QWORD *)(v100 + 32) = n;
        *(_QWORD *)(v71 + 16) = v70;
        memcpy(v70, v73, v72);
        v30 = v100;
        v31 = v106;
        v28 = v99.m128i_i64[0];
        *(_QWORD *)(v100 + 24) = n;
        v29 = (const char *)v101;
      }
      goto LABEL_25;
    }
    if ( (_QWORD)v108 )
    {
      v101 = v30;
      v99.m128i_i64[0] = (__int64)v29;
      v100 = v28;
      n = v108;
      v93 = (void *)qalloc_or_throw(v108);
      v27 = (const char *)src;
      v94 = memcpy(v93, src, n);
      v30 = v101;
      v28 = v100;
      v29 = (const char *)v99.m128i_i64[0];
      v33 = (size_t)v94;
      v35 = *(_QWORD *)(v101 + 16);
      v34 = _mm_unpacklo_epi64((__m128i)n, (__m128i)n);
      if ( !v35 )
        goto LABEL_24;
    }
    else
    {
      v33 = 0;
      v34 = 0;
      v35 = -1;
    }
    *(_QWORD *)(v30 + 24) = 0;
    v102 = (size_t)v29;
    v101 = v28;
    v100 = v33;
    n = v30;
    v99 = v34;
    qfree(v35, v27);
    v29 = (const char *)v102;
    v28 = v101;
    v34 = _mm_load_si128(&v99);
    v33 = v100;
    v30 = n;
LABEL_24:
    *(_QWORD *)(v30 + 16) = v33;
    v31 = v106;
    *(__m128i *)(v30 + 24) = v34;
LABEL_25:
    *(_DWORD *)(v30 + 8) = v31;
    goto LABEL_26;
  }
  v104 = qvector_reserve(&v104, 0, 1, 48);
  v28 = n;
  v29 = (const char *)v100;
  v74 = 48 * v105 + v104;
  *(_QWORD *)v74 = 0;
  *(_DWORD *)(v74 + 8) = -2;
  *(_OWORD *)(v74 + 24) = 0;
  *(_QWORD *)&v105 = v105 + 1;
  *(_QWORD *)(v74 + 16) = -1;
  *(_QWORD *)v74 = v28;
  *(_DWORD *)(v74 + 40) = v13;
  if ( &v106 != (int *)(v74 + 8) )
  {
    v75 = *(_DWORD *)(v74 + 8);
    if ( v106 < -1 )
    {
      if ( v75 >= -1 )
      {
        v99.m128i_i64[0] = v74;
        v100 = (size_t)v29;
        n = v28;
        qfree(-1, nullptr);
        v74 = v99.m128i_i64[0];
        v29 = (const char *)v100;
        v28 = n;
      }
      *(_QWORD *)(v74 + 16) = src;
      goto LABEL_103;
    }
    if ( v75 < -1 )
    {
      *(_QWORD *)(v74 + 16) = 0;
      v88 = v108;
      *(_OWORD *)(v74 + 24) = 0;
      if ( v88 )
      {
        v100 = v74;
        v101 = (size_t)v29;
        v99.m128i_i64[0] = v28;
        n = v88;
        v89 = (void *)qalloc_or_throw(v88);
        v90 = v100;
        v91 = n;
        v92 = src;
        *(_QWORD *)(v100 + 32) = n;
        *(_QWORD *)(v90 + 16) = v89;
        memcpy(v89, v92, v91);
        v74 = v100;
        v28 = v99.m128i_i64[0];
        v29 = (const char *)v101;
        *(_QWORD *)(v100 + 24) = n;
      }
      goto LABEL_103;
    }
    n = v108;
    if ( (_QWORD)v108 )
    {
      v102 = v74;
      v101 = (size_t)v29;
      v99.m128i_i64[0] = v28;
      v95 = (void *)qalloc_or_throw(v108);
      v27 = (const char *)src;
      v100 = (size_t)v95;
      memcpy(v95, src, n);
      v74 = v102;
      v28 = v99.m128i_i64[0];
      v96 = _mm_loadl_epi64((const __m128i *)&n);
      v29 = (const char *)v101;
      v76 = *(_QWORD *)(v102 + 16);
      v77 = _mm_unpacklo_epi64(v96, v96);
      if ( !v76 )
        goto LABEL_102;
    }
    else
    {
      v100 = 0;
      v76 = -1;
      v77 = 0;
    }
    v102 = (size_t)v29;
    *(_QWORD *)(v74 + 24) = 0;
    v101 = v28;
    n = v74;
    v99 = v77;
    qfree(v76, v27);
    v29 = (const char *)v102;
    v28 = v101;
    v77 = _mm_load_si128(&v99);
    v74 = n;
LABEL_102:
    v78 = v100;
    *(__m128i *)(v74 + 24) = v77;
    *(_QWORD *)(v74 + 16) = v78;
LABEL_103:
    *(_DWORD *)(v74 + 8) = v106;
  }
  n = xmmword_8CC398;
  if ( (_QWORD)xmmword_8CC398 )
  {
    v79 = 0;
    v80 = 0;
    do
    {
      if ( *(_BYTE *)(v79 + qword_8CC390 + 32) != 0xFF && *(_DWORD *)(v79 + qword_8CC390 + 44) == v13 )
      {
        v81 = v105;
        v82 = v104;
        if ( *((_QWORD *)&v105 + 1) < (unsigned __int64)(v105 + 1) )
        {
          v102 = v79;
          v101 = (size_t)v29;
          v99.m128i_i64[0] = v80;
          v100 = v28;
          v104 = qvector_reserve(v103, v104, v105 + 1, 48);
          v82 = v104;
          v79 = v102;
          v81 = v105;
          v29 = (const char *)v101;
          v80 = v99.m128i_i64[0];
          v28 = v100;
        }
        a6 = 0;
        v102 = (size_t)v29;
        v101 = v28;
        v83 = v82 + 48 * v81;
        v99.m128i_i64[0] = v80;
        *(_QWORD *)v83 = 0;
        *(_OWORD *)(v83 + 24) = 0;
        v84 = qword_8CC390;
        *(_DWORD *)(v83 + 8) = -2;
        *(_QWORD *)&v105 = v105 + 1;
        *(_QWORD *)(v83 + 16) = -1;
        *(_QWORD *)v83 = v79 + v84;
        v85 = qword_8CC390 + v79;
        *(_DWORD *)(v83 + 40) = v80;
        v100 = v79;
        sub_236190(v85, (const char *)(v83 + 8), (_QWORD *)v23 + 5);
        v29 = (const char *)v102;
        v28 = v101;
        v80 = v99.m128i_i64[0];
        v79 = v100;
      }
      ++v80;
      v79 += 56LL;
    }
    while ( n != v80 );
  }
LABEL_32:
  v41 = *(_DWORD *)a3;
  v11 = 0;
  v109 = -2;
  v111 = 0;
  if ( v41 < -1 )
  {
    v110 = *(_QWORD *)(a3 + 8);
    goto LABEL_83;
  }
  v42 = *(_QWORD *)(a3 + 16);
  v11 = 0;
  v110 = 0;
  v111 = 0;
  if ( v42 )
  {
    v99.m128i_i64[0] = (__int64)v29;
    v100 = v28;
    n = v42;
    v86 = (void *)qalloc_or_throw(v42);
    v87 = *(const void **)(a3 + 8);
    v110 = (unsigned __int64)v86;
    *((_QWORD *)&v111 + 1) = n;
    memcpy(v86, v87, n);
    v41 = *(_DWORD *)a3;
    v28 = v100;
    v29 = (const char *)v99.m128i_i64[0];
    *(_QWORD *)&v111 = n;
LABEL_83:
    v109 = v41;
    if ( v41 == -2 )
    {
      v67 = *(_DWORD *)(v28 + 44);
      if ( v67 < 0 || v67 >= *(_DWORD *)(dbg + 64) )
      {
        v68 = -1;
      }
      else
      {
        v100 = (size_t)v29;
        n = v28;
        v68 = sub_233C80(v28);
        v28 = n;
        v29 = (const char *)v100;
      }
      v110 &= v68;
    }
    goto LABEL_35;
  }
  v109 = v41;
LABEL_35:
  a2 = (__int64)v29;
  v100 = (size_t)v29;
  n = v28;
  sub_2364E0(v28, v29, (__int64)&v109);
  v18 = v100;
  v43 = qword_8CC600;
  v44 = *(int *)(n + 44);
  n = v100;
  v15 = v44;
  v45 = v100 + 32 * v44;
  if ( qword_8CC600 )
  {
    *(_DWORD *)qword_8CC600 = a1;
    a2 = 17;
    v43[9] = v15;
    *((_QWORD *)v43 + 6) = v45;
    if ( (int)sub_23D480((__int64)v43, 17, v15, v16, *(double *)v11.m128_u64) > 0 )
    {
      v46 = n;
      HIDWORD(qword_8CC120) = 0;
      if ( dword_8BA594 == v13 )
      {
        sub_24F1F0(n, *(double *)v11.m128_u64, a5, a6, a7, *(double *)v20.m128_u64, *(double *)v21.m128_u64, a10, a11);
      }
      else
      {
        if ( dword_8BA590 != v13 )
          goto LABEL_39;
        sub_240450(n, *(double *)v11.m128_u64);
      }
      v46 = n;
LABEL_39:
      a2 = 0;
      sub_241220(v46, 0, v15, *(double *)v11.m128_u64);
      if ( (_DWORD)dword_8CC428 )
      {
        v49 = qword_8CC430;
        v50 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
        if ( qword_8CC430 != v50 )
        {
          while ( (_DWORD)dword_8CC428 != *(_DWORD *)v49 )
          {
            v49 += 256;
            if ( v50 == v49 )
              goto LABEL_46;
          }
          if ( v49 )
          {
            a2 = 0;
            qword_8BA598 = sub_240FC0(
                             *(_QWORD *)(v49 + 40),
                             0,
                             *(double *)v11.m128_u64,
                             v50,
                             (unsigned int)dword_8CC428,
                             v47,
                             v48);
          }
        }
      }
LABEL_46:
      sub_2A9EE0();
      if ( !(unsigned __int8)sub_1A1870() )
      {
        callui(15, 0, (unsigned int)&callui, v51, v52, v53);
        v54 = v104 + 48 * v105;
        if ( v54 != v104 )
        {
          LODWORD(v100) = 0;
          v55 = v104;
          n = (size_t)(v23 + 10);
          do
          {
            v112 = -2;
            v113 = -1;
            v114 = 0;
            if ( (unsigned __int8)sub_236190(*(_QWORD *)v55, (const char *)&v112, (_QWORD *)n)
              && !(unsigned __int8)sub_235060((int *)(v55 + 8), (__int64)&v112) )
            {
              *(_BYTE *)(*(_QWORD *)v55 + 35LL) = 3;
              LODWORD(v100) = *(unsigned __int8 *)(*(_QWORD *)(dbg + 56) + 32LL * *(int *)(*(_QWORD *)v55 + 44LL) + 12)
                            | (unsigned int)v100;
            }
            if ( v112 >= -1 && v113 )
            {
              *(_QWORD *)&v114 = 0;
              *(double *)v11.m128_u64 = qfree(v113, (const char *)&v112);
            }
            v55 += 48;
          }
          while ( v54 != v55 );
          a2 = (unsigned int)v100;
          if ( (_DWORD)v100 )
            sub_1E32C0(v100);
        }
      }
      if ( v109 >= -1 && v110 )
      {
        *(_QWORD *)&v111 = 0;
        *(double *)v11.m128_u64 = qfree(v110, (const char *)a2);
      }
      v56 = v104;
      if ( v104 )
      {
        v57 = v105;
        if ( (_QWORD)v105 )
        {
          v58 = 0;
          v59 = v104;
          do
          {
            v60 = v59 + 48 * v58;
            if ( *(int *)(v60 + 8) >= -1 )
            {
              v61 = *(_QWORD *)(v60 + 16);
              if ( v61 )
              {
                *(_QWORD *)(v60 + 24) = 0;
                *(double *)v11.m128_u64 = qfree(v61, (const char *)a2, *(double *)v11.m128_u64);
                v59 = v104;
              }
            }
            ++v58;
          }
          while ( v57 != v58 );
          v56 = v59;
        }
        *(_QWORD *)&v105 = 0;
        qfree(v56, (const char *)a2, *(double *)v11.m128_u64);
      }
      goto LABEL_3;
    }
  }
  if ( v109 >= -1 && v110 )
  {
    *(_QWORD *)&v111 = 0;
    *(double *)v11.m128_u64 = qfree(v110, (const char *)a2, v15);
  }
  v62 = v104;
  if ( v104 )
  {
    v63 = v105;
    if ( (_QWORD)v105 )
    {
      v64 = 0;
      v15 = v104;
      do
      {
        v65 = v15 + 48 * v64;
        if ( *(int *)(v65 + 8) >= -1 )
        {
          v66 = *(_QWORD *)(v65 + 16);
          if ( v66 )
          {
            *(_QWORD *)(v65 + 24) = 0;
            qfree(v66, (const char *)a2);
            v15 = v104;
          }
        }
        ++v64;
      }
      while ( v63 != v64 );
      v62 = v15;
    }
    *(_QWORD *)&v105 = 0;
    *(double *)v11.m128_u64 = qfree(v62, (const char *)a2, v15);
  }
LABEL_10:
  if ( v106 >= -1 && src )
  {
    *(_QWORD *)&v108 = 0;
    *(double *)v11.m128_u64 = qfree(src, (const char *)a2, v15, v16, v17, v18);
  }
  v19 = 0;
  sub_169700(
    (int)"Debugger: failed to update register value\n",
    a2,
    v15,
    (__int64)v16,
    v17,
    v18,
    v11,
    a5,
    a6,
    a7,
    v20,
    v21,
    a10,
    a11,
    v97);
  return v19;
}
