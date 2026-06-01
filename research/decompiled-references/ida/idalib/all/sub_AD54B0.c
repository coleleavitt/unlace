__int64 __fastcall sub_AD54B0(__int64 *a1)
{
  __int64 v1; // r9
  __m128i v2; // xmm1
  __int64 result; // rax
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+F8h] [rbp-50h]
  __m128i v8; // [rsp+108h] [rbp-40h] BYREF

  sub_F46670(*a1 + 8, a1[1]);
  sub_EADB70(&v6);
  v2 = _mm_loadu_si128(&v8);
  result = v7;
  v4 = v6;
LABEL_2:
  if ( (__int64 *)v2.m128i_i64[0] == v4 )
    goto LABEL_7;
  do
  {
    do
    {
      if ( (result & 3) != 0 )
        v5 = *(_QWORD *)sub_EF2B30(&v6);
      else
        v5 = *v4;
      sub_AD2220(*a1 + 8, 0, 0, v5, *a1, v1);
      result = v7;
      if ( (v7 & 3) != 0 )
      {
        if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v6);
        else
          sub_EF2750(&v6, 1);
        result = v7;
        v4 = v6;
        goto LABEL_2;
      }
      v4 = v6 + 1;
      v6 = v4;
    }
    while ( (__int64 *)v2.m128i_i64[0] != v4 );
LABEL_7:
    ;
  }
  while ( v2.m128i_i64[1] != result );
  return result;
}
