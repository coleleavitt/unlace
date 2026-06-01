unsigned __int64 __fastcall sub_10001A0(__int64 a1, const __m128i *a2, __int64 a3, __int32 *a4)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  __m128i v6; // xmm3
  __m128i *v9; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r15
  __m128i *v16; // rax
  char *v17; // r15
  __int32 v18; // ecx
  __m128i v19; // xmm4
  __m128i *v20; // rdx
  const __m128i *v21; // rdx
  __m128i *v22; // rcx
  __m128i v23; // xmm1
  __int64 m128i_i64; // [rsp+8h] [rbp-50h] BYREF
  void *v25; // [rsp+10h] [rbp-48h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 != *(_QWORD *)(a1 + 16) )
  {
    v5 = *a4;
    v6 = _mm_loadu_si128(a2);
    *(_QWORD *)(v4 + 16) = a3;
    *(_DWORD *)(v4 + 24) = v5;
    *(__m128i *)v4 = v6;
    *(_QWORD *)(a1 + 8) = v4 + 32;
    return v4;
  }
  v9 = *(__m128i **)a1;
  v12 = v4 - *(_QWORD *)a1;
  v13 = v12 >> 5;
  if ( v12 >> 5 )
  {
    v14 = 2 * v13;
    v15 = -32;
    if ( v13 <= 2 * v13 && v14 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( !v14 )
      {
        m128i_i64 = 32;
        v17 = nullptr;
        v16 = nullptr;
        goto LABEL_7;
      }
      v15 = v13 << 6;
    }
  }
  else
  {
    v15 = 32;
  }
  v26 = v4 - *(_QWORD *)a1;
  v25 = v9;
  v16 = (__m128i *)operator new(v15);
  v12 = v26;
  v17 = &v16->m128i_i8[v15];
  m128i_i64 = (__int64)v16[2].m128i_i64;
LABEL_7:
  v18 = *a4;
  v19 = _mm_loadu_si128(a2);
  v20 = (__m128i *)((char *)v16 + v12);
  v20[1].m128i_i64[0] = a3;
  *v20 = v19;
  v20[1].m128i_i32[2] = v18;
  if ( (__m128i *)v4 == v9 )
  {
    v4 = (unsigned __int64)v16;
  }
  else
  {
    v21 = v9;
    v22 = v16;
    do
    {
      v23 = _mm_loadu_si128(v21);
      v21 += 2;
      v22 += 2;
      v22[-2] = v23;
      v22[-1] = _mm_loadu_si128(v21 - 1);
    }
    while ( (const __m128i *)v4 != v21 );
    v4 = (unsigned __int64)v16[2].m128i_u64 + ((v4 - 32 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0LL);
    m128i_i64 = v4 + 32;
  }
  if ( v9 )
  {
    v25 = v16;
    operator delete(v9);
    v16 = (__m128i *)v25;
  }
  v25 = v16;
  *(_QWORD *)(a1 + 16) = v17;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&m128i_i64);
  return v4;
}
