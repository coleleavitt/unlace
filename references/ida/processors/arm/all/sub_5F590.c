void __fastcall sub_5F590(__m128i *a1, __m128i *a2, __int64 (__fastcall *a3)(__m128i *, const __m128i *))
{
  __m128i *v4; // rbx
  const __m128i *v5; // rdi

  if ( (char *)a2 - (char *)a1 <= 512 )
  {
    sub_5C520(a1, a2, a3);
  }
  else
  {
    v4 = a1 + 32;
    sub_5C520(a1, a1 + 32, a3);
    if ( &a1[32] != a2 )
    {
      do
      {
        v5 = v4;
        v4 += 2;
        sub_5C490(v5, a3);
      }
      while ( a2 != v4 );
    }
  }
}
