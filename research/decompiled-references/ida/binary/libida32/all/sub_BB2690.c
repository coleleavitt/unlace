__int64 __fastcall sub_BB2690(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __m128i v8; // rax
  __int64 result; // rax
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __m128i v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 224);
  if ( (char *)v3 != (char *)sub_BA1BB0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6032);
  if ( v4 != sub_BA3330 )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    {
      v2 = *a1;
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  v5 = *(__int64 (**)())(v2 + 6040);
  if ( v5 != sub_BA3340 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
    return 0;
  sub_EC6110(&v12, a2);
  v8.m128i_i64[0] = v12.m128i_i64[0];
  v6 = v14;
  v10 = _mm_load_si128(&v12);
  v7 = v15;
  v11 = v13;
  v8.m128i_i64[1] = v10.m128i_i64[1];
LABEL_5:
  if ( v6 == v8.m128i_i64[0] )
    goto LABEL_11;
  do
  {
    do
    {
      if ( (v8.m128i_i8[8] & 3) != 0 )
        v8.m128i_i64[0] = sub_ECEDF0(&v10);
      result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)v8.m128i_i64[0]);
      if ( !(_BYTE)result )
        return result;
      v8.m128i_i64[1] = v10.m128i_i64[1];
      if ( (v10.m128i_i8[8] & 3) != 0 )
      {
        if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v10);
        else
          sub_ECEA10(&v10, 1);
        v8 = v10;
        goto LABEL_5;
      }
      v8.m128i_i64[0] = v10.m128i_i64[0] + 8;
      v10.m128i_i64[0] = v8.m128i_i64[0];
    }
    while ( v6 != v8.m128i_i64[0] );
LABEL_11:
    ;
  }
  while ( v8.m128i_i64[1] != v7 );
  return 1;
}

