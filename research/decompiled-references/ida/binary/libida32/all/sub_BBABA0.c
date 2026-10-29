__int64 __fastcall sub_BBABA0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  unsigned int v6; // ebx
  __int64 v8; // rbp
  __int64 v9; // r12
  __m128i v10; // rax
  __int64 *v11; // [rsp+8h] [rbp-80h] BYREF
  __m128i v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h]
  __m128i v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]

  v11 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v11, a2) )
    return 0;
  v2 = v11;
  v3 = *v11;
  v4 = *(__int64 (**)())(*v11 + 4832);
  if ( v4 != sub_BA29D0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v11, a2) )
      return 0;
    v2 = v11;
    v3 = *v11;
  }
  v5 = *(__int64 (**)())(v3 + 4840);
  if ( v5 != sub_BA29E0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v2, a2) )
      return 0;
    v2 = v11;
    v3 = *v11;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v3 + 136))(
         v2,
         **(_QWORD **)(a2 + 40),
         *(_QWORD *)(a2 + 40) + 8LL);
  if ( (_BYTE)v6 )
  {
    sub_EC6110(&v14, a2);
    v10.m128i_i64[0] = v14.m128i_i64[0];
    v8 = v16;
    v12 = _mm_load_si128(&v14);
    v9 = v17;
    v13 = v15;
    v10.m128i_i64[1] = v12.m128i_i64[1];
    while ( v8 == v10.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v9 == v10.m128i_i64[1] )
          return v6;
        if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_15:
          v10.m128i_i64[0] = sub_ECEDF0(&v12);
LABEL_10:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v11 + 96))(v11, *(_QWORD *)v10.m128i_i64[0]) )
          return 0;
        v10.m128i_i64[1] = v12.m128i_i64[1];
        if ( (v12.m128i_i8[8] & 3) != 0 )
          break;
        v10.m128i_i64[0] = v12.m128i_i64[0] + 8;
        v12.m128i_i64[0] = v10.m128i_i64[0];
        if ( v8 != v10.m128i_i64[0] )
          goto LABEL_9;
      }
      if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v12);
      else
        sub_ECEA10(&v12, 1);
      v10 = v12;
    }
LABEL_9:
    if ( (v10.m128i_i8[8] & 3) != 0 )
      goto LABEL_15;
    goto LABEL_10;
  }
  return 0;
}

