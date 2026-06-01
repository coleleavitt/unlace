__int64 __fastcall sub_BD6E20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  __m128i v7; // rax
  __int64 result; // rax
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  __m128i v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 224);
  if ( (char *)v3 != (char *)sub_BC58F0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 5240);
  if ( v4 != sub_BC6A40 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    return 0;
  sub_EE9E50(&v11, a2);
  v7.m128i_i64[0] = v11.m128i_i64[0];
  v5 = v13;
  v9 = _mm_load_si128(&v11);
  v6 = v14;
  v10 = v12;
  v7.m128i_i64[1] = v9.m128i_i64[1];
LABEL_4:
  if ( v5 == v7.m128i_i64[0] )
    goto LABEL_10;
  do
  {
    do
    {
      if ( (v7.m128i_i8[8] & 3) != 0 )
        v7.m128i_i64[0] = sub_EF2B30(&v9);
      result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)v7.m128i_i64[0]);
      if ( !(_BYTE)result )
        return result;
      v7.m128i_i64[1] = v9.m128i_i64[1];
      if ( (v9.m128i_i8[8] & 3) != 0 )
      {
        if ( (v9.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v9);
        else
          sub_EF2750(&v9, 1);
        v7 = v9;
        goto LABEL_4;
      }
      v7.m128i_i64[0] = v9.m128i_i64[0] + 8;
      v9.m128i_i64[0] = v7.m128i_i64[0];
    }
    while ( v5 != v7.m128i_i64[0] );
LABEL_10:
    ;
  }
  while ( v6 != v7.m128i_i64[1] );
  return 1;
}
