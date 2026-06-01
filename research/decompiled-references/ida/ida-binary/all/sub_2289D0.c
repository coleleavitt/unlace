_BOOL8 __fastcall pathmap_chooser_t__::vfunc_11(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  signed __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __int64 v18; // [rsp+8h] [rbp-40h]

  v18 = a2[1];
  if ( v18 )
  {
    v4 = a2[1];
    do
    {
      --v4;
      v5 = *(_QWORD **)(a1 + 184);
      v6 = *v5 + 48LL * *(_QWORD *)(*a2 + 8 * v4);
      v7 = *(_QWORD *)(v6 + 24);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 32) = 0;
        qfree(v7, (const char *)v6);
      }
      v8 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 )
      {
        *(_QWORD *)(v6 + 8) = 0;
        qfree(v8, (const char *)v6);
      }
      v9 = v5[1];
      v10 = v6 + 48;
      v11 = 0xAAAAAAAAAAAAAAABLL * ((*v5 + 48 * v9 - v6) >> 4) - 2;
      if ( v11 >= 0 )
      {
        do
        {
          v12 = *(_QWORD *)v10;
          v13 = _mm_loadu_si128((const __m128i *)(v10 + 8));
          *(_OWORD *)(v10 + 8) = 0;
          v10 += 48;
          *(_QWORD *)(v10 - 48) = 0;
          *(_QWORD *)(v10 - 96) = v12;
          v14 = *(_QWORD *)(v10 - 24);
          *(__m128i *)(v10 - 88) = v13;
          v15 = _mm_loadu_si128((const __m128i *)(v10 - 16));
          *(_QWORD *)(v10 - 72) = v14;
          *(_QWORD *)(v10 - 24) = 0;
          *(__m128i *)(v10 - 64) = v15;
          *(_QWORD *)(v10 - 8) = 0;
        }
        while ( v11-- != 0 );
        v9 = v5[1];
      }
      v5[1] = v9 - 1;
    }
    while ( v4 );
  }
  return v18 != 0;
}
