__int64 __fastcall sub_2D0770(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __m128i si128; // xmm3
  _QWORD *v12; // r15
  __int64 v13; // r13
  __int128 v14; // xmm0
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbp
  int v18; // eax
  void *v19; // rax
  size_t v20; // r8
  void *v21; // rax
  size_t v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-50h]
  size_t n[2]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1];
  v23 = 0;
  if ( v3 )
  {
    v12 = a2;
    v13 = 0;
    v14 = 0;
    v23 = qalloc_or_throw(80 * v3);
    v15 = v23;
    do
    {
      v17 = *v12 + 80 * v13;
      v18 = *(_DWORD *)v17;
      *(_QWORD *)(v15 + 8) = 0;
      *(_OWORD *)(v15 + 16) = v14;
      *(_DWORD *)v15 = v18;
      if ( *(_QWORD *)(v17 + 16) )
      {
        n[0] = *(_QWORD *)(v17 + 16);
        v21 = (void *)qalloc_or_throw(n[0]);
        v22 = n[0];
        *(_QWORD *)(v15 + 8) = v21;
        *(_QWORD *)(v15 + 24) = v22;
        a2 = *(_QWORD **)(v17 + 8);
        memcpy(v21, a2, v22);
        v14 = 0;
        *(_QWORD *)(v15 + 16) = n[0];
      }
      *(_QWORD *)(v15 + 32) = 0;
      *(_OWORD *)(v15 + 40) = v14;
      if ( *(_QWORD *)(v17 + 40) )
      {
        n[0] = *(_QWORD *)(v17 + 40);
        v19 = (void *)qalloc_or_throw(n[0]);
        v20 = n[0];
        *(_QWORD *)(v15 + 32) = v19;
        *(_QWORD *)(v15 + 48) = v20;
        a2 = *(_QWORD **)(v17 + 32);
        memcpy(v19, a2, v20);
        v14 = 0;
        *(_QWORD *)(v15 + 40) = n[0];
      }
      v16 = *(_DWORD *)(v17 + 72);
      ++v13;
      v15 += 80;
      *(__m128i *)(v15 - 24) = _mm_loadu_si128((const __m128i *)(v17 + 56));
      *(_DWORD *)(v15 - 8) = v16;
    }
    while ( v3 != v13 );
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
        v7 = (_QWORD *)(v4 + 80 * i);
        v8 = v7[4];
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8, (const char *)a2);
        }
        v9 = v7[1];
        if ( v9 )
        {
          v7[2] = 0;
          qfree(v9, (const char *)a2);
        }
        v4 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v4, (const char *)a2);
  }
  si128 = _mm_load_si128((const __m128i *)n);
  *a1 = v23;
  *(__m128i *)(a1 + 1) = si128;
  return v23;
}
