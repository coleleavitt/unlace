double __fastcall liblicui::menu_license_manager_borrow(
        __int64 a1,
        __int64 a2,
        double result,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v8; // r12d
  unsigned __int64 v10; // rax
  double v11; // xmm0_8
  const char *v12; // rsi
  __int64 v13; // r13
  time_t v14; // rdx
  __int64 v15; // r13
  size_t v16; // r12
  int v17; // r9d
  char *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rdi
  char *v22; // rbp
  __m128i v23; // xmm0
  char *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rsi
  const char *v27; // rcx
  __int64 v28; // rdi
  const char *v29; // rdx
  size_t v30; // r9
  char *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // r12
  __int64 v43; // r8
  __int64 v44; // r10
  char *v45; // rsi
  __int64 v46; // r12
  char *v47; // rsi
  __int64 v48; // r8
  __int64 v49; // rdx
  void *v50; // rbp
  __m128i v51; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+10h] [rbp-B8h]
  __int64 v53; // [rsp+18h] [rbp-B0h]
  __int64 v54; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+28h] [rbp-A0h]
  char *v56; // [rsp+40h] [rbp-88h] BYREF
  __m128i v57; // [rsp+48h] [rbp-80h] BYREF
  char s[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp-40h]

  v8 = *(_DWORD *)(a2 + 12);
  v59 = __readfsqword(0x28u);
  if ( v8 != 1 )
  {
    if ( v8 )
      return result;
    v10 = *(_QWORD *)(a1 + 264);
    v11 = 0.0;
    *(_BYTE *)(a1 + 320) = 1;
    v54 = 0;
    v55 = 0;
    if ( v10 > 1 )
      goto LABEL_5;
    if ( *(_BYTE *)(a1 + 304) )
    {
      *(_QWORD *)(a1 + 288) = 0;
      goto LABEL_11;
    }
    v12 = &s1;
    if ( v10 )
LABEL_5:
      v12 = *(const char **)(a1 + 256);
    *(_QWORD *)(a1 + 288) = parse_borrow_date(0, v12);
    v13 = sub_55C580();
    v14 = v13 + *(_QWORD *)(a1 + 288) - time(nullptr);
    *(_QWORD *)(a1 + 288) = v14;
    if ( v13 > v14 )
    {
      v25 = v55;
      v26 = v54;
      if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
      {
        v54 = qvector_reserve(&v54, v54, v55 + 1, 24);
        v25 = v55;
        v26 = v54;
      }
      v11 = 0.0;
      v27 = (const char *)&unk_5C2F25;
      v28 = v26 + 24 * v25;
      *(_QWORD *)v28 = 0;
      *(_OWORD *)(v28 + 8) = 0;
      *(_QWORD *)&v55 = v55 + 1;
      if ( *(__int64 *)(a1 + 288) > 0 )
        v27 = " (in the past)";
      v29 = &s1;
      if ( *(_QWORD *)(a1 + 264) )
        v29 = *(const char **)(a1 + 256);
      sub_169A50((__int64 *)v28, (__int64)"Wrong borrow end time '%s'%s", v29, v27);
LABEL_30:
      callui(203, 16, a1, 0, v8, a7, v11);
      v56 = nullptr;
      v57 = 0;
      if ( !(_QWORD)v55 )
      {
LABEL_31:
        result = callui(203, 18, a1, 0, (unsigned int)&v56, v30, v51.m128i_i64[0]);
        v31 = v56;
        *(_BYTE *)(a1 + 320) = 0;
        if ( v31 )
        {
          v57.m128i_i64[0] = 0;
          result = qfree(v31, (const char *)&word_12, result);
        }
        v32 = v54;
        if ( v54 )
        {
          v33 = v55;
          if ( (_QWORD)v55 )
          {
            v34 = 0;
            do
            {
              v35 = (__int64 *)(v32 + 24 * v34);
              v36 = *v35;
              if ( *v35 )
              {
                v35[1] = 0;
                result = qfree(v36, (const char *)&word_12, result);
                v32 = v54;
              }
              ++v34;
            }
            while ( v33 != v34 );
          }
          *(_QWORD *)&v55 = 0;
          return qfree(v32, (const char *)&word_12, result);
        }
        return result;
      }
      v37 = v54;
      v38 = 2 * v55 - 2;
      v39 = v54 + 24 * v55;
      if ( v54 == v39 )
      {
        if ( 2LL * (_QWORD)v55 == 2 )
          goto LABEL_31;
      }
      else
      {
        v40 = v54;
        do
        {
          v41 = *(_QWORD *)(v40 + 8);
          if ( v41 )
            v38 = v38 + v41 - 1;
          v40 += 24;
        }
        while ( v40 != v39 );
        if ( !v38 )
          goto LABEL_56;
      }
      v56 = (char *)qvector_reserve(&v56, 0, v38, 1);
      v37 = v54;
      v39 = v54 + 24 * v55;
      if ( v54 == v39 )
        goto LABEL_31;
      do
      {
LABEL_56:
        v46 = v57.m128i_i64[0];
        if ( v57.m128i_i64[0] > 1uLL )
        {
          v47 = v56;
          v48 = v57.m128i_i64[0] - 1;
          v49 = v57.m128i_i64[0] + 2;
          if ( v57.m128i_i64[1] < (unsigned __int64)(v57.m128i_i64[0] + 2) )
          {
            v52 = v57.m128i_i64[0] - 1;
            v51.m128i_i64[0] = v57.m128i_i64[0] + 2;
            v56 = (char *)qvector_reserve(&v56, v56, v49, 1);
            v48 = v52;
            v47 = v56;
            v49 = v51.m128i_i64[0];
          }
          v57.m128i_i64[0] = v49;
          v47[v46 + 1] = 0;
          *(_WORD *)&v56[v48] = 8251;
        }
        v42 = *(_QWORD *)(v37 + 8);
        if ( v42 )
        {
          v30 = v42 - 1;
          if ( v42 != 1 )
          {
            v43 = v57.m128i_i64[0];
            v44 = v42 - 1;
            if ( v57.m128i_i64[0] )
            {
              v43 = v57.m128i_i64[0] - 1;
              v44 = v30 + v57.m128i_i64[0] - 1;
              v42 += v57.m128i_i64[0] - 1;
            }
            v45 = v56;
            if ( v57.m128i_i64[1] < v42 )
            {
              v53 = v43;
              v52 = v30;
              v51.m128i_i64[0] = v44;
              v56 = (char *)qvector_reserve(&v56, v56, v42, 1);
              v43 = v53;
              v45 = v56;
              v30 = v52;
              v44 = v51.m128i_i64[0];
            }
            v57.m128i_i64[0] = v42;
            v45[v44] = 0;
            memcpy(&v56[v43], *(const void **)v37, v30);
          }
        }
        v37 += 24;
      }
      while ( v39 != v37 );
      goto LABEL_31;
    }
    if ( v14 > 0 )
    {
      v15 = *(_QWORD *)(a2 + 136);
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        v50 = (void *)qalloc_or_throw(*(_QWORD *)(v15 + 8));
        memcpy(v50, *(const void **)v15, v16);
        *(_QWORD *)(a1 + 280) = parse_borrow_date(0, v50);
        if ( v50 )
          qfree(v50, (const char *)v50);
      }
      else
      {
        *(_QWORD *)(a1 + 280) = parse_borrow_date(0, &s1);
      }
      v11 = callui(203, 19, a1, 1, (int)a1 + 280, v17);
    }
