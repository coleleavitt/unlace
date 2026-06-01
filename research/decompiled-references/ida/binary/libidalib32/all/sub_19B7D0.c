unsigned __int64 __fastcall sub_19B7D0(__int64 *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  void *v6; // rdi
  const char *i; // rax
  void *v8; // rbp
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // rax
  void *v12; // rdi
  const char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r14
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-98h] BYREF
  void *v26; // [rsp+20h] [rbp-78h]
  __int128 v27; // [rsp+28h] [rbp-70h]
  void *v28; // [rsp+40h] [rbp-58h] BYREF
  __m128i v29; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v27 = 0;
  v26 = nullptr;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    v26 = (void *)qvector_reserve();
    *(_QWORD *)&v27 = v4;
    memmove(v26, a2, v5);
    *((_BYTE *)v26 + v5) = 0;
    v6 = v26;
    if ( (unsigned __int64)v27 > 1 )
    {
      for ( i = (const char *)qstrtok(); ; i = (const char *)qstrtok() )
      {
        v13 = i;
        if ( !i )
          break;
        v28 = nullptr;
        v29 = 0;
        v14 = strlen(i);
        v15 = v14;
        if ( v14 )
        {
          v25.m128i_i64[0] = v14 + 1;
          v28 = (void *)qvector_reserve();
          v29.m128i_i64[0] = v25.m128i_i64[0];
          memmove(v28, v13, v15);
          *((_BYTE *)v28 + v15) = 0;
        }
        v24 = a1[1];
        v23 = *a1;
        v16 = a1[2];
        v17 = v24 + 1;
        if ( (unsigned __int64)&v28 < *a1 || (unsigned __int64)&v28 >= v23 + 24 * v16 )
        {
          if ( v16 < v17 )
          {
            v21 = qvector_reserve();
            *a1 = v21;
            v23 = v21;
            v24 = a1[1];
          }
          v18 = _mm_loadu_si128(&v29);
          v19 = v23 + 24 * v24;
          *(_QWORD *)v19 = v28;
          *(__m128i *)(v19 + 8) = v18;
          ++a1[1];
        }
        else
        {
          v8 = v28;
          v9 = _mm_loadl_epi64(&v29);
          v28 = nullptr;
          v10 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
          v29 = 0;
          if ( v16 < v17 )
          {
            v25.m128i_i64[1] = v10.m128i_i64[0];
            v25.m128i_i64[0] = v9.m128i_i64[0];
            v22 = qvector_reserve();
            *a1 = v22;
            v23 = v22;
            v24 = a1[1];
            v10 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
            v9 = _mm_loadl_epi64(&v25);
          }
          v11 = v23 + 24 * v24;
          *(_QWORD *)v11 = v8;
          v12 = v28;
          *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v9, v10);
          ++a1[1];
          if ( v12 )
          {
            v29.m128i_i64[0] = 0;
            qfree();
          }
        }
      }
      v6 = v26;
    }
    if ( v6 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
  }
  return v30 - __readfsqword(0x28u);
}

