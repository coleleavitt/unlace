__int64 __fastcall sub_BBD170(__int64 *a1, const __m128i *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // xmm0
  unsigned int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // r12
  __m128i v15; // rax
  __int32 v17; // edx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 *v20; // [rsp+8h] [rbp-80h] BYREF
  __m128i v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h]
  __m128i v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h]

  v20 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v20, (__int64)a2) )
    return 0;
  v3 = v20;
  v4 = *v20;
  v5 = *(__int64 (**)())(*v20 + 4448);
  if ( v5 != sub_BA26D0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, const __m128i *))v5)(v20, a2) )
      return 0;
    v3 = v20;
    v4 = *v20;
  }
  v6 = a2[1].m128i_i64[0];
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(v4 + 88))(v3, v6, a2[1].m128i_i64[1]) )
    return 0;
  v11 = _mm_loadu_si128(a2 + 2);
  v24 = a2[3].m128i_i64[0];
  v23 = v11;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*v20 + 64))(
          v20,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11.m128i_i64[0],
          v11.m128i_i64[1],
          v24);
  if ( !(_BYTE)v12 )
    return 0;
  if ( (a2->m128i_i32[0] & 0x80000) == 0
    || !a2[3].m128i_i32[2]
    || (v17 = a2[4].m128i_i32[1], v18 = (__int64)&a2[((a2->m128i_i32[0] & 0x80000) != 0) + 3].m128i_i64[1], !v17) )
  {
LABEL_6:
    sub_EC6110(&v23, a2);
    v15.m128i_i64[0] = v23.m128i_i64[0];
    v13 = v25;
    v21 = _mm_load_si128(&v23);
    v14 = v26;
    v22 = v24;
    v15.m128i_i64[1] = v21.m128i_i64[1];
    while ( v13 == v15.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v14 == v15.m128i_i64[1] )
          return v12;
        if ( (v15.m128i_i8[8] & 3) != 0 )
LABEL_14:
          v15.m128i_i64[0] = sub_ECEDF0(&v21);
LABEL_9:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v20 + 96))(v20, *(_QWORD *)v15.m128i_i64[0]) )
          return 0;
        v15.m128i_i64[1] = v21.m128i_i64[1];
        if ( (v21.m128i_i8[8] & 3) != 0 )
          break;
        v15.m128i_i64[0] = v21.m128i_i64[0] + 8;
        v21.m128i_i64[0] = v15.m128i_i64[0];
        if ( v13 != v15.m128i_i64[0] )
          goto LABEL_8;
      }
      if ( (v21.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v21);
      else
        sub_ECEA10(&v21, 1);
      v15 = v21;
    }
LABEL_8:
    if ( (v15.m128i_i8[8] & 3) != 0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v19 = v18 + 32LL * (unsigned int)(v17 - 1) + 32;
  while ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v20 + 112))(v20, v18) )
  {
    v18 += 32;
    if ( v19 == v18 )
      goto LABEL_6;
  }
  return 0;
}

