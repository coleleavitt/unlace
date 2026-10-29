__int64 __fastcall sub_BB8E60(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  __m128i v10; // rax
  __int64 *v12; // [rsp+8h] [rbp-80h] BYREF
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h]
  __m128i v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]

  v12 = a1;
  v2 = sub_BA5B20(&v12, a2);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v12;
  v4 = v2;
  v5 = *v12;
  v6 = *(__int64 (**)())(*v12 + 4640);
  if ( v6 == sub_BA2850 )
    goto LABEL_3;
  if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v12, a2) )
  {
    v3 = v12;
    v5 = *v12;
LABEL_3:
    v7 = *(__int64 (**)())(v5 + 4656);
    if ( v7 != sub_BA2870 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v3, a2) )
      return 0;
    sub_EC6110(&v15, a2);
    v10.m128i_i64[0] = v15.m128i_i64[0];
    v8 = v17;
    v13 = _mm_load_si128(&v15);
    v9 = v18;
    v14 = v16;
    v10.m128i_i64[1] = v13.m128i_i64[1];
    while ( 1 )
    {
      if ( v8 == v10.m128i_i64[0] )
      {
LABEL_11:
        if ( v9 == v10.m128i_i64[1] )
          return v4;
      }
      while ( 1 )
      {
        if ( (v10.m128i_i8[8] & 3) != 0 )
          v10.m128i_i64[0] = sub_ECEDF0(&v13);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v12 + 96))(v12, *(_QWORD *)v10.m128i_i64[0]) )
          return 0;
        v10.m128i_i64[1] = v13.m128i_i64[1];
        if ( (v13.m128i_i8[8] & 3) != 0 )
          break;
        v10.m128i_i64[0] = v13.m128i_i64[0] + 8;
        v13.m128i_i64[0] = v10.m128i_i64[0];
        if ( v8 == v10.m128i_i64[0] )
          goto LABEL_11;
      }
      if ( (v13.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v13);
      else
        sub_ECEA10(&v13, 1);
      v10 = v13;
    }
  }
  return 0;
}

