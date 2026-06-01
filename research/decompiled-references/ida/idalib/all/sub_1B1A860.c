__int64 __fastcall sub_1B1A860(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __m128i v3; // xmm1
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  __m128 v9; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+108h] [rbp-40h] BYREF

  v2 = 0;
  sub_EE9E50(&v9, a2);
  v3 = _mm_loadu_si128(&v10);
  v4 = v9.m128_u64[1];
  v5 = (unsigned __int64 *)v9.m128_u64[0];
LABEL_2:
  if ( (unsigned __int64 *)v3.m128i_i64[0] == v5 )
    goto LABEL_10;
  do
  {
    do
    {
      if ( (v4 & 3) != 0 )
        v6 = *(_QWORD *)sub_EF2B30((__int64)&v9);
      else
        v6 = *v5;
      if ( v6 )
      {
        v7 = sub_1B1A790(a1, v6);
        if ( (_BYTE)v7 )
          v2 = v7;
      }
      v4 = v9.m128_u64[1];
      if ( (v9.m128_i8[8] & 3) != 0 )
      {
        if ( (v9.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v9);
        else
          sub_EF2750((unsigned __int64 *)&v9, 1);
        v4 = v9.m128_u64[1];
        v5 = (unsigned __int64 *)v9.m128_u64[0];
        goto LABEL_2;
      }
      v5 = (unsigned __int64 *)(v9.m128_u64[0] + 8);
      v9.m128_u64[0] = (unsigned __int64)v5;
    }
    while ( (unsigned __int64 *)v3.m128i_i64[0] != v5 );
LABEL_10:
    ;
  }
  while ( v3.m128i_i64[1] != v4 );
  return v2;
}
