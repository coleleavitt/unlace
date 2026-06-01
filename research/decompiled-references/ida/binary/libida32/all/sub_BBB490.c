__int64 __fastcall sub_BBB490(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  unsigned int v5; // ebx
  __int64 v7; // rbp
  __int64 v8; // r12
  __m128i v9; // rax
  __int64 *v10; // [rsp+8h] [rbp-80h] BYREF
  __m128i v11; // [rsp+10h] [rbp-78h] BYREF
  __int64 v12; // [rsp+20h] [rbp-68h]
  __m128i v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]

  v10 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v10, a2) )
    return 0;
  v2 = v10;
  v3 = *v10;
  v4 = *(__int64 (**)())(*v10 + 4104);
  if ( v4 != sub_BA2420 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v10, a2) )
      return 0;
    v2 = v10;
    v3 = *v10;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v3 + 136))(
         v2,
         **(_QWORD **)(a2 + 24),
         *(_QWORD *)(a2 + 24) + 8LL);
  if ( (_BYTE)v5 )
  {
    sub_EC6110(&v13, a2);
    v9.m128i_i64[0] = v13.m128i_i64[0];
    v7 = v15;
    v11 = _mm_load_si128(&v13);
    v8 = v16;
    v12 = v14;
    v9.m128i_i64[1] = v11.m128i_i64[1];
    while ( v7 == v9.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v8 == v9.m128i_i64[1] )
          return v5;
        if ( (v9.m128i_i8[8] & 3) != 0 )
LABEL_14:
          v9.m128i_i64[0] = sub_ECEDF0(&v11);
LABEL_9:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v10 + 96))(v10, *(_QWORD *)v9.m128i_i64[0]) )
          return 0;
        v9.m128i_i64[1] = v11.m128i_i64[1];
        if ( (v11.m128i_i8[8] & 3) != 0 )
          break;
        v9.m128i_i64[0] = v11.m128i_i64[0] + 8;
        v11.m128i_i64[0] = v9.m128i_i64[0];
        if ( v7 != v9.m128i_i64[0] )
          goto LABEL_8;
      }
      if ( (v11.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v11);
      else
        sub_ECEA10(&v11, 1);
      v9 = v11;
    }
LABEL_8:
    if ( (v9.m128i_i8[8] & 3) != 0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  return 0;
}

