__int64 __fastcall sub_ABD620(__int64 *a1)
{
  __m128i v1; // xmm1
  __int64 result; // rax
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+F8h] [rbp-50h]
  __m128i v7; // [rsp+108h] [rbp-40h] BYREF

  nullsub_484(*a1 + 8, a1[1]);
  sub_E89E30(&v5);
  v1 = _mm_loadu_si128(&v7);
  result = v6;
  v3 = v5;
LABEL_2:
  if ( (__int64 *)v1.m128i_i64[0] == v3 )
    goto LABEL_7;
  do
  {
    do
    {
      if ( (result & 3) != 0 )
        v4 = *(_QWORD *)sub_ECEDF0(&v5);
      else
        v4 = *v3;
      sub_ABAAB0(*a1 + 8, 0, 0, v4, *a1);
      result = v6;
      if ( (v6 & 3) != 0 )
      {
        if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v5);
        else
          sub_ECEA10(&v5, 1);
        result = v6;
        v3 = v5;
        goto LABEL_2;
      }
      v3 = v5 + 1;
      v5 = v3;
    }
    while ( (__int64 *)v1.m128i_i64[0] != v3 );
LABEL_7:
    ;
  }
  while ( v1.m128i_i64[1] != result );
  return result;
}

