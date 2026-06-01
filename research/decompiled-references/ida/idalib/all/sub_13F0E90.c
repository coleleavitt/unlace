_QWORD *__fastcall sub_13F0E90(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rbp
  char v10; // r13
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rax
  __m128i *v14; // rsi
  __int64 v15; // rdx
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 40);
  v7 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 16) - v5) >> 3);
  if ( v6 > v7 )
  {
    sub_13F0A50((void ***)(a1 + 8), v6 - v7);
    v5 = *(_QWORD *)(a1 + 8);
  }
  v8 = (_QWORD *)(v5 + 24LL * a2);
  if ( *v8 != v8[1] )
    return (_QWORD *)(v5 + 24LL * a2);
  v10 = *(_BYTE *)(a3 + 547);
  v11 = a1 + 48;
  for ( *(_BYTE *)(a3 + 547) = 1; a2; --a2 )
  {
    for ( ; *(_WORD *)(v11 + 16) != 1; v11 += 24 )
      ;
    v11 += 24;
  }
  v12 = 0;
  v13 = v11;
  if ( *(_WORD *)(v11 + 16) == 1 )
  {
    v15 = 1;
  }
  else
  {
    while ( 1 )
    {
      v13 += 24;
      if ( *(_WORD *)(v13 + 16) == 1 )
        break;
      ++v12;
    }
    v15 = (unsigned int)(v12 + 2);
  }
  sub_14368B0(a3, v11, v15, 0, 0, 0);
  v14 = (__m128i *)v8[1];
  do
  {
    v16 = 0u;
    LODWORD(v17) = 0;
    if ( v14 == (__m128i *)v8[2] )
    {
      sub_13F0D20((__int64)v8, v14, &v16);
      v14 = (__m128i *)(v8[1] - 24LL);
    }
    else
    {
      *v14 = _mm_load_si128(&v16);
      v14[1].m128i_i64[0] = v17;
      v8[1] = (char *)v14 + 24;
    }
    sub_14634E0(a3, v14);
    v14 = (__m128i *)v8[1];
  }
  while ( v14[-1].m128i_i16[4] != 1 );
  if ( !*(_QWORD *)(a3 + 1120) && !*(_QWORD *)(a3 + 1144) && *(_QWORD *)(a3 + 1176) != *(_QWORD *)(a3 + 1168) )
    sub_1436710(a3);
  sub_1436710(a3);
  *(_BYTE *)(a3 + 547) = v10;
  return v8;
}
