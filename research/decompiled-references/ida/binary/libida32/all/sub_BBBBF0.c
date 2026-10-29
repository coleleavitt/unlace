__int64 __fastcall sub_BBBBF0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  unsigned int v8; // ebp
  __int64 v10; // rbx
  __int64 v11; // r12
  __m128i v12; // rax
  __int64 *v13; // [rsp+8h] [rbp-80h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  __m128i v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v13 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v13, a2) )
    return 0;
  v2 = v13;
  v3 = *v13;
  v4 = *(__int64 (**)())(*v13 + 4536);
  if ( v4 != sub_BA2780 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v13, a2) )
      return 0;
    v2 = v13;
    v3 = *v13;
  }
  v5 = *(__int64 (**)())(v3 + 4552);
  if ( v5 != sub_BA27A0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v2, a2) )
      return 0;
    v2 = v13;
    v3 = *v13;
  }
  v6 = *(__int64 (**)())(v3 + 4568);
  if ( v6 != sub_BA27C0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v2, a2) )
      return 0;
    v2 = v13;
    v3 = *v13;
  }
  v7 = *(__int64 (**)())(v3 + 4608);
  if ( v7 != sub_BA2810 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v2, a2) )
      return 0;
    v2 = v13;
    v3 = *v13;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v3 + 136))(
         v2,
         **(_QWORD **)(a2 + 24),
         *(_QWORD *)(a2 + 24) + 8LL);
  if ( (_BYTE)v8 )
  {
    sub_EC6110(&v16, a2);
    v12.m128i_i64[0] = v16.m128i_i64[0];
    v10 = v18;
    v14 = _mm_load_si128(&v16);
    v11 = v19;
    v15 = v17;
    v12.m128i_i64[1] = v14.m128i_i64[1];
    while ( v10 == v12.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v11 == v12.m128i_i64[1] )
          return v8;
        if ( (v12.m128i_i8[8] & 3) != 0 )
LABEL_17:
          v12.m128i_i64[0] = sub_ECEDF0(&v14);
LABEL_12:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v13 + 96))(v13, *(_QWORD *)v12.m128i_i64[0]) )
          return 0;
        v12.m128i_i64[1] = v14.m128i_i64[1];
        if ( (v14.m128i_i8[8] & 3) != 0 )
          break;
        v12.m128i_i64[0] = v14.m128i_i64[0] + 8;
        v14.m128i_i64[0] = v12.m128i_i64[0];
        if ( v10 != v12.m128i_i64[0] )
          goto LABEL_11;
      }
      if ( (v14.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v14);
      else
        sub_ECEA10(&v14, 1);
      v12 = v14;
    }
LABEL_11:
    if ( (v12.m128i_i8[8] & 3) != 0 )
      goto LABEL_17;
    goto LABEL_12;
  }
  return 0;
}

