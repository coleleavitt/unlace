unsigned __int64 __fastcall sub_35D280(_QWORD *a1)
{
  size_t v2; // r14
  unsigned int v3; // ebp
  const char *v4; // r15
  unsigned int v5; // edi
  size_t v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  void *v11; // r12
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  void *v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  _QWORD *v21; // [rsp+0h] [rbp-A8h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  char *s2; // [rsp+18h] [rbp-90h]
  __m128i v24; // [rsp+20h] [rbp-88h] BYREF
  const char *v25; // [rsp+30h] [rbp-78h] BYREF
  __int128 v26; // [rsp+38h] [rbp-70h]
  void *v27; // [rsp+50h] [rbp-58h] BYREF
  __m128i v28; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v26 = 0;
  v25 = nullptr;
  s2 = *(char **)(*(_QWORD *)(*a1 + 16LL) + 48LL);
  v2 = strlen(s2);
  v22 = getinf(19);
  v3 = 1000;
  while ( get_extra_cmt(&v25, v22, v3) >= 0 )
  {
    ++v3;
    v4 = s1;
    if ( (_QWORD)v26 )
      v4 = v25;
    if ( !strncmp(v4, s2, v2) )
    {
      v4 += v2;
      v5 = *v4;
      if ( v5 <= 0x7F )
      {
        if ( isspace(v5) )
        {
          ++v4;
          v27 = nullptr;
          v21 = a1 + 29;
          v28 = 0;
LABEL_9:
          v6 = strlen(v4);
          v24.m128i_i64[0] = v6 + 1;
          v27 = (void *)qvector_reserve(&v27, 0, v6 + 1, 1);
          v28.m128i_i64[0] = v24.m128i_i64[0];
          memmove(v27, v4, v6);
          *((_BYTE *)v27 + v6) = 0;
          goto LABEL_10;
        }
      }
    }
    v27 = nullptr;
    v21 = a1 + 29;
    v28 = 0;
    if ( v4 )
      goto LABEL_9;
LABEL_10:
    v7 = a1[30];
    v8 = a1[29];
    v9 = a1[31];
    v10 = v7 + 1;
    if ( (unsigned __int64)&v27 < v8 || (unsigned __int64)&v27 >= v8 + 24 * v9 )
    {
      if ( v9 < v10 )
      {
        v18 = qvector_reserve(v21, v8, v7 + 1, 24);
        a1[29] = v18;
        v8 = v18;
        v7 = a1[30];
      }
      v16 = _mm_loadu_si128(&v28);
      v17 = v8 + 24 * v7;
      *(_QWORD *)v17 = v27;
      *(__m128i *)(v17 + 8) = v16;
      ++a1[30];
    }
    else
    {
      v11 = v27;
      v12 = _mm_loadl_epi64(&v28);
      v27 = nullptr;
      v13 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
      v28 = 0;
      if ( v9 < v10 )
      {
        v24.m128i_i64[1] = v13.m128i_i64[0];
        v24.m128i_i64[0] = v12.m128i_i64[0];
        v20 = qvector_reserve(v21, v8, v7 + 1, 24);
        a1[29] = v20;
        v8 = v20;
        v13 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
        v7 = a1[30];
        v12 = _mm_loadl_epi64(&v24);
      }
      v14 = v8 + 24 * v7;
      *(_QWORD *)v14 = v11;
      v15 = v27;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
      ++a1[30];
      if ( v15 )
      {
        v28.m128i_i64[0] = 0;
        qfree(v15);
      }
    }
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v29 - __readfsqword(0x28u);
}
