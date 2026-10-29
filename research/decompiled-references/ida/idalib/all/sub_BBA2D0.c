void __fastcall sub_BBA2D0(__int64 *a1, int a2, __int64 a3, const __m128i *a4, int a5)
{
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rbx
  bool v9; // r12
  char i; // bp
  __int64 v11; // rsi
  _WORD *v12; // rdx
  __m128i v13; // xmm0
  __int64 *v15; // [rsp+8h] [rbp-80h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  __m128i v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+40h] [rbp-48h]
  char v22; // [rsp+44h] [rbp-44h]

  v6 = *a1;
  if ( a2 == 1 )
  {
    v20 = sub_B8C330(v6);
    v13 = _mm_loadu_si128(a4);
    v18 = a3;
    v21 = a5;
    v19 = v13;
    v22 = 0;
    sub_BB57B0((__int64)&v18, v6);
  }
  else
  {
    v7 = a1;
    v15 = &a1[a2];
    if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 58 > 4 )
    {
      v8 = a4->m128i_i64[0];
      v17 = a4->m128i_i64[1];
      v9 = (a4->m128i_i8[1] & 4) != 0;
      if ( a1 == v15 )
        return;
    }
    else
    {
      v7 = a1 + 1;
      v8 = a4->m128i_i64[0];
      v9 = 1;
      v17 = a4->m128i_i64[1];
      if ( &a1[a2] == a1 + 1 )
        return;
    }
    for ( i = 0; ; i = 1 )
    {
      v11 = *v7;
      BYTE1(v8) &= 0xFAu;
      ++v7;
      v8 |= ((unsigned __int64)v9 << 10) | ((unsigned __int64)(i & 1) << 8);
      v20 = sub_B8C330(v11);
      v18 = a3;
      v19.m128i_i64[0] = v8;
      v19.m128i_i64[1] = v17;
      v21 = a5;
      v22 = 0;
      sub_BB57B0((__int64)&v18, v11);
      if ( v15 == v7 )
        break;
      v12 = *(_WORD **)(a3 + 32);
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v12 > 1u )
      {
        *v12 = 8236;
        *(_QWORD *)(a3 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(a3, ", ", 2);
      }
      v9 = 0;
    }
  }
}
