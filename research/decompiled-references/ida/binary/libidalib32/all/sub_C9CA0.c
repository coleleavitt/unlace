__int64 __fastcall sub_C9CA0(__int64 *a1, const void *a2, const void *a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // rax
  size_t v12; // rbp
  void *v14; // rdi
  size_t v15; // r13
  void *v16; // rdi
  size_t v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rbp
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-48h]
  __int64 v34; // [rsp+8h] [rbp-40h]

  v5 = a1[1];
  v6 = a1[2];
  if ( v6 < v5 + 1 )
  {
    v18 = qvector_reserve();
    v19 = a1[2];
    v20 = a1[1];
    a1[2] = v6;
    v33 = v18;
    v21 = *a1;
    v34 = v19;
    v22 = v20 - 1;
    if ( v22 >= 0 )
    {
      v23 = v18;
      v24 = 0;
      do
      {
        v25 = *(_QWORD *)v21;
        v26 = _mm_loadu_si128((const __m128i *)(v21 + 8));
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = v24;
        *(_QWORD *)v23 = v25;
        *(__m128i *)(v23 + 8) = v26;
        v27 = *(_QWORD *)(v21 + 24);
        v28 = _mm_loadu_si128((const __m128i *)(v21 + 32));
        *(_QWORD *)(v21 + 24) = 0;
        *(_QWORD *)(v23 + 24) = v27;
        *(__m128i *)(v23 + 32) = v28;
        v29 = *(_QWORD *)v21;
        *(_QWORD *)(v21 + 40) = 0;
        if ( v29 )
        {
          *(_QWORD *)(v21 + 8) = 0;
          qfree();
          v24 = 0;
        }
        v21 += 48;
        v23 += 48;
      }
      while ( v22-- != 0 );
    }
    qfree();
    *a1 = v33;
    a1[2] = v34;
    v5 = a1[1];
  }
  else
  {
    v33 = *a1;
  }
  v7 = 48 * v5 + v33;
  *(_QWORD *)v7 = 0;
  v8 = v7;
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  ++a1[1];
  if ( a2 && (v9 = strlen((const char *)a2), (v10 = v9) != 0) )
  {
    v16 = *(void **)v8;
    v17 = v9 + 1;
    if ( *(_QWORD *)(v8 + 16) < v9 + 1 )
    {
      v31 = qvector_reserve();
      *(_QWORD *)v8 = v31;
      v16 = (void *)v31;
    }
    *(_QWORD *)(v8 + 8) = v17;
    memmove(v16, a2, v10);
    *(_BYTE *)(*(_QWORD *)v8 + v10) = 0;
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0;
  }
  if ( a3 && (v11 = strlen((const char *)a3), (v12 = v11) != 0) )
  {
    v14 = *(void **)(v8 + 24);
    v15 = v11 + 1;
    if ( *(_QWORD *)(v8 + 40) < v11 + 1 )
    {
      v32 = qvector_reserve();
      *(_QWORD *)(v8 + 24) = v32;
      v14 = (void *)v32;
    }
    *(_QWORD *)(v8 + 32) = v15;
    memmove(v14, a3, v12);
    *(_BYTE *)(*(_QWORD *)(v8 + 24) + v12) = 0;
  }
  else
  {
    *(_QWORD *)(v8 + 32) = 0;
  }
  return v8;
}

