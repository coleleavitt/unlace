_QWORD *__fastcall sub_3EFA50(_QWORD *a1, __int64 a2, double a3)
{
  _QWORD *result; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __m128i v9; // xmm1

  result = (_QWORD *)a1[100];
  if ( *((_BYTE *)result + 148) == 2 )
  {
    result = (_QWORD *)a1[104];
    if ( *((_DWORD *)result + 21) == 8 )
    {
      v4 = a1[1];
      if ( *(_DWORD *)(v4 + 64) <= 1u )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2, a3);
        BUG();
      }
      result = *(_QWORD **)(v4 + 528);
      v5 = result[1];
      if ( v5 )
      {
        v6 = j__qalloc_or_throw(80);
        v7 = *(_QWORD *)(a1[1] + 40LL);
        *(_QWORD *)(v6 + 40) = 0;
        *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v6 + 56) = 0;
        *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v6 + 72) = 0;
        sub_330970(v6, v7);
        *(_DWORD *)v6 = 4;
        sub_120A10(v6 + 32, a1[104], 0, 16, *(_QWORD *)(v6 + 24), 0);
        v8 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 36));
        v9 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 620LL));
        *(_BYTE *)(v6 + 64) = 1;
        *(_QWORD *)(v6 + 68) = _mm_unpacklo_epi32(v8, v9).m128i_u64[0];
        return sub_A3160(v5, (_QWORD *)v6, 0);
      }
    }
  }
  return result;
}
