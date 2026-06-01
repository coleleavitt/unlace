__int64 __fastcall sub_3C6460(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v12; // rbx
  __int64 v13; // r12
  int v14; // ebp
  __int64 v15; // rdi

  v12 = *(__int64 **)a12;
  v13 = *(_QWORD *)a12 + 8LL * *(_QWORD *)(a12 + 8);
  if ( v13 == *(_QWORD *)a12 )
    return 0;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v15 = *v12;
      if ( *v12 )
        break;
      if ( (__int64 *)v13 == ++v12 )
        return 2 * (unsigned int)(unsigned __int8)v14;
    }
    ++v12;
    v14 |= sub_3A9A00(v15, 1u, a1, a2, a3, a4, a5, a6, a7, a8);
  }
  while ( (__int64 *)v13 != v12 );
  return 2 * (unsigned int)(unsigned __int8)v14;
}