LABEL_11:
    v8 = 1;
    goto LABEL_30;
  }
  if ( !*(_BYTE *)(a1 + 320) )
  {
    v18 = s;
    v56 = nullptr;
    v19 = qstrftime(s, 32, "%F", result);
    v57 = 0;
    if ( v19 )
    {
      v19 = strlen(s);
      v20 = v19 + 1;
    }
    else
    {
      v20 = 1;
      v18 = (char *)&unk_5C2F25;
    }
    v56 = (char *)qvector_reserve(&v56, 0, v20, 1);
    v57.m128i_i64[0] = v20;
    memmove(v56, v18, v19);
    v56[v19] = 0;
    v21 = *(_QWORD *)(a1 + 256);
    v22 = v56;
    v23 = _mm_loadu_si128(&v57);
    v57 = 0;
    v56 = nullptr;
    if ( v21 )
    {
      *(_QWORD *)(a1 + 264) = 0;
      v51 = v23;
      qfree(v21, v18);
      v23 = _mm_load_si128(&v51);
      v24 = v56;
      *(_QWORD *)(a1 + 256) = v22;
      *(__m128i *)(a1 + 264) = v23;
      if ( v24 )
      {
        v57.m128i_i64[0] = 0;
        *(double *)v23.m128i_i64 = qfree(v24, v18);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 256) = v22;
      *(__m128i *)(a1 + 264) = v23;
    }
    return callui(203, 15, a1, 0, (int)a1 + 256, (_DWORD)callui, *(double *)v23.m128i_i64);
  }
  return result;
}
