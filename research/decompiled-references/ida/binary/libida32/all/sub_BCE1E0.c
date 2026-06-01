__int64 __fastcall sub_BCE1E0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rax
  unsigned int v7; // ebp
  __int64 v9; // rbx
  __int64 v10; // r12
  __m128i v11; // rax
  __int64 *v12; // [rsp+8h] [rbp-80h] BYREF
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h]
  __m128i v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]

  v12 = a1;
  if ( !(unsigned __int8)sub_BA5F70(&v12, a2) )
    return 0;
  v2 = v12;
  v3 = *v12;
  v4 = *(__int64 (**)())(*v12 + 5464);
  if ( v4 != sub_BA2EC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v12, a2) )
      return 0;
    v2 = v12;
    v3 = *v12;
  }
  v5 = *(__int64 (**)())(v3 + 5472);
  if ( v5 == sub_BA2ED0 )
  {
LABEL_4:
    v6 = *(__int64 (**)())(v3 + 5488);
    if ( v6 != sub_BA2EF0 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v2, a2) )
      return 0;
    v7 = sub_BCA0F0(&v12, a2);
    if ( !(_BYTE)v7 )
      return 0;
    sub_EC6110(&v15, a2);
    v11.m128i_i64[0] = v15.m128i_i64[0];
    v9 = v17;
    v13 = _mm_load_si128(&v15);
    v10 = v18;
    v14 = v16;
    v11.m128i_i64[1] = v13.m128i_i64[1];
    while ( v9 == v11.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v11.m128i_i64[1] == v10 )
          return v7;
        if ( (v11.m128i_i8[8] & 3) != 0 )
LABEL_16:
          v11.m128i_i64[0] = sub_ECEDF0(&v13);
LABEL_11:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v12 + 96))(v12, *(_QWORD *)v11.m128i_i64[0]) )
          return 0;
        v11.m128i_i64[1] = v13.m128i_i64[1];
        if ( (v13.m128i_i8[8] & 3) != 0 )
          break;
        v11.m128i_i64[0] = v13.m128i_i64[0] + 8;
        v13.m128i_i64[0] = v11.m128i_i64[0];
        if ( v9 != v11.m128i_i64[0] )
          goto LABEL_10;
      }
      if ( (v13.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v13);
      else
        sub_ECEA10(&v13, 1);
      v11 = v13;
    }
LABEL_10:
    if ( (v11.m128i_i8[8] & 3) != 0 )
      goto LABEL_16;
    goto LABEL_11;
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v2, a2) )
  {
    v2 = v12;
    v3 = *v12;
    goto LABEL_4;
  }
  return 0;
}

