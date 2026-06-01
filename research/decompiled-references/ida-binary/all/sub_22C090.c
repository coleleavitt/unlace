__int64 __fastcall sub_22C090(__int64 a1)
{
  const char *v1; // rsi
  const char *i; // rax
  void *v4; // rbp
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  char *v7; // rax
  void *v8; // rdi
  const char *v9; // r13
  size_t v10; // rax
  __int64 v11; // r14
  size_t v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  char *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rsi
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+7h] [rbp-99h]
  __m128i v23; // [rsp+8h] [rbp-98h] BYREF
  _BYTE v24[8]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v25; // [rsp+28h] [rbp-78h] BYREF
  __int128 v26; // [rsp+30h] [rbp-70h]
  void *v27; // [rsp+48h] [rbp-58h] BYREF
  __m128i v28; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-40h]

  v1 = "DefaultDebuggers";
  v29 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  v22 = reg_str_get(&v25, "DefaultDebuggers", 0);
  if ( v22 && (unsigned __int64)v26 > 1 )
  {
    v1 = (const char *)&off_5E20B0;
    for ( i = (const char *)qstrtok(v25, &off_5E20B0, v24); ; i = (const char *)qstrtok(0, &off_5E20B0, v24) )
    {
      v9 = i;
      if ( !i )
        break;
      v27 = nullptr;
      v28 = 0;
      v10 = strlen(i);
      v11 = v10 + 1;
      v12 = v10;
      v27 = (void *)qvector_reserve(&v27, 0, v10 + 1, 1);
      v28.m128i_i64[0] = v11;
      memmove(v27, v9, v12);
      *((_BYTE *)v27 + v12) = 0;
      v21 = *(_QWORD *)(a1 + 8);
      v20 = *(const char **)a1;
      v13 = *(_QWORD *)(a1 + 16);
      v14 = v21 + 1;
      if ( (unsigned __int64)&v27 < *(_QWORD *)a1 || &v27 >= (void **)&v20[24 * v13] )
      {
        if ( v13 < v14 )
        {
          v18 = qvector_reserve(a1, v20, v21 + 1, 24);
          *(_QWORD *)a1 = v18;
          v20 = (const char *)v18;
          v21 = *(_QWORD *)(a1 + 8);
        }
        v15 = _mm_loadu_si128(&v28);
        v16 = (char *)&v20[24 * v21];
        *(_QWORD *)v16 = v27;
        *(__m128i *)(v16 + 8) = v15;
        ++*(_QWORD *)(a1 + 8);
      }
      else
      {
        v4 = v27;
        v5 = _mm_loadl_epi64(&v28);
        v27 = nullptr;
        v6 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
        v28 = 0;
        if ( v13 < v14 )
        {
          v23.m128i_i64[1] = v6.m128i_i64[0];
          v23.m128i_i64[0] = v5.m128i_i64[0];
          v19 = qvector_reserve(a1, v20, v21 + 1, 24);
          *(_QWORD *)a1 = v19;
          v20 = (const char *)v19;
          v6 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
          v21 = *(_QWORD *)(a1 + 8);
          v5 = _mm_loadl_epi64(&v23);
        }
        v7 = (char *)&v20[24 * v21];
        *(_QWORD *)v7 = v4;
        v8 = v27;
        *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v5, v6);
        ++*(_QWORD *)(a1 + 8);
        if ( v8 )
        {
          v28.m128i_i64[0] = 0;
          qfree(v8, v20);
        }
      }
      v1 = (const char *)&off_5E20B0;
    }
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v1);
  }
  return v22;
}
