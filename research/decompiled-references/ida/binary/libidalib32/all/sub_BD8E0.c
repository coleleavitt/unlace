__int64 __fastcall sub_BD8E0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __m128i si128; // xmm2
  __int64 v10; // r13
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rax
  void *v15; // rax
  size_t v16; // r8
  void *v17; // rax
  size_t v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-50h]
  size_t n[2]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1];
  v19 = 0;
  if ( v3 )
  {
    v10 = 0;
    v11 = 0;
    v19 = qalloc_or_throw();
    v12 = v19;
    do
    {
      v13 = (__int64 *)(*a2 + (v10 << 6));
      v14 = *v13;
      *(_QWORD *)(v12 + 8) = 0;
      *(_OWORD *)(v12 + 16) = v11;
      *(_QWORD *)v12 = v14;
      if ( v13[2] )
      {
        n[0] = v13[2];
        v17 = (void *)qalloc_or_throw();
        v18 = n[0];
        *(_QWORD *)(v12 + 8) = v17;
        *(_QWORD *)(v12 + 24) = v18;
        memcpy(v17, (const void *)v13[1], v18);
        v11 = 0;
        *(_QWORD *)(v12 + 16) = n[0];
      }
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 40) = v11;
      if ( v13[5] )
      {
        n[0] = v13[5];
        v15 = (void *)qalloc_or_throw();
        v16 = n[0];
        *(_QWORD *)(v12 + 32) = v15;
        *(_QWORD *)(v12 + 48) = v16;
        memcpy(v15, (const void *)v13[4], v16);
        v11 = 0;
        *(_QWORD *)(v12 + 40) = n[0];
      }
      ++v10;
      v12 += 64;
      *(_DWORD *)(v12 - 8) = *((_DWORD *)v13 + 14);
      *(_WORD *)(v12 - 4) = *((_WORD *)v13 + 30);
    }
    while ( v3 != v10 );
  }
  v4 = *a1;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + (i << 6));
        if ( v7[4] )
        {
          v7[5] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        v4 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
  }
  si128 = _mm_load_si128((const __m128i *)n);
  *a1 = v19;
  *(__m128i *)(a1 + 1) = si128;
  return v19;
}

