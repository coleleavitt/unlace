__int64 __fastcall sub_977F40(__int64 a1, __int64 a2, bool a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 *v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v13; // [rsp+8h] [rbp-90h]
  __m128i v14; // [rsp+10h] [rbp-88h] BYREF
  __int64 v15; // [rsp+20h] [rbp-78h]
  __m128i v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 *v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 16);
  sub_EC6110(&v16, a2);
  v6 = (__int64 *)v16.m128i_i64[0];
  v7 = v18;
  v15 = v17;
  v14 = _mm_load_si128(&v16);
  v8 = v14.m128i_i64[1];
  v13 = v19;
LABEL_2:
  if ( v7 == v6 )
    goto LABEL_10;
  do
  {
    do
    {
      if ( (v8 & 3) != 0 )
      {
        v10 = v5;
        v9 = *(_QWORD *)sub_ECEDF0(&v14);
        if ( !v9 )
          goto LABEL_7;
      }
      else
      {
        v9 = *v6;
        if ( !*v6 )
          goto LABEL_13;
      }
      v10 = sub_977870(a1, v9, a3, a4);
      if ( !v10 )
        v10 = v5;
LABEL_7:
      v8 = v14.m128i_i64[1];
      if ( (v14.m128i_i8[8] & 3) == 0 )
      {
        v6 = (__int64 *)v14.m128i_i64[0];
        v5 = v10;
LABEL_13:
        v14.m128i_i64[0] = (__int64)++v6;
        goto LABEL_2;
      }
      if ( (v14.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v5 = v10;
        sub_ECEA10(&v14, 1);
        v8 = v14.m128i_i64[1];
        v6 = (__int64 *)v14.m128i_i64[0];
        goto LABEL_2;
      }
      v5 = v10;
      sub_ECEC20(&v14);
      v8 = v14.m128i_i64[1];
      v6 = (__int64 *)v14.m128i_i64[0];
    }
    while ( v7 != (__int64 *)v14.m128i_i64[0] );
LABEL_10:
    ;
  }
  while ( v13 != v8 );
  return v5;
}

