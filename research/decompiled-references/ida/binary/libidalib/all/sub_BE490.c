__int64 __fastcall sub_BE490(__int64 *a1)
{
  const char *i; // rax
  void *v3; // rbp
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  void *v7; // rdi
  const char *v8; // r13
  size_t v9; // rax
  __int64 v10; // r14
  size_t v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int8 v21; // [rsp+7h] [rbp-99h]
  __m128i v22; // [rsp+8h] [rbp-98h] BYREF
  __int64 v23; // [rsp+28h] [rbp-78h]
  __int128 v24; // [rsp+30h] [rbp-70h]
  void *v25; // [rsp+48h] [rbp-58h] BYREF
  __m128i v26; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v24 = 0;
  v23 = 0;
  v21 = reg_str_get();
  if ( v21 && (unsigned __int64)v24 > 1 )
  {
    for ( i = (const char *)qstrtok(); ; i = (const char *)qstrtok() )
    {
      v8 = i;
      if ( !i )
        break;
      v25 = nullptr;
      v26 = 0;
      v9 = strlen(i);
      v10 = v9 + 1;
      v11 = v9;
      v25 = (void *)qvector_reserve();
      v26.m128i_i64[0] = v10;
      memmove(v25, v8, v11);
      *((_BYTE *)v25 + v11) = 0;
      v20 = a1[1];
      v19 = *a1;
      v12 = a1[2];
      v13 = v20 + 1;
      if ( (unsigned __int64)&v25 < *a1 || (unsigned __int64)&v25 >= v19 + 24 * v12 )
      {
        if ( v12 < v13 )
        {
          v17 = qvector_reserve();
          *a1 = v17;
          v19 = v17;
          v20 = a1[1];
        }
        v14 = _mm_loadu_si128(&v26);
        v15 = v19 + 24 * v20;
        *(_QWORD *)v15 = v25;
        *(__m128i *)(v15 + 8) = v14;
        ++a1[1];
      }
      else
      {
        v3 = v25;
        v4 = _mm_loadl_epi64(&v26);
        v25 = nullptr;
        v5 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
        v26 = 0;
        if ( v12 < v13 )
        {
          v22.m128i_i64[1] = v5.m128i_i64[0];
          v22.m128i_i64[0] = v4.m128i_i64[0];
          v18 = qvector_reserve();
          *a1 = v18;
          v19 = v18;
          v5 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
          v20 = a1[1];
          v4 = _mm_loadl_epi64(&v22);
        }
        v6 = v19 + 24 * v20;
        *(_QWORD *)v6 = v3;
        v7 = v25;
        *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v4, v5);
        ++a1[1];
        if ( v7 )
        {
          v26.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v21;
}

