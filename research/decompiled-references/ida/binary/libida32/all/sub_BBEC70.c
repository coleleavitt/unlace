__int64 __fastcall sub_BBEC70(__int64 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rbp
  __int64 (*v3)(); // rax
  unsigned int v4; // ebx
  unsigned int v5; // eax
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
  v2 = (unsigned __int8 *)v10;
  v3 = *(__int64 (**)())(*v10 + 4736);
  if ( v3 == sub_BA2910 )
    goto LABEL_3;
  if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v3)(v10, a2) )
    return 0;
  v2 = (unsigned __int8 *)v10;
LABEL_3:
  v4 = v2[10];
  if ( (_BYTE)v4 )
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
        if ( v9.m128i_i64[1] == v8 )
          return v4;
        if ( (v9.m128i_i8[8] & 3) != 0 )
LABEL_16:
          v9.m128i_i64[0] = sub_ECEDF0(&v11);
LABEL_11:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v10 + 96))(v10, *(_QWORD *)v9.m128i_i64[0]) )
          return 0;
        v9.m128i_i64[1] = v11.m128i_i64[1];
        if ( (v11.m128i_i8[8] & 3) != 0 )
          break;
        v9.m128i_i64[0] = v11.m128i_i64[0] + 8;
        v11.m128i_i64[0] = v9.m128i_i64[0];
        if ( v7 != v9.m128i_i64[0] )
          goto LABEL_10;
      }
      if ( (v11.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v11);
      else
        sub_ECEA10(&v11, 1);
      v9 = v11;
    }
LABEL_10:
    if ( (v9.m128i_i8[8] & 3) != 0 )
      goto LABEL_16;
    goto LABEL_11;
  }
  sub_C6FDE0(&v13);
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)v2 + 96LL))(v2, v13.m128i_i64[1]) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v10 + 96))(v10, v14);
    if ( (_BYTE)v5 )
      return v5;
  }
  return v4;
}

