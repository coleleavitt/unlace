__int64 __fastcall sub_2032E40(const __m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  if ( a1[1].m128i_i8[0] )
    result = (__int64)sub_2032850(a1);
  else
    result = a1[2].m128i_i64[1];
  if ( result )
  {
    result = a1[2].m128i_i64[0];
    if ( result != a2 )
    {
      v3 = a1[2].m128i_i64[1];
      if ( result )
      {
        result = sub_2032C80(v3 + 136);
        *(_QWORD *)(v3 + 16) = 0;
        *(_BYTE *)(v3 + 24) = 0;
        v3 = a1[2].m128i_i64[1];
      }
      *(_QWORD *)(v3 + 16) = a2;
      *(_BYTE *)(v3 + 24) = 0;
      a1[2].m128i_i64[0] = a2;
    }
  }
  return result;
}
