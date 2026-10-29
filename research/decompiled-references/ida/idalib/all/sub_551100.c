__int64 __fastcall sub_551100(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // r13
  _BYTE *v8; // rax
  __int64 v9; // rax
  const __m128i *v10; // rbx
  __m128i v11; // xmm1
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v16; // rbx
  size_t v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  size_t v21; // rbp
  size_t v22; // rbx
  size_t v23; // r13
  _BYTE *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v10 = (const __m128i *)(*(_QWORD *)a3 + 144 * v7);
    v11 = _mm_loadu_si128(v10);
    if ( a4 >= _mm_add_epi64(_mm_srli_si128(v11, 8), v11).m128i_u64[0] )
      goto LABEL_9;
    if ( a4 < v11.m128i_i64[0] )
      return 0;
    if ( (v10[8].m128i_i8[4] & 0x20) != 0
      || v10[1].m128i_i64[1]
      && (v8 = (_BYTE *)v10[1].m128i_i64[0], *v8 == 95)
      && v8[1] == 95
      && get_tinfo_property(v10[4].m128i_i64[0], 282) )
    {
      v12 = (_QWORD *)sub_53CF90(a1, v10[4].m128i_u64[0]);
      if ( v12 )
      {
        v13 = a4;
        if ( !*(_BYTE *)(a3 + 51) )
          v13 = a4 - v10->m128i_i64[0];
        if ( (unsigned __int8)sub_551100(a1, a2, *v12, v13) )
          break;
      }
    }
    v9 = 0;
    if ( !*(_BYTE *)(a3 + 51) )
      v9 = v10->m128i_i64[0];
    if ( v9 == a4 )
      return 1;
LABEL_9:
    if ( (unsigned __int64)++v7 >= *(_QWORD *)(a3 + 8) )
      return 0;
  }
  v14 = v10[4].m128i_i64[0];
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( (v14 & 0x100) != 0 )
  {
    if ( get_tinfo_pdata(&src, v14, 0) )
    {
      v16 = a2[1];
      if ( v16 > 1 )
      {
        v17 = v16 - 1;
        v18 = v16 + 1;
        v19 = *a2;
        v20 = v16 + 2;
        if ( a2[2] < v20 )
        {
          v26 = qvector_reserve(a2, v19, v20, 1);
          *a2 = v26;
          v19 = v26;
        }
        a2[1] = v20;
        *(_BYTE *)(v19 + v18) = 0;
        memmove((void *)(*a2 + 2), (const void *)*a2, v17);
        *(_WORD *)*a2 = 14906;
        v16 = a2[1];
      }
      v21 = n[0];
      v22 = (v16 == 0) + v16 - 1;
      v23 = v22;
      if ( n[0] )
      {
        v21 = n[0] - 1;
        v23 = n[0] - 1 + v22;
      }
      v24 = (_BYTE *)*a2;
      if ( a2[2] < v23 + 1 )
      {
        v25 = qvector_reserve(a2, v24, v23 + 1, 1);
        *a2 = v25;
        v24 = (_BYTE *)v25;
      }
      a2[1] = v23 + 1;
      v24[v23] = 0;
      if ( v22 )
        memmove((void *)(*a2 + v21), (const void *)*a2, v22);
      memcpy((void *)*a2, src, v21);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return 1;
}
