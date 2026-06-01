unsigned __int64 __fastcall sub_C08C90(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 result; // rax
  __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // rsi

  v8 = a2[294];
  v9 = 24LL * a4;
  a2[304] += v9;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v9 + result && v8 )
    a2[294] = v9 + result;
  else
    result = sub_986170((__int64)(a2 + 294), v9, v9, 3, v9, a6);
  v11 = *(_WORD *)(a1 + 20);
  *(_QWORD *)(a1 + 24) = result;
  *(_WORD *)(a1 + 20) = (2 * a4) | v11 & 1;
  if ( a4 )
  {
    *(__m128i *)result = _mm_loadu_si128(a3);
    *(_QWORD *)(result + 16) = a3[1].m128i_i64[0];
    if ( a4 != 1 )
    {
      LODWORD(result) = 1;
      do
      {
        v12 = (unsigned int)result;
        v13 = *(_QWORD *)(a1 + 24);
        result = (unsigned int)(result + 1);
        v12 *= 3;
        *(__m128i *)(v13 + 8 * v12) = _mm_loadu_si128((const __m128i *)((char *)a3 + 8 * v12));
        *(_QWORD *)(v13 + 8 * v12 + 16) = a3[1].m128i_i64[v12];
      }
      while ( a4 != (_DWORD)result );
    }
  }
  return result;
}
