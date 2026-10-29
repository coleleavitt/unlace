__int64 __fastcall sub_BB0940(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rdi
  unsigned int v4; // ebx
  __int64 (*v5)(); // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __m128i v8; // rax
  __int64 v10; // rax
  __int64 *v11; // [rsp+8h] [rbp-80h] BYREF
  __m128i v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h]
  __m128i v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]

  v11 = a1;
  v2 = sub_BA5B20(&v11, a2);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v11;
  v4 = v2;
  v5 = *(__int64 (**)())(*v11 + 4824);
  if ( v5 == sub_BA29C0 )
    goto LABEL_3;
  if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v11, a2) )
  {
    v3 = v11;
LABEL_3:
    if ( *((_BYTE *)v3 + 10) )
    {
      v10 = sub_C70F40(a2);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v11 + 96))(v11, v10) )
        return 0;
    }
    sub_EC6110(&v14, a2);
    v8.m128i_i64[0] = v14.m128i_i64[0];
    v6 = v16;
    v12 = _mm_load_si128(&v14);
    v7 = v17;
    v13 = v15;
    v8.m128i_i64[1] = v12.m128i_i64[1];
    while ( 1 )
    {
      if ( v6 == v8.m128i_i64[0] )
      {
LABEL_11:
        if ( v7 == v8.m128i_i64[1] )
          return v4;
      }
      while ( 1 )
      {
        if ( (v8.m128i_i8[8] & 3) != 0 )
          v8.m128i_i64[0] = sub_ECEDF0(&v12);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v11 + 96))(v11, *(_QWORD *)v8.m128i_i64[0]) )
          return 0;
        v8.m128i_i64[1] = v12.m128i_i64[1];
        if ( (v12.m128i_i8[8] & 3) != 0 )
          break;
        v8.m128i_i64[0] = v12.m128i_i64[0] + 8;
        v12.m128i_i64[0] = v8.m128i_i64[0];
        if ( v6 == v8.m128i_i64[0] )
          goto LABEL_11;
      }
      if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v12);
      else
        sub_ECEA10(&v12, 1);
      v8 = v12;
    }
  }
  return 0;
}

