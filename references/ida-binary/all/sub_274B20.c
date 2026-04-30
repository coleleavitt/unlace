__int64 __fastcall sub_274B20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rsi
  char *v10; // rax
  int v11; // r12d
  size_t v12; // r12
  void *v13; // r15
  __int64 v14; // rax
  _BYTE *v15; // rsi
  _BYTE *v16; // rax
  __m128i v17; // xmm0
  void (*v18)(); // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // r15
  _BYTE *v21; // r11
  _BYTE *v22; // r10
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  _BYTE *v25; // r12
  unsigned int v26; // edi
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 i; // r12
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r12
  int *v37; // rax
  int *v38; // rdx
  void *v39; // rdi
  size_t v40; // rdx
  __m128 v41; // xmm0
  void (*v42)(); // rax
  const char *v43; // rsi
  __m128i v44; // xmm0
  const char **v45; // rbx
  __m128i v46; // xmm1
  const char **v47; // r12
  __int64 v48; // rdx
  const char *v49; // r14
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // rdx
  size_t v54; // r12
  __int64 v55; // rbx
  char *v56; // rax
  __int64 v57; // rdi
  __int64 v59; // rax
  const char **v60; // r13
  __int64 v61; // r12
  const char **v62; // r14
  __int64 v63; // rcx
  const char *j; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  char *v67; // rax
  unsigned __int64 v68; // r14
  const void *v69; // r12
  _BYTE *v70; // rax
  __int64 v71; // rcx
  const char *v72; // rdx
  _BYTE *v73; // rdi
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // r10
  _BYTE *v76; // rax
  unsigned __int64 v77; // r10
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r10
  size_t v80; // r11
  __int64 v81; // rdi
  size_t v82; // rax
  _BYTE *v83; // r11
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v88; // [rsp+8h] [rbp-D0h]
  __int64 v89; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v91; // [rsp+18h] [rbp-C0h]
  __int64 v92; // [rsp+20h] [rbp-B8h]
  __int64 *v93; // [rsp+28h] [rbp-B0h]
  size_t v94; // [rsp+30h] [rbp-A8h]
  __int64 v95; // [rsp+30h] [rbp-A8h]
  __int64 v96; // [rsp+30h] [rbp-A8h]
  _BYTE *v97; // [rsp+30h] [rbp-A8h]
  size_t v98; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+38h] [rbp-A0h]
  _BYTE *v101; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v102; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v103; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+38h] [rbp-A0h]
  __int64 v105; // [rsp+40h] [rbp-98h] BYREF
  __m128i v106; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __m128i n; // [rsp+68h] [rbp-70h] BYREF
  _BYTE *v109; // [rsp+80h] [rbp-58h] BYREF
  __int128 v110; // [rsp+88h] [rbp-50h]
  unsigned __int64 v111; // [rsp+98h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v2 = operator new(0x60u);
  v3 = a1[2];
  *(_QWORD *)v2 = 0;
  v4 = v2;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 8) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  v5 = *a1;
  v105 = 0;
  v106 = 0;
  v91 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v5 + 40))(a1, v3, 0);
  v6 = nullptr;
  while ( 1 )
  {
    v7 = v106.m128i_i64[1];
    v8 = v106.m128i_i64[0];
    v9 = (char *)v105;
    if ( v91 < a1[2] || v91 >= a1[3] )
      break;
    if ( v106.m128i_i64[1] < (unsigned __int64)(v106.m128i_i64[0] + 1) )
    {
      v105 = qvector_reserve(&v105, v105, v106.m128i_i64[0] + 1, 32);
      v8 = v106.m128i_i64[0];
      v9 = (char *)v105;
    }
    v10 = &v9[32 * v8];
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    v93 = (__int64 *)v10;
    ++v106.m128i_i64[0];
    *((_QWORD *)v10 + 3) = v91;
    (*(void (__fastcall **)(void **))(*a1 + 64LL))(&src);
    v11 = *(_DWORD *)(a2 + 40);
    if ( (v11 & 0x800000) != 0 )
    {
      v17.m128i_i64[0] = 0;
      v110 = 0;
      v109 = nullptr;
      v70 = (_BYTE *)qvector_reserve(&v109, 0, 2, 1);
      v71 = v110;
      v109 = v70;
      if ( (unsigned __int64)v110 <= 1 )
      {
        v70[v110] = BYTE2(v11) & 0x7F;
        v70 = v109;
        if ( !v71 )
        {
          v109[1] = BYTE2(v11) & 0x7F;
          v70 = v109;
        }
      }
      *(_QWORD *)&v110 = 2;
      v72 = &s1;
      v70[1] = 0;
      if ( (_QWORD)v110 )
        v72 = v109;
      v15 = v93;
      sub_272F30(&src, v93, v72, 0);
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        *(double *)v17.m128i_i64 = qfree(v109, (const char *)v93);
      }
    }
    else
    {
      v12 = n.m128i_i64[0];
      v13 = nullptr;
      if ( n.m128i_i64[0] )
      {
        v13 = (void *)qalloc_or_throw(n.m128i_i64[0]);
        memcpy(v13, src, v12);
      }
      v14 = v93[1];
      v15 = (_BYTE *)*v93;
      if ( v93[2] < (unsigned __int64)(v14 + 1) )
      {
        v84 = qvector_reserve(v93, v15, v14 + 1, 24);
        *v93 = v84;
        v15 = (_BYTE *)v84;
        v14 = v93[1];
      }
      v16 = &v15[24 * v14];
      v17 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      *(__m128i *)(v16 + 8) = v17;
      *(_QWORD *)v16 = v13;
      ++v93[1];
    }
    if ( (*(_BYTE *)(a2 + 41) & 2) == 0 )
    {
      v18 = *(void (**)())(*a1 + 72LL);
      if ( v18 != nullsub_63 )
      {
        v15 = v93;
        ((void (__fastcall *)(_QWORD *, __int64 *, unsigned __int64))v18)(a1, v93, v91);
      }
    }
    v19 = v93[1];
    v92 = *v93 + 24 * v19;
    if ( v92 != *v93 )
    {
      v20 = (__int64 *)*v93;
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = v20[1];
          if ( (*(_BYTE *)(a2 + 41) & 0x10) != 0 )
            break;
          if ( v23 > 1 )
          {
            v73 = (_BYTE *)*v20;
            v74 = v23 - 1;
            v75 = *v20 + v23 - 1;
            v76 = (_BYTE *)v75;
            if ( *v20 < v75 )
            {
              while ( *(v76 - 1) == 32 )
              {
                if ( v73 == --v76 )
                  goto LABEL_139;
              }
              v74 = v76 - v73;
              if ( v76 != v73 )
                goto LABEL_120;
LABEL_139:
              if ( !v73 )
              {
LABEL_126:
                v15 = v73;
                while ( *v15 == 32 )
                {
                  if ( ++v15 == (_BYTE *)v75 )
                  {
                    if ( v73 >= v15 )
                      goto LABEL_22;
                    *v73 = *v15;
                    v81 = *v20;
                    goto LABEL_137;
                  }
                }
                if ( v73 >= v15 )
                  goto LABEL_22;
                v100 = v75 - (_QWORD)v15;
                v94 = v75 - (_QWORD)v15 + 1;
                memmove(v73, v15, v94);
                v79 = v100;
                v15 = (_BYTE *)*v20;
                v80 = v94;
                v81 = *v20;
                if ( v100 )
                {
                  v82 = v20[1];
                  if ( v82 < v94 )
                  {
                    if ( v20[2] < v94 )
                    {
                      v81 = qvector_reserve(v20, v15, v94, 1);
                      v79 = v100;
                      v80 = v94;
                      *v20 = v81;
                      v82 = v20[1];
                    }
                    v103 = v79;
                    v98 = v80;
                    memset((void *)(v82 + v81), 0, v80 - v82);
                    v15 = (_BYTE *)*v20;
                    v79 = v103;
                    v20[1] = v98;
                  }
                  else if ( v94 != v82 )
                  {
                    v20[1] = v94;
                  }
                  v15[v79] = 0;
                  goto LABEL_22;
                }
LABEL_137:
                if ( !v81 )
                  goto LABEL_22;
                v20[1] = 0;
                *(double *)v17.m128i_i64 = qfree(v81, v15);
                goto LABEL_31;
              }
              v20[1] = 0;
              *(double *)v17.m128i_i64 = qfree(v73, v15);
              *v20 = 0;
              v20[2] = 0;
            }
            else
            {
LABEL_120:
              v77 = v74 + 1;
              if ( v23 < v74 + 1 )
              {
                if ( v20[2] < v77 )
                {
                  v104 = v74;
                  v99 = v74 + 1;
                  v86 = qvector_reserve(v20, *v20, v74 + 1, 1);
                  v23 = v20[1];
                  v74 = v104;
                  *v20 = v86;
                  v73 = (_BYTE *)v86;
                  v77 = v99;
                }
                v15 = nullptr;
                v96 = v77;
                v102 = v74;
                memset(&v73[v23], 0, v77 - v23);
                v76 = (_BYTE *)(*v20 + v102);
                v20[1] = v96;
              }
              else if ( v77 != v23 )
              {
                v20[1] = v77;
              }
              *v76 = 0;
            }
            v78 = v20[1];
            if ( v78 > 1 )
            {
              v73 = (_BYTE *)*v20;
              v75 = *v20 + v78 - 1;
              if ( *v20 < v75 )
                goto LABEL_126;
            }
          }
LABEL_22:
          v20 += 3;
          if ( (__int64 *)v92 == v20 )
            goto LABEL_32;
        }
        if ( v23 <= 1 )
          goto LABEL_22;
        v24 = *v20;
        v25 = (_BYTE *)(*v20 + v23 - 1);
        if ( *v20 < (unsigned __int64)v25 )
        {
          while ( 1 )
          {
            v26 = (char)*(v25 - 1);
            if ( v26 > 0x7F || !isspace(v26) )
              break;
            if ( (_BYTE *)v24 == --v25 )
              goto LABEL_29;
          }
        }
        v21 = &v25[-v24];
        if ( v25 != (_BYTE *)v24 )
        {
          v22 = v21 + 1;
          if ( v23 < (unsigned __int64)(v21 + 1) )
          {
            if ( v20[2] < (unsigned __int64)v22 )
            {
              v97 = v21 + 1;
              v85 = qvector_reserve(v20, v24, v21 + 1, 1);
              v23 = v20[1];
              v21 = &v25[-v24];
              *v20 = v85;
              v24 = v85;
              v22 = v97;
            }
            v15 = nullptr;
            v101 = v21;
            v95 = (__int64)v22;
            memset((void *)(v24 + v23), 0, (size_t)&v22[-v23]);
            v83 = &v101[*v20];
            v20[1] = v95;
            v25 = v83;
          }
          else if ( v22 != (_BYTE *)v23 )
          {
            v20[1] = (__int64)v22;
          }
          *v25 = 0;
          goto LABEL_22;
        }
