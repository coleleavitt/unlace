__int64 __fastcall sub_FACF0(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rsi
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  _OWORD v12[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_FAE10(40579);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 8);
    v4 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 16));
    v5 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 20));
    v6 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v4, v4), _mm_unpacklo_epi32(v5, v5));
    v7 = _mm_cmpgt_epi32((__m128i)0LL, v6);
    v12[0] = _mm_unpacklo_epi32(v6, v7);
    v12[1] = _mm_unpackhi_epi32(v6, v7);
    if ( sub_FAB40(a1 + 80, &v10, &v11, (__int64)v12, 0) )
    {
      v8 = *(_QWORD *)(v2 + 752);
      if ( a2 == 1 )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v8);
      else
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 80LL))(v11, v8);
    }
    else
    {
      return 0;
    }
  }
}

