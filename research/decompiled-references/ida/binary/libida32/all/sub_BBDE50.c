__int64 __fastcall sub_BBDE50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (*v3)(); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // r12
  __int64 v9; // r13
  __m128i v10; // rax
  __m128i v11; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  __m128i v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]

  v2 = *a1;
  v3 = *(__int64 (**)())(*a1 + 224);
  if ( v3 == sub_BA1BB0 )
  {
LABEL_2:
    v4 = *(__int64 (**)())(v2 + 5992);
    if ( v4 != sub_BA32E0 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v5 = sub_ECA510(a2);
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 56))(a1, v5);
    if ( !(_BYTE)v6 )
      return 0;
    sub_EC6110(&v13, a2);
    v10.m128i_i64[0] = v13.m128i_i64[0];
    v8 = v15;
    v11 = _mm_load_si128(&v13);
    v9 = v16;
    v12 = v14;
    v10.m128i_i64[1] = v11.m128i_i64[1];
    while ( v10.m128i_i64[0] == v8 )
    {
      while ( 1 )
      {
        if ( v10.m128i_i64[1] == v9 )
          return v6;
        if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_14:
          v10.m128i_i64[0] = sub_ECEDF0(&v11);
LABEL_9:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)v10.m128i_i64[0]) )
          return 0;
        v10.m128i_i64[1] = v11.m128i_i64[1];
        if ( (v11.m128i_i8[8] & 3) != 0 )
          break;
        v10.m128i_i64[0] = v11.m128i_i64[0] + 8;
        v11.m128i_i64[0] = v10.m128i_i64[0];
        if ( v10.m128i_i64[0] != v8 )
          goto LABEL_8;
      }
      if ( (v11.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v11);
      else
        sub_ECEA10(&v11, 1);
      v10 = v11;
    }
LABEL_8:
    if ( (v10.m128i_i8[8] & 3) != 0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  if ( (unsigned __int8)v3() )
  {
    v2 = *a1;
    goto LABEL_2;
  }
  return 0;
}

