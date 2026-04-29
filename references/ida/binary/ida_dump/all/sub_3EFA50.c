_QWORD *__fastcall sub_3EFA50(_QWORD *a1, double a2)
{
  _QWORD *result; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rsi
  __m128i v7; // xmm0
  __m128i v8; // xmm1

  result = (_QWORD *)a1[100];
  if ( *((_BYTE *)result + 148) == 2 )
  {
    result = (_QWORD *)a1[104];
    if ( *((_DWORD *)result + 21) == 8 )
    {
      v3 = a1[1];
      if ( *(_DWORD *)(v3 + 64) <= 1u )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        BUG();
      }
      result = *(_QWORD **)(v3 + 528);
      v4 = result[1];
      if ( v4 )
      {
        v5 = j__qalloc_or_throw();
        v6 = *(_QWORD *)(a1[1] + 40LL);
        *(_QWORD *)(v5 + 40) = 0;
        *(_QWORD *)(v5 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v5 + 56) = 0;
        *(_QWORD *)(v5 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v5 + 72) = 0;
        sub_330970(v5, v6);
        *(_DWORD *)v5 = 4;
        sub_120A10(v5 + 32, a1[104], 0, 16, *(_QWORD *)(v5 + 24), 0);
        v7 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 36));
        v8 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 620LL));
        *(_BYTE *)(v5 + 64) = 1;
        *(_QWORD *)(v5 + 68) = _mm_unpacklo_epi32(v7, v8).m128i_u64[0];
        return sub_A3160(v4, (_QWORD *)v5, 0);
      }
    }
  }
  return result;
}
