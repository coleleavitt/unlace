__m128i *__fastcall sub_E3A830(__m128i *a1, unsigned __int64 a2)
{
  char *v3; // rsi
  __m128i *v4; // rax
  _BYTE *v5; // rdi
  unsigned __int64 v7; // rax
  char v8; // cl
  char v9; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v10[15]; // [rsp+11h] [rbp-47h] BYREF
  void *v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    v7 = a2;
    v3 = v10;
    do
    {
      --v3;
      v8 = a0123456789abcd_3[v7 & 0xF] | 0x20;
      v7 >>= 4;
      *v3 = v8;
    }
    while ( v7 );
  }
  else
  {
    v9 = 48;
    v3 = &v9;
  }
  v11[0] = v12;
  sub_E34980(v11, v3, (__int64)v10);
  v4 = (__m128i *)sub_978080(v11, 0, 0, "0x", 2u);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v4->m128i_i64[0] == &v4[1] )
  {
    a1[1] = _mm_loadu_si128(v4 + 1);
  }
  else
  {
    a1->m128i_i64[0] = v4->m128i_i64[0];
    a1[1].m128i_i64[0] = v4[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = v4->m128i_i64[1];
  v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
  v5 = v11[0];
  v4->m128i_i64[1] = 0;
  v4[1].m128i_i8[0] = 0;
  if ( v5 != v12 )
    operator delete(v5);
  return a1;
}

