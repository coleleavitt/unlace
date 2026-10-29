__int64 __fastcall sub_FCE200(__m128 *a1, int *a2, int *a3, __int64 a4, char a5)
{
  int v5; // eax
  int *v6; // rsi
  __int64 result; // rax
  int *v8; // rcx
  double v9[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v9[0] = a3;
  *a1 = _mm_loadh_ps(v9);
  if ( !a5 && a2 != a3 )
  {
    v5 = *a2;
    v6 = a2 + 2;
    result = (unsigned int)(v5 + 2);
    if ( (unsigned int)result <= 1 )
    {
      do
      {
        v8 = v6;
        if ( a3 == v6 )
        {
          a1->m128_u64[0] = (unsigned __int64)a3;
          return result;
        }
        v6 += 2;
        result = (unsigned int)(*v8 + 2);
      }
      while ( (unsigned int)result <= 1 );
      a1->m128_u64[0] = (unsigned __int64)v8;
    }
  }
  return result;
}
