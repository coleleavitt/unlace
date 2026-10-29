__int64 __fastcall sub_1F75DF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r9
  __m128i v9; // xmm0
  volatile signed __int32 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // [rsp-10h] [rbp-48h]
  __m128i v21; // [rsp+0h] [rbp-38h] BYREF
  __m128i v22; // [rsp+10h] [rbp-28h] BYREF

  sub_1F6B880(&v21);
  sub_A1FE00(v21.m128i_i64[0], 1, 1);
  sub_A1FE00(v21.m128i_i64[0], 32, 2);
  sub_A1FE00(v21.m128i_i64[0], 0, 10);
  v2 = a1[2];
  v3 = v21.m128i_i64[1];
  v22.m128i_i64[0] = v21.m128i_i64[0];
  v21 = 0;
  v22.m128i_i64[1] = v3;
  v4 = sub_A22F90(v2, v22.m128i_i64);
  if ( v22.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v22.m128i_i64[1]);
  v5 = a1[107];
  v6 = a1[106];
  v22.m128i_i64[0] = 1;
  v7 = a1[2];
  v8 = v5 - v6;
  v22.m128i_i64[1] = (__int64)(v5 - v6) >> 3;
  if ( v6 == v5 )
  {
    v8 = 0;
    v6 = 0;
  }
  sub_1F759B0(v7, v4, (unsigned __int8 *)&v22, 2, v6, v8, 0);
  sub_1F6B880(&v22);
  v9 = _mm_load_si128(&v22);
  v10 = (volatile signed __int32 *)v21.m128i_i64[1];
  v11 = v22.m128i_i64[0];
  v22 = 0;
  v21 = v9;
  if ( v10 )
  {
    sub_4343A0(v10);
    if ( v22.m128i_i64[1] )
      sub_4343A0((volatile signed __int32 *)v22.m128i_i64[1]);
    v11 = v21.m128i_i64[0];
  }
  sub_A1FE00(v11, 2, 1);
  sub_A1FE00(v21.m128i_i64[0], 32, 2);
  sub_A1FE00(v21.m128i_i64[0], 0, 10);
  v12 = a1[2];
  v13 = v21.m128i_i64[1];
  v22.m128i_i64[0] = v21.m128i_i64[0];
  v21 = 0;
  v22.m128i_i64[1] = v13;
  v14 = sub_A22F90(v12, v22.m128i_i64);
  if ( v22.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v22.m128i_i64[1]);
  v15 = a1[95];
  v16 = a1[94];
  v22.m128i_i64[0] = 2;
  v17 = a1[2];
  v18 = v15 - v16;
  v22.m128i_i64[1] = (__int64)(v15 - v16) >> 4;
  if ( v16 == v15 )
  {
    v18 = 0;
    v16 = 0;
  }
  sub_1F759B0(v17, v14, (unsigned __int8 *)&v22, 2, v16, v18, 0);
  result = v20;
  if ( v21.m128i_i64[1] )
    return sub_4343A0((volatile signed __int32 *)v21.m128i_i64[1]);
  return result;
}