LABEL_29:
        if ( !v24 )
          goto LABEL_22;
        v20[1] = 0;
        *(double *)v17.m128i_i64 = qfree(v24, v15);
LABEL_31:
        *v20 = 0;
        v20 += 3;
        *(v20 - 1) = 0;
        if ( (__int64 *)v92 == v20 )
        {
LABEL_32:
          v19 = v93[1];
          break;
        }
      }
    }
    if ( (unsigned __int64)v6 < v19 )
      v6 = (const char *)v19;
    if ( src )
    {
      n.m128i_i64[0] = 0;
      *(double *)v17.m128i_i64 = qfree(src, v15);
    }
    v91 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64, double))(*a1 + 40LL))(
            a1,
            v91,
            1,
            *(double *)v17.m128i_i64);
  }
  v27 = _mm_loadu_si128((const __m128i *)(v4 + 8));
  v28 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v105;
  *(_QWORD *)(v4 + 8) = v8;
  *(_QWORD *)(v4 + 16) = v7;
  if ( !v8 )
    v6 = (_BYTE *)(&dword_0 + 1);
  v105 = v28;
  v106 = v27;
  if ( v28 )
  {
    v88 = v27.m128i_i64[0];
    if ( v27.m128i_i64[0] )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v28 + 32 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v32 = v30[1];
          if ( v32 )
          {
            for ( i = 0; i != v32; ++i )
            {
              v34 = (__int64 *)(v31 + 24 * i);
              v35 = *v34;
              if ( *v34 )
              {
                v34[1] = 0;
                qfree(v35, v9);
                v31 = *v30;
              }
            }
          }
          v30[1] = 0;
          qfree(v31, v9);
          v28 = v105;
        }
        ++v29;
      }
      while ( v88 != v29 );
    }
    v106.m128i_i64[0] = 0;
    qfree(v28, v9);
  }
  src = nullptr;
  n = 0;
  if ( v6 )
  {
    v9 = nullptr;
    src = (void *)qvector_reserve(&src, 0, v6, 4);
    memset((char *)src + 4 * n.m128i_i64[0], 0, 4LL * (_QWORD)&v6[-n.m128i_i64[0]]);
    n.m128i_i64[0] = (__int64)v6;
  }
  v36 = *(_QWORD *)(v4 + 8);
  if ( v36 )
  {
    v60 = *(const char ***)v4;
    v61 = *(_QWORD *)v4 + 32 * v36;
    if ( v61 != *(_QWORD *)v4 )
    {
      v62 = *(const char ***)v4;
      if ( v6 != v60[1] )
      {
LABEL_88:
        v9 = (char *)v6;
        v110 = 0;
        v109 = nullptr;
        sub_274880(v60, v6, (unsigned __int64)&v109);
      }
      if ( v6 )
      {
        while ( 1 )
        {
          v63 = 0;
          for ( j = nullptr; j != v6; ++j )
          {
            v65 = *(_QWORD *)&(*v60)[v63 + 8];
            if ( v65 )
            {
              v66 = v65 - 1;
              v9 = (char *)src + 4 * (_QWORD)j;
              if ( *(int *)v9 < v66 )
                *(_DWORD *)v9 = v66;
            }
            v63 += 24;
          }
          v62 += 4;
          v60 = v62;
          if ( (const char **)v61 == v62 )
            break;
          if ( v6 != v62[1] )
          {
            v9 = (char *)v6;
            v110 = 0;
            v109 = nullptr;
            sub_274880(v62, v6, (unsigned __int64)&v109);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v62 += 4;
          if ( (const char **)v61 == v62 )
            break;
          v60 = v62;
          if ( v62[1] )
            goto LABEL_88;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)src = 1;
  }
  v37 = (int *)src;
  v38 = (int *)((char *)src + 4 * n.m128i_i64[0]);
  if ( v38 != src )
  {
    do
    {
      if ( *v37 > 100 )
        *v37 = 100;
      ++v37;
    }
    while ( v38 != v37 );
    v37 = (int *)src;
  }
  v39 = *(void **)(v4 + 24);
  v40 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 24) = v37;
  v41 = _mm_loadh_ps((const double *)&n.m128i_i64[1]);
  src = v39;
  n.m128i_i64[1] = v40;
  *(__m128 *)(v4 + 32) = v41;
  if ( v39 )
  {
    n.m128i_i64[0] = 0;
    qfree(v39, v9);
  }
  src = nullptr;
  n = 0;
  v42 = *(void (**)())(*a1 + 128LL);
  if ( v42 == nullsub_64 )
  {
    v110 = 0;
    v109 = nullptr;
  }
  else
  {
    ((void (__fastcall *)(_QWORD *, void **))v42)(a1, &src);
    v109 = nullptr;
    v110 = 0;
    if ( n.m128i_i64[0] < (unsigned __int64)v6 )
    {
      if ( n.m128i_i64[0] )
      {
        v67 = (char *)src + 24 * n.m128i_i64[0] - 24;
        if ( v67 != (char *)&v109 )
        {
          v68 = *((_QWORD *)v67 + 1);
          if ( v68 >= 2 )
          {
            v69 = *(const void **)v67;
            v109 = (_BYTE *)qvector_reserve(&v109, 0, *((_QWORD *)v67 + 1), 1);
            *(_QWORD *)&v110 = v68;
            memmove(v109, v69, v68 - 1);
            v109[v68 - 1] = 0;
          }
        }
      }
    }
  }
  v43 = v6;
  sub_274880((const char **)&src, v6, (unsigned __int64)&v109);
  v44 = _mm_loadu_si128(&n);
  v45 = (const char **)src;
  v46 = _mm_loadu_si128((const __m128i *)(v4 + 56));
  src = *(void **)(v4 + 48);
  *(_QWORD *)(v4 + 48) = v45;
  v47 = &v45[3 * v44.m128i_i64[0]];
  *(__m128i *)(v4 + 56) = v44;
  n = v46;
  if ( v47 != v45 )
  {
    v48 = *(_QWORD *)(v4 + 80);
    v89 = v4 + 72;
    do
    {
      v49 = &s1;
      if ( v45[1] )
        v49 = *v45;
      v43 = *(const char **)(v4 + 72);
      v105 = (__int64)v49;
      v50 = v48 + 1;
      v51 = *(_QWORD *)(v4 + 88);
      if ( &v105 < (__int64 *)v43 || &v105 >= (__int64 *)&v43[8 * v51] )
      {
        if ( v51 < v50 )
        {
          v52 = qvector_reserve(v89, v43, v48 + 1, 8);
          v48 = *(_QWORD *)(v4 + 80);
          v49 = (const char *)v105;
          *(_QWORD *)(v4 + 72) = v52;
          v43 = (const char *)v52;
        }
      }
      else if ( v51 < v50 )
      {
        v59 = qvector_reserve(v89, v43, v48 + 1, 8);
        *(_QWORD *)(v4 + 72) = v59;
        v48 = *(_QWORD *)(v4 + 80);
        v43 = (const char *)v59;
      }
      *(_QWORD *)&v43[8 * v48] = v49;
      v45 += 3;
      v48 = *(_QWORD *)(v4 + 80) + 1LL;
      *(_QWORD *)(v4 + 80) = v48;
    }
    while ( v47 != v45 );
  }
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    *(double *)v44.m128i_i64 = qfree(v109, v43);
  }
  v53 = (char *)src;
  if ( src )
  {
    v54 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      v55 = 0;
      do
      {
        v56 = &v53[24 * v55];
        v57 = *(_QWORD *)v56;
        if ( *(_QWORD *)v56 )
        {
          *((_QWORD *)v56 + 1) = 0;
          *(double *)v44.m128i_i64 = qfree(v57, v43, *(double *)v44.m128i_i64);
          v53 = (char *)src;
        }
        ++v55;
      }
      while ( v54 != v55 );
    }
    n.m128i_i64[0] = 0;
    qfree(v53, v43, *(double *)v44.m128i_i64);
  }
  return v4;
}
