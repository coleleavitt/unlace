unsigned __int64 __fastcall sub_20F9A0(const __m128i *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __m128i v4; // xmm3
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  const char *v7; // rsi
  __m128i v8; // xmm0
  unsigned __int64 v9; // r12
  void **v10; // rbx
  void *v11; // rdi
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __m128i v18; // [rsp+0h] [rbp-98h] BYREF
  __m128i v19; // [rsp+10h] [rbp-88h] BYREF
  _OWORD v20[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_46B930(qword_8CD748);
  v2 = a1[1].m128i_i64[0];
  while ( v2 )
  {
    sub_20BCB0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = _mm_loadu_si128(a1 + 4);
  v5 = _mm_loadu_si128(a1 + 5);
  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i64[1] = (__int64)&a1->m128i_i64[1];
  v6 = _mm_loadu_si128(a1 + 6);
  v7 = (const char *)v20;
  a1[2].m128i_i64[0] = (__int64)&a1->m128i_i64[1];
  v8 = _mm_loadu_si128(a1 + 7);
  a1[2].m128i_i64[1] = 0;
  v19 = v4;
  v20[0] = v6;
  v20[1] = v8;
  v21[0] = v4;
  v18 = v5;
  v21[1] = v5;
  sub_20DC70((__int64 *)v21, (const char *)v20);
  v9 = a1[7].m128i_i64[1] + 8;
  v10 = (void **)(v5.m128i_i64[1] + 8);
  if ( v5.m128i_i64[1] + 8 < v9 )
  {
    do
    {
      v11 = *v10;
      v7 = (const char *)&dword_200;
      ++v10;
      operator delete(v11, 0x200u);
    }
    while ( (unsigned __int64)v10 < v9 );
  }
  v12 = _mm_load_si128(&v19);
  v13 = _mm_load_si128(&v18);
  a1[8].m128i_i32[2] = -1;
  a1[6] = v12;
  a1[7] = v13;
  sub_20F8D0((__int64)a1, v7);
  v14 = a1[16].m128i_i64[1];
  a1[18].m128i_i64[0] = -1;
  a1[18].m128i_i8[8] = 0;
  if ( v14 )
  {
    a1[17].m128i_i64[0] = 0;
    qfree(v14, v7);
    a1[16].m128i_i64[1] = 0;
    a1[17].m128i_i64[1] = 0;
  }
  sub_46B950(qword_8CD748);
  v15 = a1[19].m128i_i64[0];
  if ( v15 )
  {
    a1[19].m128i_i64[1] = 0;
    qfree(v15, v7);
    a1[19].m128i_i64[0] = 0;
    a1[20].m128i_i64[0] = 0;
  }
  v16 = a1[20].m128i_i64[1];
  if ( v16 )
  {
    a1[21].m128i_i64[0] = 0;
    qfree(v16, v7);
    a1[20].m128i_i64[1] = 0;
    a1[21].m128i_i64[1] = 0;
  }
  return v22 - __readfsqword(0x28u);
}
