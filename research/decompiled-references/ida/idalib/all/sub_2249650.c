bool __fastcall sub_2249650(const __m128i *a1, __int64 a2)
{
  __int32 v2; // eax
  __int64 v3; // r8
  __int32 v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9
  bool result; // al
  int v8; // eax
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm3
  __int64 v13; // r9
  __int64 v14; // [rsp+8h] [rbp-60h] BYREF
  _OWORD v15[2]; // [rsp+10h] [rbp-58h] BYREF
  char v16; // [rsp+31h] [rbp-37h]
  __m128i v17; // [rsp+38h] [rbp-30h]
  __m128i v18; // [rsp+48h] [rbp-20h]
  char v19; // [rsp+59h] [rbp-Fh]

  v14 = a2;
  if ( a2 )
  {
    v2 = a1[21].m128i_i32[0];
    v3 = a1[20].m128i_i64[0];
    if ( !v2 )
      goto LABEL_8;
    v4 = v2 - 1;
    v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = *(_QWORD *)(v3 + 16LL * v5);
    result = 0;
    if ( a2 == v6 )
      return result;
    v8 = 1;
    if ( v6 == -4096 )
    {
LABEL_8:
      v9 = _mm_loadu_si128(a1 + 7);
      v10 = _mm_loadu_si128(a1 + 9);
      v16 = 1;
      v11 = _mm_loadu_si128(a1 + 10);
      v12 = _mm_loadu_si128(a1 + 8);
      v19 = 1;
      v17 = v10;
      v18 = v11;
      v15[0] = v9;
      v15[1] = v12;
      return !sub_22493C0((__int64)v15, &v14);
    }
    while ( 1 )
    {
      v5 = v4 & (v8 + v5);
      v13 = *(_QWORD *)(v3 + 16LL * v5);
      if ( a2 == v13 )
        return 0;
      ++v8;
      if ( v13 == -4096 )
        goto LABEL_8;
    }
  }
  else
  {
    result = 0;
    if ( !a1[19].m128i_i32[2] )
      return a1[9].m128i_i64[0] == a1[7].m128i_i64[0];
  }
  return result;
}
