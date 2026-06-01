unsigned __int64 __fastcall sub_23B030(__int64 a1, const char *a2)
{
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  const char *i; // rax
  void *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  char *v11; // rax
  void *v12; // rdi
  const char *v13; // rbx
  size_t v14; // rax
  __int64 v15; // r12
  size_t v16; // r14
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __m128i v19; // xmm0
  char *v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  const char *v24; // rsi
  __int64 v25; // rax
  __m128i v26; // [rsp+8h] [rbp-98h] BYREF
  _BYTE v27[8]; // [rsp+20h] [rbp-80h] BYREF
  void *v28; // [rsp+28h] [rbp-78h] BYREF
  __int128 v29; // [rsp+30h] [rbp-70h]
  void *v30; // [rsp+48h] [rbp-58h] BYREF
  __m128i v31; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v3 = a2;
  v29 = 0;
  v28 = nullptr;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v28 = (void *)qvector_reserve(&v28, 0, v4 + 1, 1);
    *(_QWORD *)&v29 = v5;
    memmove(v28, a2, v6);
    *((_BYTE *)v28 + v6) = 0;
    v3 = (const char *)v28;
  }
  for ( i = (const char *)qstrtok(v3, ";", v27); ; i = (const char *)qstrtok(0, ";", v27) )
  {
    v13 = i;
    if ( !i )
      break;
    v30 = nullptr;
    v31 = 0;
    v14 = strlen(i);
    v15 = v14 + 1;
    v16 = v14;
    v30 = (void *)qvector_reserve(&v30, 0, v14 + 1, 1);
    v31.m128i_i64[0] = v15;
    memmove(v30, v13, v16);
    *((_BYTE *)v30 + v16) = 0;
    v25 = *(_QWORD *)(a1 + 8);
    v24 = *(const char **)a1;
    v17 = *(_QWORD *)(a1 + 16);
    v18 = v25 + 1;
    if ( (unsigned __int64)&v30 < *(_QWORD *)a1 || &v30 >= (void **)&v24[24 * v17] )
    {
      if ( v17 < v18 )
      {
        v21 = qvector_reserve(a1, v24, v25 + 1, 24);
        *(_QWORD *)a1 = v21;
        v24 = (const char *)v21;
        v25 = *(_QWORD *)(a1 + 8);
      }
      v19 = _mm_loadu_si128(&v31);
      v20 = (char *)&v24[24 * v25];
      *(_QWORD *)v20 = v30;
      *(__m128i *)(v20 + 8) = v19;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v8 = v30;
      v9 = _mm_loadl_epi64(&v31);
      v30 = nullptr;
      v10 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v31 = 0;
      if ( v17 < v18 )
      {
        v26.m128i_i64[1] = v10.m128i_i64[0];
        v26.m128i_i64[0] = v9.m128i_i64[0];
        v23 = qvector_reserve(a1, v24, v25 + 1, 24);
        *(_QWORD *)a1 = v23;
        v24 = (const char *)v23;
        v10 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
        v25 = *(_QWORD *)(a1 + 8);
        v9 = _mm_loadl_epi64(&v26);
      }
      v11 = (char *)&v24[24 * v25];
      *(_QWORD *)v11 = v8;
      v12 = v30;
      *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v9, v10);
      ++*(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        v31.m128i_i64[0] = 0;
        qfree(v12, v24);
      }
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, ";");
  }
  return v32 - __readfsqword(0x28u);
}
