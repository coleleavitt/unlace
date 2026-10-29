unsigned __int64 __fastcall sub_38A700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  void *v7; // r12
  int i; // eax
  int v9; // r9d
  void *v10; // rbx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  char *v13; // rax
  void *v14; // rdi
  size_t v15; // rax
  __int64 v16; // r15
  size_t v17; // rbx
  unsigned __int64 v18; // rdi
  __m128i v19; // xmm0
  char *v20; // rax
  const char **v21; // rbx
  const char **v22; // r13
  const char *v23; // rcx
  __int64 v24; // rax
  char *v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  char *v28; // rax
  void *v29; // rdi
  char *v30; // rsi
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-60D8h] BYREF
  void *v33; // [rsp+10h] [rbp-60C8h] BYREF
  __int128 v34; // [rsp+18h] [rbp-60C0h]
  void *ptr; // [rsp+30h] [rbp-60A8h] BYREF
  __m128i v36; // [rsp+38h] [rbp-60A0h] BYREF
  char v37[4]; // [rsp+50h] [rbp-6088h] BYREF
  char s[8228]; // [rsp+54h] [rbp-6084h] BYREF
  __int64 v39; // [rsp+2078h] [rbp-4060h]
  int v40; // [rsp+2084h] [rbp-4054h]
  _BYTE v41[4096]; // [rsp+4090h] [rbp-2048h] BYREF
  char v42; // [rsp+5090h] [rbp-1048h] BYREF
  unsigned __int64 v43; // [rsp+6098h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( (unsigned __int64)xmmword_2CCB4A8 > 1 )
  {
    v7 = dest;
    qmakepath((unsigned int)v41, 4096, (_DWORD)dest, (unsigned int)"*", 0, a6, v32.m128i_i8[0]);
    v34 = 0;
    v39 = 0;
    v40 = 0;
    v33 = nullptr;
    for ( i = qfindfirst(v41, v37, 0); !i; i = qfindnext(v37) )
    {
      ptr = nullptr;
      v36 = 0;
      v15 = strlen(s);
      v16 = v15 + 1;
      v17 = v15;
      ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
      v36.m128i_i64[0] = v16;
      memmove(ptr, s, v17);
      *((_BYTE *)ptr + v17) = 0;
      v31 = v34;
      v30 = (char *)v33;
      v18 = v34 + 1;
      if ( &ptr < v33 || &ptr >= (void **)((char *)v33 + 24 * *((_QWORD *)&v34 + 1)) )
      {
        if ( *((_QWORD *)&v34 + 1) < v18 )
        {
          v33 = (void *)qvector_reserve(&v33, v33, v34 + 1, 24);
          v30 = (char *)v33;
          v31 = v34;
        }
        v19 = _mm_loadu_si128(&v36);
        v20 = &v30[24 * v31];
        *(_QWORD *)v20 = ptr;
        *(__m128i *)(v20 + 8) = v19;
        *(_QWORD *)&v34 = v34 + 1;
      }
      else
      {
        v10 = ptr;
        v11 = _mm_loadl_epi64(&v36);
        ptr = nullptr;
        v12 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
        v36 = 0;
        if ( *((_QWORD *)&v34 + 1) < v18 )
        {
          v32.m128i_i64[1] = v12.m128i_i64[0];
          v32.m128i_i64[0] = v11.m128i_i64[0];
          v33 = (void *)qvector_reserve(&v33, v33, v34 + 1, 24);
          v30 = (char *)v33;
          v12 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
          v31 = v34;
          v11 = _mm_loadl_epi64(&v32);
        }
        v13 = &v30[24 * v31];
        *(_QWORD *)v13 = v10;
        v14 = ptr;
        *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v11, v12);
        *(_QWORD *)&v34 = v34 + 1;
        if ( v14 )
        {
          v36.m128i_i64[0] = 0;
          qfree(v14);
        }
      }
    }
    v21 = (const char **)v33;
    v22 = (const char **)((char *)v33 + 24 * v34);
    if ( v22 != v33 )
    {
      do
      {
        v23 = haystack;
        if ( v21[1] )
          v23 = *v21;
        v24 = qmakepath((unsigned int)&v42, 4096, (_DWORD)v7, (_DWORD)v23, 0, v9, v32.m128i_i8[0]);
        qunlink(v24);
        v21 += 3;
      }
      while ( v22 != v21 );
    }
    qrmdir(v7);
    if ( dest )
    {
      *(_QWORD *)&xmmword_2CCB4A8 = 0;
      qfree(dest);
      dest = nullptr;
      *((_QWORD *)&xmmword_2CCB4A8 + 1) = 0;
    }
    v25 = (char *)v33;
    if ( v33 )
    {
      v26 = v34;
      if ( (_QWORD)v34 )
      {
        v27 = 0;
        do
        {
          v28 = &v25[24 * v27];
          v29 = *(void **)v28;
          if ( *(_QWORD *)v28 )
          {
            *((_QWORD *)v28 + 1) = 0;
            qfree(v29);
            v25 = (char *)v33;
          }
          ++v27;
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v34 = 0;
      qfree(v25);
    }
    qfindclose(v37);
  }
  return v43 - __readfsqword(0x28u);
}
