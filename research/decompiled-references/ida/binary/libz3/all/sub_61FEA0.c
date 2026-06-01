__m128 *__fastcall sub_61FEA0(__m128 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax

  v6 = sub_61F790(a2, a3, a4, a4, a5, a6);
  *a1 = _mm_loadh_ps((const double *)(a2 + 24));
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  return a1;
}

