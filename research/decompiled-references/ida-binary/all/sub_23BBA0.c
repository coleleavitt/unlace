__int64 __fastcall sub_23BBA0(__int64 a1, const void *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // r15
  __int64 *v6; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 i; // r15
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __m128i si128; // xmm2
  __int64 v16; // r14
  __int128 v17; // xmm0
  __int64 v18; // rbx
  size_t v19; // r9
  __int64 v20; // rcx
  size_t v21; // rdx
  __int64 v22; // rdi
  void *v23; // rax
  size_t v24; // rdx
  const void **v25; // rcx
  __int64 v26; // rdi
  void *v27; // rax
  size_t v28; // r9
  const void **v29; // rcx
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+10h] [rbp-48h]
  const void **v32; // [rsp+18h] [rbp-40h]
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+28h] [rbp-30h]
  __int64 v35; // [rsp+30h] [rbp-28h]

  v2 = sub_4A0300("Source paths...:10", n[0], n[1], v31, (int)v32, v33, v34, v35);
  if ( !v2 )
    return 0;
  v31 = 0;
  v3 = v2;
  v4 = *(_QWORD *)(v2 + 2392);
  v5 = *(_QWORD **)(v4 + 192);
  v6 = *(__int64 **)(v4 + 184);
  v7 = v5[1];
  if ( v7 )
  {
    v16 = 0;
    v17 = 0;
    v31 = qalloc_or_throw(48 * v7);
    v18 = v31;
    do
    {
      v20 = *v5 + 48 * v16;
      *(_QWORD *)v18 = 0;
      *(_OWORD *)(v18 + 8) = v17;
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v20 + 8);
        v32 = (const void **)v20;
        n[0] = v21;
        v23 = (void *)qalloc_or_throw(v22);
        v24 = n[0];
        v25 = v32;
        *(_QWORD *)v18 = v23;
        *(_QWORD *)(v18 + 16) = v24;
        a2 = *v25;
        memcpy(v23, *v25, v24);
        v20 = (__int64)v32;
        v17 = 0;
        *(_QWORD *)(v18 + 8) = n[0];
      }
      *(_QWORD *)(v18 + 24) = 0;
      *(_OWORD *)(v18 + 32) = v17;
      v19 = *(_QWORD *)(v20 + 32);
      if ( v19 )
      {
        v26 = *(_QWORD *)(v20 + 32);
        v32 = (const void **)v20;
        n[0] = v19;
        v27 = (void *)qalloc_or_throw(v26);
        v28 = n[0];
        v29 = v32;
        *(_QWORD *)(v18 + 24) = v27;
        *(_QWORD *)(v18 + 40) = v28;
        a2 = v29[3];
        memcpy(v27, a2, v28);
        v17 = 0;
        *(_QWORD *)(v18 + 32) = n[0];
      }
      ++v16;
      v18 += 48;
    }
    while ( v7 != v16 );
  }
  v8 = *v6;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v8 )
  {
    v9 = v6[1];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 48 * i);
        v12 = v11[3];
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12, (const char *)a2);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v13, (const char *)a2);
        }
        v8 = *v6;
      }
    }
    v6[1] = 0;
    qfree(v8, (const char *)a2);
  }
  si128 = _mm_load_si128((const __m128i *)n);
  *v6 = v31;
  *(__m128i *)(v6 + 1) = si128;
  sub_4A4600(v3, 0, 7, 0);
  return 1;
}
