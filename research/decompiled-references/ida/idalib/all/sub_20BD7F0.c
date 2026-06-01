__m128i *__fastcall sub_20BD7F0(__int64 a1)
{
  __m128i *v2; // rax
  __m128i *v3; // rbp
  __int64 v4; // rdi
  unsigned __int64 v6; // rdi

  v2 = (__m128i *)sub_20BA360(a1);
  v3 = v2;
  if ( (__m128i *)a1 == v2 )
  {
    sub_20B31B0((__int64)v2);
    return v3;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (v4 & 4) != 0 )
    {
      v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)(v6 + 16) >> 1 )
        sub_20BCEC0(v6, v2);
    }
    sub_20B3390(a1);
    return v3;
  }
}
