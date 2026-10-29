unsigned __int64 __fastcall sub_A0DA0(const __m128i *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  __m128i v4; // xmm3
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  unsigned __int64 v8; // r12
  void **v9; // rbx
  void *v10; // rdi
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __int64 v13; // rdi
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __m128i v16; // [rsp+10h] [rbp-78h] BYREF
  _OWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-20h]

  v1 = a1[1].m128i_i64[0];
  v19 = __readfsqword(0x28u);
  while ( v1 )
  {
    sub_9CD60(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = _mm_loadu_si128(a1 + 4);
  v5 = _mm_loadu_si128(a1 + 5);
  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i64[1] = (__int64)&a1->m128i_i64[1];
  v6 = _mm_loadu_si128(a1 + 6);
  a1[2].m128i_i64[0] = (__int64)&a1->m128i_i64[1];
  v7 = _mm_loadu_si128(a1 + 7);
  a1[2].m128i_i64[1] = 0;
  v16 = v4;
  v17[0] = v6;
  v17[1] = v7;
  v18[0] = v4;
  v15 = v5;
  v18[1] = v5;
  sub_9EFF0((__int64 *)v18, (__int64 *)v17);
  v8 = a1[7].m128i_i64[1] + 8;
  v9 = (void **)(v5.m128i_i64[1] + 8);
  if ( v5.m128i_i64[1] + 8 < v8 )
  {
    do
    {
      v10 = *v9++;
      operator delete(v10, 0x200u);
    }
    while ( (unsigned __int64)v9 < v8 );
  }
  v11 = _mm_load_si128(&v16);
  v12 = _mm_load_si128(&v15);
  a1[8].m128i_i32[2] = -1;
  a1[6] = v11;
  a1[7] = v12;
  sub_A0CD0((__int64)a1);
  v13 = a1[16].m128i_i64[1];
  a1[18].m128i_i32[0] = -1;
  a1[18].m128i_i8[4] = 0;
  if ( v13 )
  {
    a1[17].m128i_i64[0] = 0;
    qfree();
    a1[16].m128i_i64[1] = 0;
    a1[17].m128i_i64[1] = 0;
  }
  if ( a1[18].m128i_i64[1] )
  {
    a1[19].m128i_i64[0] = 0;
    qfree();
    a1[18].m128i_i64[1] = 0;
    a1[19].m128i_i64[1] = 0;
  }
  if ( a1[20].m128i_i64[0] )
  {
    a1[20].m128i_i64[1] = 0;
    qfree();
    a1[20].m128i_i64[0] = 0;
    a1[21].m128i_i64[0] = 0;
  }
  return v19 - __readfsqword(0x28u);
}

