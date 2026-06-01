unsigned __int64 __fastcall sub_5CE580(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        double a5,
        double a6,
        double a7)
{
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rbp
  unsigned __int64 v11; // r12
  unsigned int v13; // eax
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // [rsp+0h] [rbp-48h]

  v9 = sub_5C93A0(a1, (__int64)a4, a3);
  if ( !v9 )
    return a3;
  v10 = v9;
  if ( *v9 != a3 )
    return a3;
  if ( *a4 == a3 )
    return a3;
  if ( !a4 )
    return a3;
  if ( !(unsigned __int8)sub_5CBBA0(a3, a4) )
    return a3;
  if ( a3 - 1 != *v10 )
  {
    v15 = sub_505D70((__int64)&a1[101].m128i_i64[1], *v10);
    if ( v15 != sub_505D70((__int64)&a1[101].m128i_i64[1], a3 - 1) )
      return a3;
  }
  v13 = sub_503F40((__int64)&a1[106].m128i_i64[1], a2);
  v14 = sub_505DE0((__int64)&a1[106].m128i_i64[1], v13);
  if ( !v14 )
    return a3;
  if ( *v14 != *v10 )
    return a3;
  v11 = v10[1];
  if ( !(unsigned __int8)sub_5CE320(a1, (__int64)a4, v10, 0, a5, a6, a7) )
    return a3;
  return v11;
}
