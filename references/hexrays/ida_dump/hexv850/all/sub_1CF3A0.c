__int64 __fastcall sub_1CF3A0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 result; // rax
  __m128i v12; // xmm3
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // r15
  int v18; // eax
  void *v19; // rax
  size_t v20; // r8
  void *v21; // rax
  size_t v22; // r8
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v23.m128i_i64[0] = a2;
  v24 = 0;
  if ( v3 )
  {
    v13 = 0;
    v14 = 0;
    v24 = qalloc_or_throw(104 * v3);
    v15 = v24;
    do
    {
      v16 = *(_QWORD *)v23.m128i_i64[0];
      *(_DWORD *)v15 = 0;
      v17 = v13 + v16;
      copy_argloc(v15, v17);
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(v17 + 16);
      v18 = *(_DWORD *)(v17 + 24);
      *(_QWORD *)(v15 + 32) = 0;
      *(_DWORD *)(v15 + 24) = v18;
      *(_OWORD *)(v15 + 40) = 0;
      if ( *(_QWORD *)(v17 + 40) )
      {
        n = *(_QWORD *)(v17 + 40);
        v21 = (void *)qalloc_or_throw(n);
        v22 = n;
        *(_QWORD *)(v15 + 32) = v21;
        *(_QWORD *)(v15 + 48) = v22;
        memcpy(v21, *(const void **)(v17 + 32), v22);
        *(_QWORD *)(v15 + 40) = n;
      }
      *(_QWORD *)(v15 + 56) = 0;
      *(_OWORD *)(v15 + 64) = 0;
      if ( *(_QWORD *)(v17 + 64) )
      {
        n = *(_QWORD *)(v17 + 64);
        v19 = (void *)qalloc_or_throw(n);
        v20 = n;
        *(_QWORD *)(v15 + 56) = v19;
        *(_QWORD *)(v15 + 72) = v20;
        memcpy(v19, *(const void **)(v17 + 56), v20);
        *(_QWORD *)(v15 + 64) = n;
      }
      *(_QWORD *)(v15 + 80) = 0;
      copy_tinfo_t(v15 + 80, v17 + 80);
      ++v14;
      v13 += 104;
      v15 += 104;
      *(_QWORD *)(v15 - 16) = *(_QWORD *)(v17 + 88);
      *(_QWORD *)(v15 - 8) = *(_QWORD *)(v17 + 96);
    }
    while ( v3 != v14 );
  }
  v4 = *a1;
  v23 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v4 + v6);
        clear_tinfo_t(v4 + v6 + 80);
        v9 = *(_QWORD *)(v4 + v6 + 56);
        if ( v9 )
        {
          v8[8] = 0;
          qfree(v9);
        }
        v10 = v8[4];
        if ( v10 )
        {
          v8[5] = 0;
          qfree(v10);
        }
        ++v7;
        v6 += 104;
        cleanup_argloc(v8);
        v4 = *a1;
      }
      while ( v5 != v7 );
    }
    a1[1] = 0;
    qfree(v4);
  }
  result = v24;
  v12 = _mm_load_si128(&v23);
  *a1 = v24;
  *(__m128i *)(a1 + 1) = v12;
  return result;
}
