unsigned __int64 __fastcall sub_13CCE70(__int64 a1, int *a2, const __m128i *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  int v5; // esi
  __m128i si128; // xmm3
  __m128i *v9; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __m128i *v17; // rax
  char *v18; // r15
  int v19; // edi
  char *v20; // rdx
  __int64 v21; // rcx
  const __m128i *v22; // rdx
  __m128i *v23; // rcx
  __m128i v24; // xmm1
  __int64 m128i_i64; // [rsp+8h] [rbp-50h] BYREF
  void *v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 != *(_QWORD *)(a1 + 16) )
  {
    v5 = *a2;
    si128 = _mm_load_si128(a3);
    *(_QWORD *)(v4 + 24) = *a4;
    *(__m128i *)(v4 + 8) = si128;
    *(_DWORD *)v4 = v5;
    *(_QWORD *)(a1 + 8) = v4 + 32;
    return v4;
  }
  v9 = *(__m128i **)a1;
  v13 = v4 - *(_QWORD *)a1;
  v14 = v13 >> 5;
  if ( v13 >> 5 )
  {
    v15 = 2 * v14;
    v16 = -32;
    if ( v14 <= 2 * v14 && v15 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( !v15 )
      {
        m128i_i64 = 32;
        v18 = nullptr;
        v17 = nullptr;
        goto LABEL_7;
      }
      v16 = v14 << 6;
    }
  }
  else
  {
    v16 = 32;
  }
  v27 = v4 - *(_QWORD *)a1;
  v26 = v9;
  v17 = (__m128i *)operator new(v16);
  v13 = v27;
  v18 = &v17->m128i_i8[v16];
  m128i_i64 = (__int64)v17[2].m128i_i64;
LABEL_7:
  v19 = *a2;
  v20 = &v17->m128i_i8[v13];
  v21 = *a4;
  *(__m128i *)(v20 + 8) = _mm_load_si128(a3);
  *(_DWORD *)v20 = v19;
  *((_QWORD *)v20 + 3) = v21;
  if ( (__m128i *)v4 == v9 )
  {
    v4 = (unsigned __int64)v17;
  }
  else
  {
    v22 = v9;
    v23 = v17;
    do
    {
      v24 = _mm_loadu_si128(v22);
      v22 += 2;
      v23 += 2;
      v23[-2] = v24;
      v23[-1] = _mm_loadu_si128(v22 - 1);
    }
    while ( (const __m128i *)v4 != v22 );
    v4 = (unsigned __int64)v17[2].m128i_u64 + ((v4 - 32 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0LL);
    m128i_i64 = v4 + 32;
  }
  if ( v9 )
  {
    v26 = v17;
    operator delete(v9);
    v17 = (__m128i *)v26;
  }
  v26 = v17;
  *(_QWORD *)(a1 + 16) = v18;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&m128i_i64);
  return v4;
}
