__int64 __fastcall sub_BBA130(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  _QWORD *v6; // rbx
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  __m128i v11; // rax
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 224);
  if ( (char *)v3 != (char *)sub_BA1BB0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 5064);
  if ( v4 != sub_BA2BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 5128);
  if ( v5 == sub_BA2C20 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
  {
    v6 = (_QWORD *)(a2 + 56);
    v7 = a2 + 56 + 8LL * *(unsigned int *)(a2 + 52);
    if ( a2 + 56 == v7 )
    {
LABEL_10:
      sub_EC6110(&v14, a2);
      v11.m128i_i64[0] = v14.m128i_i64[0];
      v9 = v16;
      v12 = _mm_load_si128(&v14);
      v10 = v17;
      v13 = v15;
      v11.m128i_i64[1] = v12.m128i_i64[1];
      while ( 1 )
      {
        if ( v9 == v11.m128i_i64[0] )
        {
LABEL_17:
          if ( v10 == v11.m128i_i64[1] )
            return 1;
        }
        while ( 1 )
        {
          if ( (v11.m128i_i8[8] & 3) != 0 )
            v11.m128i_i64[0] = sub_ECEDF0(&v12);
          result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)v11.m128i_i64[0]);
          if ( !(_BYTE)result )
            return result;
          v11.m128i_i64[1] = v12.m128i_i64[1];
          if ( (v12.m128i_i8[8] & 3) != 0 )
            break;
          v11.m128i_i64[0] = v12.m128i_i64[0] + 8;
          v12.m128i_i64[0] = v11.m128i_i64[0];
          if ( v9 == v11.m128i_i64[0] )
            goto LABEL_17;
        }
        if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v12);
        else
          sub_ECEA10(&v12, 1);
        v11 = v12;
      }
    }
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v6) )
    {
      if ( (_QWORD *)v7 == ++v6 )
        goto LABEL_10;
    }
  }
  return 0;
}

