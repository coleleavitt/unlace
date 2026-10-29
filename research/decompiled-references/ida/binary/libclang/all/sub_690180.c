__m128 *__fastcall sub_690180(__m128 *a1, __int64 a2)
{
  __int32 v2; // eax

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
  if ( v2 )
  {
    a1[1].m128_i32[0] = v2;
    *a1 = _mm_loadh_ps((const double *)(a2 + 64));
    return a1;
  }
  else
  {
    clang_getNullLocation(a1);
    return a1;
  }
}

