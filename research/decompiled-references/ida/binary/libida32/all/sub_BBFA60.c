__int64 __fastcall sub_BBFA60(__int64 *a1, const __m128i *a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // r13
  __m128i v15; // rax
  __m128i v17; // [rsp+0h] [rbp-98h] BYREF
  __int64 v18; // [rsp+10h] [rbp-88h]
  __m128i v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  __m128i v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h]

  v3 = *a1;
  v4 = *(unsigned __int8 (**)(void))(*a1 + 224);
  if ( (char *)v4 != (char *)sub_BA1BB0 )
  {
    if ( !v4() )
      return 0;
    v3 = *a1;
  }
  v5 = *(__int64 (**)())(v3 + 5904);
  if ( v5 != sub_BA3230 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, const __m128i *))v5)(a1, a2) )
      return 0;
    v3 = *a1;
  }
  v6 = a2[1].m128i_i64[0];
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(v3 + 88))(a1, v6, a2[1].m128i_i64[1]) )
  {
    v20 = a2[3].m128i_i64[0];
    v22 = v20;
    v11 = *a1;
    v19 = _mm_loadu_si128(a2 + 2);
    v21 = v19;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v11 + 64))(
            a1,
            v6,
            v7,
            v8,
            v9,
            v10,
            v19.m128i_i64[0],
            v19.m128i_i64[1],
            v20);
    if ( (_BYTE)v12 )
    {
      sub_EC6110(&v21, a2);
      v15.m128i_i64[0] = v21.m128i_i64[0];
      v13 = v23;
      v17 = _mm_load_si128(&v21);
      v14 = v24;
      v18 = v22;
      v15.m128i_i64[1] = v17.m128i_i64[1];
      while ( v15.m128i_i64[0] == v13 )
      {
        while ( 1 )
        {
          if ( v15.m128i_i64[1] == v14 )
            return v12;
          if ( (v15.m128i_i8[8] & 3) != 0 )
LABEL_13:
            v15.m128i_i64[0] = sub_ECEDF0(&v17);
LABEL_8:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)v15.m128i_i64[0]) )
            return 0;
          v15.m128i_i64[1] = v17.m128i_i64[1];
          if ( (v17.m128i_i8[8] & 3) != 0 )
            break;
          v15.m128i_i64[0] = v17.m128i_i64[0] + 8;
          v17.m128i_i64[0] = v15.m128i_i64[0];
          if ( v15.m128i_i64[0] != v13 )
            goto LABEL_7;
        }
        if ( (v17.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v17);
        else
          sub_ECEA10(&v17, 1);
        v15 = v17;
      }
LABEL_7:
      if ( (v15.m128i_i8[8] & 3) != 0 )
        goto LABEL_13;
      goto LABEL_8;
    }
  }
  return 0;
}

