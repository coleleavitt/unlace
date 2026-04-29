__int64 __fastcall sub_310850(__int64 *a1, __m128i *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  result = 0;
  if ( a1[1] )
  {
    v3 = a2->m128i_i64[0];
    v5 = a2->m128i_i64[1];
    if ( v5 + v3 - 1 >= v3 )
    {
      v7 = *a1;
      if ( v3 | v5 )
      {
        v8[0] = *a1;
        return sub_310600(a1, v8, a2);
      }
      else
      {
        if ( v7 )
        {
          a1[1] = 0;
          qfree(v7);
          *a1 = 0;
          a1[2] = 0;
        }
        return 1;
      }
    }
  }
  return result;
}
