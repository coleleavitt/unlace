void __fastcall sub_101C0B0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 i; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __int128 v16; // rax
  __int64 v17; // rcx

  v8 = a2 - a1;
  v9 = a2;
  if ( (__int64)(a2 - a1) > 32 )
  {
    for ( i = ((v8 >> 5) - 2) / 2; ; --i )
    {
      sub_101BEA0(a1, i, v8 >> 5, 32 * i, a6, a7, *(_OWORD *)(a1 + 32 * i), a4);
      if ( !i )
        break;
    }
  }
  if ( a2 < a3 )
  {
    v11 = v8 >> 5;
    v12 = a2 + ((a3 - 1 - a2) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v9 + 24) > v13 || *(_QWORD *)(v9 + 24) == v13 && *(_DWORD *)(v9 + 8) < *(_DWORD *)(a1 + 8) )
          break;
        v9 += 32LL;
        if ( v12 == v9 )
          return;
      }
      v14 = *(_QWORD *)a1;
      v15 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v9 += 32LL;
      v16 = *(_OWORD *)(v9 - 32);
      *(__m128i *)(v9 - 24) = v15;
      *(_QWORD *)(v9 - 32) = v14;
      v17 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(v9 - 8) = v17;
      sub_101BEA0(a1, 0, v11, v17, a6, a7, v16, v15);
    }
    while ( v12 != v9 );
  }
}
