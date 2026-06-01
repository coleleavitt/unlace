unsigned __int64 __fastcall sub_343E20(__m128i *a1, __int64 a2, char *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __m128i *v6; // r15
  __m128i *v7; // r12
  __int64 v8; // rax
  const char *v9; // r13
  const char *v10; // r14
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i *v16; // r14
  __int64 v17; // r13
  const char *v18; // r12
  const char *v19; // rdi
  __int64 v20; // rax
  const char *v21; // rsi
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int32 v25; // eax
  __int64 v26; // r12
  __m128i v27; // xmm0
  size_t v28; // rdx
  void *v29; // r13
  char *v30; // rdx
  __m128i *v31; // rax
  __m128i *v32; // rax
  const void *v33; // rsi
  void *v34; // rax
  const void *v35; // rsi
  const __m128i *i; // r12
  __m128i v38; // xmm0
  __m128i *v39; // rax
  void *v40; // rax
  __int32 v41; // eax
  __int64 v42; // rbx
  __m128i v43; // xmm0
  size_t v44; // r13
  size_t v45; // r14
  void *v46; // r15
  const char *v47; // rsi
  void *v48; // rax
  void *v49; // rax
  const void *v50; // rsi
  void *v51; // rax
  const void *v52; // rsi
  double v53; // xmm0_8
  void *v54; // rax
  int v55; // eax
  __int64 v56; // rbx
  __m128i v57; // xmm0
  size_t v58; // r13
  size_t v59; // r12
  __m128i v60; // xmm0
  void *v61; // r14
  __m128i *v62; // r15
  __m128i *n; // [rsp+0h] [rbp-148h]
  size_t nc; // [rsp+0h] [rbp-148h]
  __m128i *na; // [rsp+0h] [rbp-148h]
  size_t nb; // [rsp+0h] [rbp-148h]
  __m128i *s2; // [rsp+8h] [rbp-140h]
  char *s2a; // [rsp+8h] [rbp-140h]
  __int64 v69; // [rsp+10h] [rbp-138h]
  char *v70; // [rsp+18h] [rbp-130h]
  char *v71; // [rsp+18h] [rbp-130h]
  void *v72; // [rsp+18h] [rbp-130h]
  void *v73; // [rsp+18h] [rbp-130h]
  void *v74; // [rsp+20h] [rbp-128h]
  const char *v75; // [rsp+20h] [rbp-128h]
  void *v76; // [rsp+20h] [rbp-128h]
  void *v77; // [rsp+28h] [rbp-120h]
  void *v78; // [rsp+28h] [rbp-120h]
  int src; // [rsp+30h] [rbp-118h]
  void *srca; // [rsp+30h] [rbp-118h]
  signed __int64 v81; // [rsp+38h] [rbp-110h]
  __m128i v82; // [rsp+40h] [rbp-108h] BYREF
  __m128i v83; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v84; // [rsp+60h] [rbp-E8h]
  __int64 v85; // [rsp+68h] [rbp-E0h]
  __int64 v86; // [rsp+70h] [rbp-D8h]
  int v87; // [rsp+78h] [rbp-D0h]
  size_t v88; // [rsp+80h] [rbp-C8h]
  __int64 v89; // [rsp+88h] [rbp-C0h]
  int v90; // [rsp+90h] [rbp-B8h]
  size_t v91; // [rsp+98h] [rbp-B0h]
  __m128i v92; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v93; // [rsp+B0h] [rbp-98h]
  __int64 v94; // [rsp+C0h] [rbp-88h]
  __int64 v95; // [rsp+C8h] [rbp-80h]
  void *v96; // [rsp+D0h] [rbp-78h]
  __int128 v97; // [rsp+D8h] [rbp-70h]
  __m128i *v98; // [rsp+E8h] [rbp-60h]
  __int128 v99; // [rsp+F0h] [rbp-58h]
  __int64 v100; // [rsp+100h] [rbp-48h]
  unsigned __int64 v101; // [rsp+108h] [rbp-40h]

  v69 = a2;
  v70 = a3;
  v101 = __readfsqword(0x28u);
  v3 = a2 - (_QWORD)a1;
  if ( a2 - (__int64)a1 <= 1536 )
    return v101 - __readfsqword(0x28u);
  while ( 2 )
  {
    v81 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
    v5 = v81 >> 1;
    if ( !v70 )
    {
      v75 = (const char *)(v5 - 1);
      for ( i = &a1[6 * v5 - 6]; ; i -= 6 )
      {
        v41 = i[2].m128i_i32[0];
        v42 = i[2].m128i_i64[1];
        v82 = _mm_loadu_si128(i);
        v43 = _mm_loadu_si128(i + 1);
        LODWORD(v84) = v41;
        v83 = v43;
        if ( v42 )
          v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        v78 = nullptr;
        v44 = i[3].m128i_u64[1];
        v88 = 0;
        if ( v44 )
        {
          v51 = (void *)qalloc_or_throw(v44);
          v52 = (const void *)i[3].m128i_i64[0];
          v78 = v51;
          v88 = v44;
          memcpy(v51, v52, v44);
        }
        srca = nullptr;
        v45 = i[5].m128i_u64[0];
        v91 = 0;
        if ( v45 )
        {
          v49 = (void *)qalloc_or_throw(v45);
          v50 = (const void *)i[4].m128i_i64[1];
          srca = v49;
          v91 = v45;
          memcpy(v49, v50, v45);
        }
        v92 = _mm_load_si128(&v82);
        v38 = _mm_load_si128(&v83);
        LODWORD(v94) = v84;
        v93 = v38;
        if ( v42 )
          v72 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        else
          v72 = nullptr;
        v46 = nullptr;
        v97 = 0;
        if ( v44 )
        {
          v46 = (void *)qalloc_or_throw(v44);
          *((_QWORD *)&v97 + 1) = v44;
          memcpy(v46, v78, v44);
          *(_QWORD *)&v97 = v44;
        }
        na = nullptr;
        v99 = 0;
        if ( v45 )
        {
          na = (__m128i *)qalloc_or_throw(v45);
          *((_QWORD *)&v99 + 1) = v45;
          memcpy(na, srca, v45);
          *(_QWORD *)&v99 = v45;
        }
        v96 = v46;
        v47 = v75;
        v95 = (__int64)v72;
        v98 = na;
        sub_342EE0((__int64)a1, (__int64)v75, v81, &v92);
        if ( v72 )
          *(double *)v38.m128i_i64 = qfree(v72, v75);
        if ( v46 )
          break;
        v39 = na;
        if ( na )
          goto LABEL_54;
        if ( !v75 )
        {
LABEL_79:
          if ( v42 )
            *(double *)v38.m128i_i64 = qfree(v42, v75, *(double *)v38.m128i_i64);
          if ( v78 )
          {
            *(double *)v38.m128i_i64 = qfree(v78, v75, *(double *)v38.m128i_i64);
            v48 = srca;
            v88 = 0;
            if ( !srca )
              goto LABEL_89;
LABEL_88:
            qfree(v48, v75, *(double *)v38.m128i_i64);
          }
          else
          {
            v48 = srca;
            if ( srca )
              goto LABEL_88;
          }
LABEL_89:
          if ( v69 - (__int64)a1 <= 96 )
            return v101 - __readfsqword(0x28u);
          while ( 2 )
          {
            v69 -= 96;
            v55 = *(_DWORD *)(v69 + 32);
            v56 = *(_QWORD *)(v69 + 40);
            v82 = _mm_loadu_si128((const __m128i *)v69);
            v57 = _mm_loadu_si128((const __m128i *)(v69 + 16));
            LODWORD(v84) = v55;
            v83 = v57;
            if ( v56 )
              v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
            v73 = nullptr;
            v88 = 0;
            v58 = *(_QWORD *)(v69 + 56);
            if ( v58 )
            {
              v73 = (void *)qalloc_or_throw(*(_QWORD *)(v69 + 56));
              v88 = v58;
              memcpy(v73, *(const void **)(v69 + 48), v58);
            }
            v76 = nullptr;
            v91 = 0;
            v59 = *(_QWORD *)(v69 + 80);
            if ( v59 )
            {
              v76 = (void *)qalloc_or_throw(*(_QWORD *)(v69 + 80));
              v91 = v59;
              memcpy(v76, *(const void **)(v69 + 72), v59);
            }
            if ( a1 != (__m128i *)v69 )
              sub_3428F0((__m128i *)v69, a1);
            v92 = _mm_load_si128(&v82);
            v60 = _mm_load_si128(&v83);
            LODWORD(v94) = v84;
            v93 = v60;
            if ( v56 )
              nb = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
            else
              nb = 0;
            v61 = nullptr;
            v97 = 0;
            if ( v58 )
            {
              v61 = (void *)qalloc_or_throw(v58);
              *((_QWORD *)&v97 + 1) = v58;
              memcpy(v61, v73, v58);
              *(_QWORD *)&v97 = v58;
            }
            v53 = 0.0;
            v62 = nullptr;
            v99 = 0;
            if ( v59 )
            {
              v62 = (__m128i *)qalloc_or_throw(v59);
              *((_QWORD *)&v99 + 1) = v59;
              memcpy(v62, v76, v59);
              *(_QWORD *)&v99 = v59;
            }
            v96 = v61;
            v95 = nb;
            v98 = v62;
            sub_342EE0((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v69 - (__int64)a1) >> 5), &v92);
            if ( nb )
              v53 = qfree(nb, nullptr);
            if ( v61 )
            {
              *(_QWORD *)&v97 = 0;
              v53 = qfree(v61, nullptr);
              *((_QWORD *)&v97 + 1) = 0;
              if ( !v62 )
                goto LABEL_93;
            }
            else if ( !v62 )
            {
LABEL_93:
              if ( v56 )
                v53 = qfree(v56, nullptr, v53);
              if ( v73 )
              {
                v53 = qfree(v73, nullptr, v53);
                v54 = v76;
                v88 = 0;
                if ( v76 )
                  goto LABEL_97;
              }
              else
              {
                v54 = v76;
                if ( v76 )
LABEL_97:
                  qfree(v54, nullptr, v53);
              }
              if ( v69 - (__int64)a1 <= 96 )
                return v101 - __readfsqword(0x28u);
              continue;
            }
            break;
          }
          v53 = qfree(v62, nullptr, v53);
          goto LABEL_93;
        }
LABEL_56:
        --v75;
        if ( v42 )
          *(double *)v38.m128i_i64 = qfree(v42, v47, *(double *)v38.m128i_i64);
        if ( v78 )
        {
          *(double *)v38.m128i_i64 = qfree(v78, v47, *(double *)v38.m128i_i64);
          v40 = srca;
          v88 = 0;
          if ( !srca )
            continue;
LABEL_60:
          qfree(v40, v47, *(double *)v38.m128i_i64);
          continue;
        }
        v40 = srca;
        if ( srca )
          goto LABEL_60;
      }
      *(_QWORD *)&v97 = 0;
      *(double *)v38.m128i_i64 = qfree(v46, v75);
      v39 = na;
      *((_QWORD *)&v97 + 1) = 0;
      if ( na )
LABEL_54:
        *(double *)v38.m128i_i64 = qfree(v39, v75, *(double *)v38.m128i_i64);
      if ( !v75 )
        goto LABEL_79;
      goto LABEL_56;
    }
    v71 = v70 - 1;
    v6 = a1 + 6;
    v7 = &a1[6 * v5];
    n = (__m128i *)(v69 - 96);
    v8 = a1[9].m128i_i64[1];
    if ( v7[3].m128i_i64[1] )
    {
      v9 = (const char *)v7[3].m128i_i64[0];
      v10 = &s1;
      if ( !v8 )
        goto LABEL_6;
      goto LABEL_5;
    }
    if ( v8 )
    {
      v9 = &s1;
LABEL_5:
      v10 = (const char *)a1[9].m128i_i64[0];
LABEL_6:
      v11 = &s1;
      if ( strcmp(v10, v9) < 0 )
      {
        if ( *(_QWORD *)(v69 - 40) )
          v11 = *(const char **)(v69 - 48);
        LODWORD(s2) = (_DWORD)v11;
        if ( strcmp(v9, v11) >= 0 )
        {
          if ( strcmp(v10, v11) >= 0 )
          {
LABEL_11:
            sub_343C40(a1, a1 + 6, v12, v13, v14, v15);
            goto LABEL_12;
          }
          goto LABEL_48;
        }
LABEL_43:
        sub_343C40(a1, v7, v12, v13, v14, v15);
        goto LABEL_12;
      }
      if ( !*(_QWORD *)(v69 - 40) )
      {
LABEL_46:
        LODWORD(s2) = (_DWORD)v11;
        if ( strcmp(v10, v11) < 0 )
          goto LABEL_11;
        if ( strcmp(v9, v11) < 0 )
          goto LABEL_48;
        goto LABEL_43;
      }
LABEL_45:
      v11 = *(const char **)(v69 - 48);
      goto LABEL_46;
    }
    if ( *(_QWORD *)(v69 - 40) )
    {
      v10 = &s1;
      v9 = &s1;
      goto LABEL_45;
    }
    if ( strcmp(&s1, &s1) >= 0 )
      goto LABEL_43;
LABEL_48:
    sub_343C40(a1, n, v12, v13, v14, v15);
LABEL_12:
    v16 = (__m128i *)v69;
    while ( 2 )
    {
      v17 = a1[3].m128i_i64[1];
      while ( 1 )
      {
        v20 = v6[3].m128i_i64[1];
        if ( v17 )
        {
          v18 = (const char *)a1[3].m128i_i64[0];
          v19 = &s1;
          if ( !v20 )
            goto LABEL_15;
          goto LABEL_19;
        }
        v18 = &s1;
        if ( !v20 )
          break;
LABEL_19:
        v19 = (const char *)v6[3].m128i_i64[0];
LABEL_15:
        if ( strcmp(v19, v18) >= 0 )
          goto LABEL_20;
        v6 += 6;
      }
      do
      {
LABEL_20:
        v16 -= 6;
        v21 = &s1;
        if ( v16[3].m128i_i64[1] )
          v21 = (const char *)v16[3].m128i_i64[0];
      }
      while ( strcmp(v18, v21) < 0 );
      if ( v6 < v16 )
      {
        v25 = v6[2].m128i_i32[0];
        v26 = v6[2].m128i_i64[1];
        v92 = _mm_loadu_si128(v6);
        v27 = _mm_loadu_si128(v6 + 1);
        LODWORD(v94) = v25;
        v93 = v27;
        if ( v26 )
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        v28 = v6[3].m128i_u64[1];
        v29 = nullptr;
        v97 = 0;
        if ( v28 )
        {
          nc = v28;
          v34 = (void *)qalloc_or_throw(v28);
          v35 = (const void *)v6[3].m128i_i64[0];
          v29 = v34;
          *((_QWORD *)&v97 + 1) = nc;
          memcpy(v34, v35, nc);
          *(_QWORD *)&v97 = nc;
        }
        v30 = (char *)v6[5].m128i_i64[0];
        n = nullptr;
        v99 = 0;
        if ( v30 )
        {
          s2a = v30;
          v32 = (__m128i *)qalloc_or_throw(v30);
          v33 = (const void *)v6[4].m128i_i64[1];
          n = v32;
          *((_QWORD *)&v99 + 1) = s2a;
          memcpy(v32, v33, (size_t)s2a);
          *(_QWORD *)&v99 = s2a;
        }
        sub_3428F0(v6, v16);
        v95 = v26;
        v96 = v29;
        v98 = n;
        s2 = &v92;
        sub_3428F0(v16, &v92);
        if ( v26 )
          *(double *)v27.m128i_i64 = qfree(v26, v92.m128i_i8);
        if ( v29 )
        {
          *(_QWORD *)&v97 = 0;
          *(double *)v27.m128i_i64 = qfree(v29, v92.m128i_i8, *(double *)v27.m128i_i64);
          v31 = n;
          *((_QWORD *)&v97 + 1) = 0;
          if ( n )
            goto LABEL_34;
        }
        else
        {
          v31 = n;
          if ( n )
LABEL_34:
            qfree(v31, v92.m128i_i8, *(double *)v27.m128i_i64);
        }
        v6 += 6;
        continue;
      }
      break;
    }
    sub_343E20(
      (_DWORD)v6,
      v69,
      (_DWORD)v71,
      v22,
      v23,
      v24,
      (__int64)n,
      (_DWORD)s2,
      v69,
      (__int64)v71,
      (__int64)v74,
      (__int64)v77,
      src,
      v81,
      v82.m128i_i32[0],
      v82.m128i_i32[2],
      v83.m128i_i32[0],
      v83.m128i_i32[2],
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92.m128i_i32[0],
      v92.m128i_i32[2],
      v93.m128i_i32[0],
      v93.m128i_i32[2],
      v94,
      v95,
      (_DWORD)v96,
      v97,
      *((__int64 *)&v97 + 1),
      (_DWORD)v98,
      v99,
      DWORD2(v99),
      v100);
    v3 = (char *)v6 - (char *)a1;
    if ( (char *)v6 - (char *)a1 > 1536 )
    {
      v69 = (__int64)v6;
      continue;
    }
    return v101 - __readfsqword(0x28u);
  }
}
