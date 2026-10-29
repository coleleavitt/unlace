_QWORD *__fastcall sub_3E4E10(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rsi
  __m128i v6; // xmm0
  __m128i v7; // xmm1

  result = (_QWORD *)a1[100];
  if ( *((_BYTE *)result + 148) == 2 )
  {
    result = (_QWORD *)a1[104];
    if ( *((_DWORD *)result + 21) == 8 )
    {
      v2 = a1[1];
      if ( *(_DWORD *)(v2 + 64) <= 1u )
      {
        if ( !under_debugger )
          sub_37EA20(52719);
        BUG();
      }
      result = *(_QWORD **)(v2 + 528);
      v3 = result[1];
      if ( v3 )
      {
        v4 = j__qalloc_or_throw();
        v5 = *(_QWORD *)(a1[1] + 40LL);
        *(_QWORD *)(v4 + 40) = 0;
        *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v4 + 56) = 0;
        *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v4 + 72) = 0;
        sub_32D4D0(v4, v5);
        *(_DWORD *)v4 = 4;
        sub_11E5D0(v4 + 32, a1[104], 0, 16, *(_QWORD *)(v4 + 24), 0);
        v6 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 36));
        v7 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 620LL));
        *(_BYTE *)(v4 + 64) = 1;
        *(_QWORD *)(v4 + 68) = _mm_unpacklo_epi32(v6, v7).m128i_u64[0];
        return sub_A23D0(v3, (_QWORD *)v4, 0);
      }
    }
  }
  return result;
}
