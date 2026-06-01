void __fastcall sub_BA0C50(__int64 a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  if ( (a3->m128i_i32[0] & 0x7FFFFFFF) != 0 )
  {
    v7 = a2[294];
    a2[304] += 32LL;
    v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= v8 + 32 && v7 )
    {
      a2[294] = v8 + 32;
      v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v9 = sub_962430((__int64)(a2 + 294), 32, 32, 3, a5, a6);
      v8 = v9 & 0xFFFFFFFFFFFFFFF9LL;
    }
    *(__m128i *)v9 = _mm_loadu_si128(a3);
    *(__m128i *)(v9 + 16) = _mm_loadu_si128(a3 + 1);
    *(_QWORD *)(a1 + 72) = v8;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
  }
}

