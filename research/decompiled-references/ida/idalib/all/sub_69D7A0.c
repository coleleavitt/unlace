__int64 __fastcall sub_69D7A0(__m128i *a1, __int64 *a2, __int64 a3, __m128i *a4)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 v7; // dl
  __int64 result; // rax
  int v9; // ebx
  int v10; // r12d

  v6 = (unsigned __int8 *)a4->m128i_i64[0];
  if ( a4->m128i_i64[0] >= (unsigned __int64)a4->m128i_i64[1]
    || (v7 = *v6, a4->m128i_i64[0] = (__int64)(v6 + 1), result = 0, v7 <= 1u) )
  {
    v9 = 0;
    v10 = unpack_dd(a4);
    if ( v10 > 0 )
    {
      while ( (unsigned __int8)sub_69D040(a1, a2, a3, a4) )
      {
        if ( v10 == ++v9 )
          return v10;
      }
      return v9;
    }
    else
    {
      return v10;
    }
  }
  return result;
}
