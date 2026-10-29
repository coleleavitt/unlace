__m128 *__fastcall sub_64B4C0(__m128 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  if ( *(_BYTE *)(a2 + 2986) )
  {
    sub_667470(a1, a2 + 2144, a3, a4);
    return a1;
  }
  else
  {
    *a1 = _mm_loadh_ps((const double *)a2);
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    return a1;
  }
}

