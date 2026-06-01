void __fastcall sub_1369140(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 i; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __m128i *v6; // rsi
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __m128i v8[2]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 160LL);
  for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v4 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v4 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v4 )
      break;
    a2 = v4;
  }
  v5 = *(_QWORD *)a2;
  v7.m128i_i64[0] = (__int64)v8;
  sub_13650C0(&v7, (_BYTE *)(a2 + 32), a2 + 32 + v5);
  v6 = *(__m128i **)(v2 + 464);
  if ( v6 == *(__m128i **)(v2 + 472) )
  {
    sub_A82970((void ***)(v2 + 456), v6, &v7);
    if ( (__m128i *)v7.m128i_i64[0] != v8 )
      operator delete((void *)v7.m128i_i64[0]);
  }
  else
  {
    v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
    if ( (__m128i *)v7.m128i_i64[0] == v8 )
    {
      v6[1] = _mm_load_si128(v8);
    }
    else
    {
      v6->m128i_i64[0] = v7.m128i_i64[0];
      v6[1].m128i_i64[0] = v8[0].m128i_i64[0];
    }
    v6->m128i_i64[1] = v7.m128i_i64[1];
    *(_QWORD *)(v2 + 464) += 32LL;
  }
}
