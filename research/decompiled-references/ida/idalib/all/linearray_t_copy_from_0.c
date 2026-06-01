__int64 __fastcall linearray_t_copy_from_0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  char *v6; // rdx
  char *v7; // r12
  char *i; // rbx
  char *v9; // rax
  void *v10; // rdi
  __m128i v11; // xmm2
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  const void *v14; // r14
  char *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rdx
  size_t v23; // r15
  __int64 v24; // rdi
  void *v25; // rax
  const void **v26; // rdx
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  const void **v29; // [rsp+18h] [rbp-40h]

  qfree((void *)a1[3]);
  a1[3] = 0;
  v3 = a2[3];
  if ( v3 )
    a1[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = 0;
  a1[4] = a2[4];
  v5 = a2[1];
  v27 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v28 = v5;
    v16 = 0;
    v17 = qalloc_or_throw(24 * v5);
    v18 = v28;
    v19 = 0;
    v4 = v17;
    v20 = v17;
    do
    {
      v21 = *a2;
      *(_OWORD *)(v20 + 8) = v19;
      *(_QWORD *)v20 = 0;
      v22 = v21 + 24 * v16;
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v22 + 8);
        v28 = v18;
        v29 = (const void **)v22;
        v25 = (void *)qalloc_or_throw(v24);
        v26 = v29;
        *(_QWORD *)(v20 + 16) = v23;
        *(_QWORD *)v20 = v25;
        memcpy(v25, *v26, v23);
        *(_QWORD *)(v20 + 8) = v23;
        v18 = v28;
        v19 = 0;
      }
      ++v16;
      v20 += 24;
    }
    while ( v18 != v16 );
  }
  v6 = (char *)*a1;
  if ( *a1 )
  {
    v7 = (char *)a1[1];
    if ( v7 )
    {
      for ( i = nullptr; i != v7; ++i )
      {
        v9 = &v6[24 * (_QWORD)i];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)*a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v6);
  }
  v11 = _mm_load_si128(&v27);
  *a1 = v4;
  *(__m128i *)(a1 + 1) = v11;
  *((_BYTE *)a1 + 40) = *((_BYTE *)a2 + 40);
  *((_DWORD *)a1 + 11) = *((_DWORD *)a2 + 11);
  if ( a1 + 6 != a2 + 6 )
  {
    v12 = a2[7];
    if ( v12 > 1 )
    {
      v14 = (const void *)a2[6];
      v15 = (char *)a1[6];
      if ( a1[8] < v12 )
      {
        v15 = (char *)qvector_reserve(a1 + 6, a1[6], a2[7], 1);
        a1[6] = (__int64)v15;
      }
      a1[7] = v12;
      memmove(v15, v14, v12 - 1);
      *(_BYTE *)(a1[6] + v12 - 1) = 0;
    }
    else
    {
      a1[7] = 0;
    }
  }
  result = *((unsigned int *)a2 + 18);
  *((_DWORD *)a1 + 18) = result;
  return result;
}
