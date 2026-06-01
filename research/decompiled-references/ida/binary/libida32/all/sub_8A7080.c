__int64 __fastcall sub_8A7080(__int64 a1, __int64 *a2, const __m128i **a3, unsigned int a4)
{
  const __m128i *v5; // r15
  const __m128i *v6; // rax
  const __m128i *v7; // r12
  char *v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // rbx
  unsigned __int64 v12; // r13
  const __m128i *v13; // r8
  const __m128i *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  const char *v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  const char *v23; // r12
  __int64 v24; // r14
  int v25; // edx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 i; // r15
  __int64 v30; // rsi
  _BYTE *v31; // rdx
  char *v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  char *v35; // rax
  void *v36; // rdi
  void *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  const char *v41; // r9
  const char *v42; // r8
  char *v43; // rcx
  char *v44; // rdx
  void *src; // [rsp+Ch] [rbp-F8h]
  const char *v49; // [rsp+2Ch] [rbp-D8h]
  int v50; // [rsp+34h] [rbp-D0h]
  unsigned int v51; // [rsp+38h] [rbp-CCh]
  int v52; // [rsp+48h] [rbp-BCh] BYREF
  void *v53; // [rsp+4Ch] [rbp-B8h] BYREF
  __int128 v54; // [rsp+54h] [rbp-B0h]
  void *v55; // [rsp+6Ch] [rbp-98h] BYREF
  __int128 v56; // [rsp+74h] [rbp-90h]
  void *v57; // [rsp+8Ch] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+94h] [rbp-70h]
  void *ptr; // [rsp+ACh] [rbp-58h] BYREF
  __int64 v60; // [rsp+B4h] [rbp-50h]
  unsigned __int64 v61; // [rsp+C4h] [rbp-40h]

  v5 = *a3;
  v61 = __readfsqword(0x28u);
  v6 = a3[1];
  v54 = 0;
  v53 = nullptr;
  v7 = (const __m128i *)((char *)v5 + 72 * (_QWORD)v6);
  if ( v5 != v7 )
  {
    v8 = nullptr;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v9 < v10 + 1 )
      {
        v53 = (void *)qvector_reserve(&v53, v8, v10 + 1, 48);
        v8 = (char *)v53;
        v10 = v54;
      }
      v11 = &v8[48 * v10];
      *(_OWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = 0;
      *((_OWORD *)v11 + 2) = 0;
      *((_QWORD *)v11 + 3) = 0;
      *(_QWORD *)&v54 = v54 + 1;
      if ( v11 != (char *)v5 )
      {
        v12 = v5->m128i_u64[1];
        if ( v12 > 1 )
        {
          src = (void *)v5->m128i_i64[0];
          v38 = (void *)qvector_reserve(v11, *(_QWORD *)v11, v5->m128i_i64[1], 1);
          *(_QWORD *)v11 = v38;
          *((_QWORD *)v11 + 1) = v12;
          memmove(v38, src, v12 - 1);
          *(_BYTE *)(*(_QWORD *)v11 + v12 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v11 + 1) = 0;
        }
      }
      *((_QWORD *)v11 + 3) = v5[1].m128i_i64[1];
      if ( v11 + 32 != (char *)&v5[2] )
        *((__m128i *)v11 + 2) = _mm_loadu_si128(v5 + 2);
      v5 = (const __m128i *)((char *)v5 + 72);
      if ( v7 == v5 )
        break;
      v9 = *((_QWORD *)&v54 + 1);
      v10 = v54;
      v8 = (char *)v53;
    }
  }
  v55 = nullptr;
  v56 = 0;
  v51 = (*(__int64 (__fastcall **)(__int64, void **, void **, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, &v55, &v53, a4);
  if ( v51 )
    goto LABEL_35;
  v13 = a3[1];
  v14 = *a3;
  v15 = (__int64)&(*a3)->m128i_i64[9 * (_QWORD)v13];
  v16 = a2[1];
  if ( *a3 == (const __m128i *)v15 )
  {
    LOBYTE(ptr) = 0;
    if ( v16 )
    {
      v19 = 0;
LABEL_17:
      a2[1] = v19;
      v13 = a3[1];
    }
  }
  else
  {
    v17 = 0;
    do
    {
      v18 = v14[3].m128i_i64[1];
      v14 = (const __m128i *)((char *)v14 + 72);
      v17 += 2 * v18 + 1;
    }
    while ( (const __m128i *)v15 != v14 );
    LOBYTE(ptr) = 0;
    v19 = (unsigned __int64)(v17 + 7) >> 3;
    if ( v19 < v16 )
      goto LABEL_17;
    if ( v16 < v19 )
    {
      v39 = *a2;
      v40 = a2[2];
      if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v39 + v40 )
      {
        if ( v40 >= v19 || (v39 = qvector_reserve(a2, *a2, v19, 1), v16 = a2[1], *a2 = v39, v16 < v19) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v39 + v16++) = (_BYTE)ptr;
            if ( v19 == v16 )
              break;
            v39 = *a2;
          }
        }
      }
      else if ( v40 >= v19 || (v39 = qvector_reserve(a2, *a2, v19, 1), v16 = a2[1], *a2 = v39, v16 < v19) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v39 + v16++) = 0;
          if ( v19 == v16 )
            break;
          v39 = *a2;
        }
      }
      goto LABEL_17;
    }
  }
  if ( v13 )
  {
    v20 = &byte_22CD811;
    if ( a4 == 2 )
      v20 = "not ";
    v21 = 0;
    v22 = 0;
    v49 = v20;
    do
    {
      while ( 1 )
      {
        v23 = haystack;
        v24 = (__int64)&(*a3)->m128i_i64[9 * v21];
        if ( *(_QWORD *)(v24 + 8) )
          v23 = *(const char **)v24;
        if ( a4 == 5 )
          break;
        v25 = *((unsigned __int8 *)v55 + (v21 >> 3));
        if ( (a4 == 2) == _bittest(&v25, v21 & 7) )
          break;
        sub_8A4FA0((__int64)"%zu %smodified, skipping: %s\n", v22++, v49, v23);
        if ( ++v21 >= (unsigned __int64)a3[1] )
          goto LABEL_35;
      }
      sub_8A4FA0((__int64)"%zu syncable: %s\n", v22, v23);
      v26 = v22 + 1;
      v50 = v22 + 1;
      *(_BYTE *)(*a2 + (v22 >> 3)) |= 1 << (v22 & 7);
      v27 = *(_QWORD *)(v24 + 56);
      v28 = v27;
      if ( v27 )
      {
        for ( i = 0; i < v27; ++i )
        {
LABEL_29:
          v30 = *(_QWORD *)(v24 + 48) + 24 * i;
          v31 = (_BYTE *)(v30 + 8);
          while ( !*v31 )
          {
            if ( (_BYTE *)(v30 + 24) == ++v31 )
            {
              ++i;
              v26 += 2LL;
              v28 = v27;
              if ( i < v27 )
                goto LABEL_29;
              goto LABEL_33;
            }
          }
          sub_8A6E60((__int64)&v57, a1, v23, (__int64 *)v30, i & 1, &v52);
          sub_815A10((__int64)&ptr, (unsigned __int8 *)(v30 + 8));
          v41 = haystack;
          if ( v60 )
            v41 = (const char *)ptr;
          v42 = haystack;
          v43 = "not found";
          if ( v58 )
          {
            v43 = "found";
            v42 = (const char *)v57;
            if ( v58 == 1 )
              v43 = "not found";
          }
          v44 = "delta";
          if ( (i & 1) == 0 )
            v44 = "ffile";
          sub_8A4FA0((__int64)"  %zu: matching %s %s: %s (%s)\n", i, v44, v43, v42, v41);
          if ( ptr )
          {
            v60 = 0;
            qfree(ptr);
          }
          if ( v58 > 1 )
          {
            *(_BYTE *)(*a2 + (v26 >> 3)) |= 1 << (v26 & 7);
            if ( v52 == 2 )
              *(_BYTE *)(*a2 + ((v26 + 1) >> 3)) |= 1 << ((v26 + 1) & 7);
            if ( (i & 1) == 0 )
            {
              if ( v57 )
              {
                v58 = 0;
                qfree(v57);
              }
              v22 = v50 + 2LL * *(_QWORD *)(v24 + 56);
              goto LABEL_34;
            }
          }
          if ( v57 )
          {
            v58 = 0;
            qfree(v57);
          }
          v27 = *(_QWORD *)(v24 + 56);
          v26 += 2LL;
          v28 = v27;
        }
      }
LABEL_33:
      v22 = v50 + 2 * v28;
LABEL_34:
      ++v21;
    }
    while ( v21 < (unsigned __int64)a3[1] );
  }
LABEL_35:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  v32 = (char *)v53;
  if ( v53 )
  {
    v33 = v54;
    if ( (_QWORD)v54 )
    {
      v34 = 0;
      do
      {
        v35 = &v32[48 * v34];
        v36 = *(void **)v35;
        if ( *(_QWORD *)v35 )
        {
          *((_QWORD *)v35 + 1) = 0;
          qfree(v36);
          v32 = (char *)v53;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v32);
  }
  return v51;
}

