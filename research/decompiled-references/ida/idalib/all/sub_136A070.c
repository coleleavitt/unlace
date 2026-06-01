void __fastcall sub_136A070(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbx
  const __m128i *i; // r14
  __int64 v6; // rsi
  void *v7; // rcx
  __int64 v8; // rdi
  __m128i *v9; // rdx
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v13; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+30h] [rbp-78h]
  void *v15[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]

  v2 = a2 - a1;
  if ( v2 > 40 )
  {
    v3 = 0xCCCCCCCCCCCCCCCDLL * (v2 >> 3);
    v4 = (v3 - 2) / 2;
    for ( i = (const __m128i *)(a1 + 40 * v4 + 16); ; i = (const __m128i *)((char *)i - 40) )
    {
      v9 = (__m128i *)i[-1].m128i_i64[0];
      if ( v9 == i )
      {
        v10 = i[1].m128i_i64[0];
        v11 = _mm_loadu_si128(i);
        v15[0] = &v16;
        v7 = (void *)i[-1].m128i_i64[1];
        i->m128i_i8[0] = 0;
        i[-1].m128i_i64[1] = 0;
        v14 = v10;
        v13 = v11;
      }
      else
      {
        v6 = i->m128i_i64[0];
        v7 = (void *)i[-1].m128i_i64[1];
        v8 = i[1].m128i_i64[0];
        i[-1].m128i_i64[0] = (__int64)i;
        v13.m128i_i64[0] = v6;
        i[-1].m128i_i64[1] = 0;
        i->m128i_i8[0] = 0;
        v14 = v8;
        v15[0] = &v16;
        if ( v9 != &v13 )
        {
          v15[0] = v9;
          v16.m128i_i64[0] = v6;
          goto LABEL_5;
        }
      }
      v16 = _mm_load_si128(&v13);
LABEL_5:
      v15[1] = v7;
      v17 = v14;
      v13.m128i_i8[0] = 0;
      sub_1365E60(a1, v4, v3, (__int64)v15);
      if ( v15[0] != &v16 )
        operator delete(v15[0]);
      if ( !v4 )
        return;
      --v4;
    }
  }
}
