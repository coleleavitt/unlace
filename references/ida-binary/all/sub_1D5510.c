unsigned __int64 __fastcall sub_1D5510(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  int v9; // esi
  __m128i v10; // xmm2
  __int64 v11; // r12
  volatile signed __int32 *v12; // rdx
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm3
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  __m128i *v19; // r13
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i *v22; // rax
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-48h] BYREF
  __int64 v25; // [rsp+20h] [rbp-38h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v7 = a1->m128i_i64[0];
  v26 = __readfsqword(0x28u);
  if ( v7 )
  {
    v9 = *(_DWORD *)v7;
    v10 = _mm_loadu_si128(a3);
    v11 = a3[1].m128i_i64[0];
    v23 = v10;
    v12 = (volatile signed __int32 *)v10.m128i_i64[0];
    if ( v9 <= 1 )
    {
      if ( a1[1].m128i_i64[0] == a2 )
      {
        v17 = a1->m128i_i64[1];
        a6 = 0xAAAAAAAAAAAAAAABLL;
        v18 = (v7 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( a2 != *(_QWORD *)(v7 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)(v17 - v18) >> 3) )
        {
          v22 = (__m128i *)(v17 + 24 * a2);
          v22[1].m128i_i64[0] = v11;
          *v22 = v10;
          if ( v10.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)v10.m128i_i64[0], 1u);
          goto LABEL_21;
        }
        if ( a2 )
          goto LABEL_13;
      }
      else
      {
        if ( a2 )
        {
LABEL_13:
          if ( !v10.m128i_i64[0] )
          {
LABEL_14:
            sub_1D50F0(a1, 0, 1, nullptr, nullptr, a6);
            v19 = (__m128i *)(a1->m128i_i64[1] + 24 * a2);
            memmove(&v19[1].m128i_u64[1], v19, 24 * (a1[1].m128i_i64[0] - a2));
            v20 = _mm_load_si128(&v23);
            v19[1].m128i_i64[0] = v11;
            *v19 = v20;
            ++a1[1].m128i_i64[0];
            goto LABEL_8;
          }
          goto LABEL_4;
        }
        v17 = a1->m128i_i64[1];
        v18 = (v7 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( v18 == v17 )
        goto LABEL_3;
      v21 = _mm_load_si128(&v23);
      *(_QWORD *)(v17 - 8) = v11;
      *(__m128i *)(v17 - 24) = v21;
      if ( v10.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v10.m128i_i64[0], 1u);
      a1->m128i_i64[1] -= 24;
LABEL_21:
      ++a1[1].m128i_i64[0];
      return v26 - __readfsqword(0x28u);
    }
  }
LABEL_3:
  v13 = _mm_loadu_si128(a3);
  v11 = a3[1].m128i_i64[0];
  v12 = (volatile signed __int32 *)v13.m128i_i64[0];
  v23 = v13;
  if ( v13.m128i_i64[0] )
LABEL_4:
    _InterlockedAdd(v12, 1u);
  if ( !a1[1].m128i_i64[0] || a2 )
    goto LABEL_14;
  sub_1D50F0(a1, 1, 1, nullptr, nullptr, a6);
  v14 = a1->m128i_i64[1];
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(v14 - 8) = v11;
  *(__m128i *)(v14 - 24) = v15;
  a1->m128i_i64[1] -= 24;
  ++a1[1].m128i_i64[0];
LABEL_8:
  v25 = 0;
  v24 = 0;
  sub_16D970((void **)&v24);
  return v26 - __readfsqword(0x28u);
}
