__int64 __fastcall sub_4F8D8(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp

  v4 = *a1;
  if ( *a1 )
  {
    v5 = *(_QWORD *)v4;
    if ( a1[1] )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        if ( (**(_BYTE **)(v6 + 8) & 2) == 0 )
          sub_2BA180();
        if ( (**(_BYTE **)(v6 + 16) & 2) == 0 )
          sub_2BA180();
        if ( (*(_BYTE *)v6 & 2) == 0 )
        {
          sub_2B9980(v6 + 64);
          cleanup_argloc();
          *(_QWORD *)v6 |= 2uLL;
        }
        if ( v5 > 3 )
          qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      }
      *(_QWORD *)*a1 = *a1 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*a1 & 3LL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
    }
    else
    {
      *(_QWORD *)v4 = v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      *(_QWORD *)*a1 |= 2uLL;
    }
    if ( *a1 )
      qfree(*a1);
  }
  qfree((__int64)a1);
  return a4;
}
