__int64 sub_1C3F00()
{
  __m128i v0; // xmm5
  unsigned int v1; // ebx
  __m128i v3; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v4[2]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v5; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v6; // [rsp+28h] [rbp-D0h]
  __int64 v7[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+58h] [rbp-A0h]
  __m128i v10; // [rsp+70h] [rbp-88h]
  __int64 v11; // [rsp+80h] [rbp-78h]
  __int128 v12; // [rsp+88h] [rbp-70h]
  __int64 v13; // [rsp+98h] [rbp-60h]
  int v14; // [rsp+A0h] [rbp-58h]
  __int64 v15; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+B8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v4[0] = 0;
  v6 = 0;
  v4[1] = 0;
  v5 = 0;
  v7[0] = 0;
  v7[1] = 0;
  v8 = 0;
  v11 = 0;
  v13 = 0;
  v14 = -1;
  v15 = 0;
  v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DE840, (__m128i)(unsigned __int64)v7);
  v9 = 0;
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DE840, (__m128i)(unsigned __int64)v4);
  v12 = 0;
  for_all_arglocs();
  v10.m128i_i64[0] = (__int64)off_4DE840;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  v0 = _mm_load_si128(&v3);
  v11 = 0;
  v13 = 0;
  v14 = -1;
  v15 = 0;
  v10 = v0;
  v12 = 0;
  for_all_arglocs();
  v10.m128i_i64[0] = (__int64)off_4DE840;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  v1 = sub_64820(v7, v4);
  if ( (_BYTE)v1 )
    v1 = sub_317F40(&v5, &v8);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  qfree(v7[0]);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  qfree(v4[0]);
  return v1;
}
