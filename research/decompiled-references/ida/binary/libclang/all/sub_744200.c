__m128i *__fastcall sub_744200(_QWORD *a1, __int64 a2, unsigned __int32 a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i *v8; // r13
  __int8 v9; // al
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  if ( a5 == 1 )
  {
    v6 = 1;
    v7 = 2;
  }
  else if ( a5 == 2 )
  {
    v6 = 2;
    v7 = 3;
  }
  else
  {
    v6 = 0;
    v7 = 1;
  }
  v12 = a4;
  v11 = 0;
  v13 = v13 & 0xFC00000000000000LL | (v6 << 52) | (v7 << 48) | 0x19C00000000LL;
  v8 = (__m128i *)sub_7222F0((__int64)(a1 + 274), 48, 3);
  sub_744060(v8, a1, &v11, a2, a3);
  v9 = v8[1].m128i_i8[14];
  v8[2].m128i_i8[2] |= 4u;
  if ( (~v9 & 0xF0) != 0 || v8->m128i_i64[0] )
    return v8;
  v8[1].m128i_i8[14] = v9 & 0xF;
  return v8;
}

