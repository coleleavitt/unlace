__int64 __fastcall sub_4E754(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp

  v4 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    v5 = *v4;
    if ( a1[1] )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        if ( (**(_BYTE **)(v6 + 8) & 2) == 0 )
          sub_2B6500();
        if ( (**(_BYTE **)(v6 + 16) & 2) == 0 )
          sub_2B6500();
        if ( (*(_BYTE *)v6 & 2) == 0 )
        {
          sub_2B5D00(v6 + 64);
          cleanup_argloc(v6 + 24);
          *(_QWORD *)v6 |= 2uLL;
        }
        if ( v5 > 3 )
          qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      }
      *(_QWORD *)*a1 = *a1 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*a1 & 3LL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
    }
    else
    {
      *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | *v4 & 3;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      *(_QWORD *)*a1 |= 2uLL;
    }
    if ( *a1 )
      qfree(*a1);
  }
  qfree(a1);
  return a4;
}
