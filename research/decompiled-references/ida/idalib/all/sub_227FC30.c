__int64 __fastcall sub_227FC30(__int64 a1, signed int a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  char v16; // [rsp+1Dh] [rbp-2Bh]
  __int16 v17; // [rsp+1Eh] [rbp-2Ah] BYREF

  v2 = (unsigned __int8)a2;
  result = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(result + 88);
  if ( (*(_BYTE *)(result + 40) & 2) != 0
    && (result = (__int64)*__ctype_b_loc(), (*(_BYTE *)(result + 2LL * (unsigned __int8)a2 + 1) & 4) != 0)
    && (result = (unsigned int)(char)sub_227E110(a2), (_DWORD)result != a2) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v16 = a2;
    v15.m128i_i64[1] = (__int64)&v17 + 1;
    v17 = 93;
    *(__m128 *)a1 = _mm_loadh_ps((const double *)&v15.m128i_i64[1]);
    result = sub_227ECC0(a1);
    v15.m128i_i64[0] = v10;
    *(__m128 *)a1 = _mm_loadh_ps((const double *)v15.m128i_i64);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v7 = *(_QWORD *)(a1 + 32);
      result = *(_QWORD *)(a1 + 24);
      if ( v6 >= v7 )
      {
        v11 = (v7 + 1) / 2;
        v12 = 3 * v11;
        if ( v7 < 3 * v11 )
        {
          if ( v12 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            result = (__int64)realloc(*(void **)(a1 + 24), 24 * v11);
            if ( result )
            {
              *(_QWORD *)(a1 + 24) = result;
              v6 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 32) = v12;
            }
            else
            {
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 12;
              v6 = *(_QWORD *)(a1 + 40);
              v15.m128i_i64[0] = (__int64)byte_2D0ADA8;
              v14 = _mm_loadl_epi64(&v15);
              result = *(_QWORD *)(a1 + 24);
              *(__m128i *)a1 = _mm_unpacklo_epi64(v14, v14);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 16) = 12;
            v15.m128i_i64[0] = (__int64)byte_2D0ADA8;
            v13 = _mm_loadl_epi64(&v15);
            *(__m128i *)a1 = _mm_unpacklo_epi64(v13, v13);
          }
        }
      }
      *(_QWORD *)(a1 + 40) = v6 + 1;
      *(_QWORD *)(result + 8 * v6) = v2 | 0x10000000;
    }
    v8 = (_BYTE *)(v5 + a2);
    if ( !*v8 )
    {
      v9 = *(_QWORD *)(a1 + 56);
      result = *(unsigned int *)(v9 + 84);
      *(_DWORD *)(v9 + 84) = result + 1;
      *v8 = result;
    }
  }
  return result;
}
