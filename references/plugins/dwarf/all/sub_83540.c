__int64 __fastcall sub_83540(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  signed __int64 v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rdi

  v2 = *(__int64 **)(a1 + 304);
  v3 = &v2[9 * *(_QWORD *)(a1 + 312)];
  if ( !(72LL * *(_QWORD *)(a1 + 312)) )
    return 0;
  while ( 1 )
  {
    v5 = v2[7];
    v6 = v2;
    v2 += 9;
    if ( v5 == a2 )
      break;
    if ( v2 == v3 )
      return 0;
  }
  v7 = v6[3];
  if ( v7 )
  {
    v6[4] = 0;
    qfree(v7);
  }
  v8 = *v6;
  if ( *v6 )
  {
    v6[1] = 0;
    qfree(v8);
  }
  v9 = *(_QWORD *)(a1 + 312);
  v10 = 0x8E38E38E38E38E39LL * ((*(_QWORD *)(a1 + 304) + 72 * v9 - (__int64)v6) >> 3) - 2;
  if ( v10 >= 0 )
  {
    do
    {
      v11 = *v2;
      v12 = _mm_loadu_si128((const __m128i *)(v2 + 1));
      *v2 = 0;
      *(_OWORD *)(v2 + 1) = 0;
      *v6 = v11;
      *(__m128i *)(v6 + 1) = v12;
      v13 = v2[3];
      v14 = _mm_loadu_si128((const __m128i *)v2 + 2);
      v2[3] = 0;
      v6[3] = v13;
      *((__m128i *)v6 + 2) = v14;
      LODWORD(v13) = *((_DWORD *)v2 + 12);
      v2[5] = 0;
      *((_DWORD *)v6 + 12) = v13;
      v6[7] = v2[7];
      v6[8] = v2[8];
      v15 = v2[3];
      if ( v15 )
      {
        v2[4] = 0;
        qfree(v15);
      }
      v16 = *v2;
      if ( *v2 )
      {
        v2[1] = 0;
        qfree(v16);
      }
      v2 += 9;
      v6 += 9;
    }
    while ( v10-- != 0 );
    v9 = *(_QWORD *)(a1 + 312);
  }
  *(_QWORD *)(a1 + 312) = v9 - 1;
  qfree(a2);
  return 1;
}
