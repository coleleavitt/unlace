__int64 __fastcall linearray_t_copy_from_0(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  char *v7; // rdx
  char *v8; // r12
  char *i; // rbx
  char *v10; // rax
  void *v11; // rdi
  __m128i v12; // xmm2
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  const void *v15; // r14
  char *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rdx
  size_t v24; // r15
  __int64 v25; // rdi
  void *v26; // rax
  const void **v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+10h] [rbp-48h]
  const void **v30; // [rsp+18h] [rbp-40h]

  v2 = a2;
  qfree((void *)a1[3]);
  a1[3] = 0;
  v4 = a2[3];
  if ( v4 )
    a1[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = 0;
  a1[4] = a2[4];
  v6 = a2[1];
  v28 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v29 = v6;
    v17 = 0;
    v18 = qalloc_or_throw(24 * v6, (const char *)a2);
    v19 = v29;
    v20 = 0;
    v5 = v18;
    v21 = v18;
    do
    {
      v22 = *v2;
      *(_OWORD *)(v21 + 8) = v20;
      *(_QWORD *)v21 = 0;
      v23 = v22 + 24 * v17;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v23 + 8);
        v29 = v19;
        v30 = (const void **)v23;
        v26 = (void *)qalloc_or_throw(v25, (const char *)a2);
        v27 = v30;
        *(_QWORD *)(v21 + 16) = v24;
        *(_QWORD *)v21 = v26;
        a2 = *v27;
        memcpy(v26, *v27, v24);
        *(_QWORD *)(v21 + 8) = v24;
        v19 = v29;
        v20 = 0;
      }
      ++v17;
      v21 += 24;
    }
    while ( v19 != v17 );
  }
  v7 = (char *)*a1;
  if ( *a1 )
  {
    v8 = (char *)a1[1];
    if ( v8 )
    {
      for ( i = nullptr; i != v8; ++i )
      {
        v10 = &v7[24 * (_QWORD)i];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)*a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v7);
  }
  v12 = _mm_load_si128(&v28);
  *a1 = v5;
  *(__m128i *)(a1 + 1) = v12;
  *((_BYTE *)a1 + 40) = *((_BYTE *)v2 + 40);
  *((_DWORD *)a1 + 11) = *((_DWORD *)v2 + 11);
  if ( a1 + 6 != v2 + 6 )
  {
    v13 = v2[7];
    if ( v13 > 1 )
    {
      v15 = (const void *)v2[6];
      v16 = (char *)a1[6];
      if ( a1[8] < v13 )
      {
        v16 = (char *)qvector_reserve(a1 + 6, a1[6], v2[7], 1);
        a1[6] = (__int64)v16;
      }
      a1[7] = v13;
      memmove(v16, v15, v13 - 1);
      *(_BYTE *)(a1[6] + v13 - 1) = 0;
    }
    else
    {
      a1[7] = 0;
    }
  }
  result = *((unsigned int *)v2 + 18);
  *((_DWORD *)a1 + 18) = result;
  return result;
}

