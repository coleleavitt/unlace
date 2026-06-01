__int64 __fastcall sub_A000(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // r14
  __int64 v8; // rbx
  void *v9; // rdi
  size_t v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  const void *v18; // r13
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-60h]
  int v38; // [rsp+1Ch] [rbp-4Ch] BYREF
  int *v39[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(_QWORD *)(a1 + 136);
  v39[1] = (int *)__readfsqword(0x28u);
  if ( v5 < v4 + 1 )
  {
    v20 = qvector_reserve(a1 + 120, 0, v4 + 1, 56);
    v21 = *(_QWORD *)(a1 + 128);
    v7 = v20;
    v22 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = v5;
    v23 = *(__int64 **)(a1 + 120);
    v37 = v22;
    v24 = v21 - 1;
    if ( v24 >= 0 )
    {
      v25 = v7;
      do
      {
        v26 = *v23;
        v27 = _mm_loadu_si128((const __m128i *)(v23 + 1));
        *v23 = 0;
        *(_OWORD *)(v23 + 1) = 0;
        *(_QWORD *)v25 = v26;
        *(__m128i *)(v25 + 8) = v27;
        v28 = v23[3];
        v29 = _mm_loadu_si128((const __m128i *)v23 + 2);
        v23[3] = 0;
        *(_QWORD *)(v25 + 24) = v28;
        *(__m128i *)(v25 + 32) = v29;
        v30 = v23[6];
        v23[5] = 0;
        *(_QWORD *)(v25 + 48) = v30;
        v31 = v23[3];
        if ( v31 )
        {
          v23[4] = 0;
          qfree(v31);
        }
        v32 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v32);
        }
        v23 += 7;
        v25 += 56;
      }
      while ( v24-- != 0 );
      v23 = *(__int64 **)(a1 + 120);
    }
    qfree(v23);
    *(_QWORD *)(a1 + 120) = v7;
    *(_QWORD *)(a1 + 136) = v37;
    v4 = *(_QWORD *)(a1 + 128);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 120);
  }
  v8 = v7 + 56 * v4;
  *(_OWORD *)(v8 + 32) = 0;
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++*(_QWORD *)(a1 + 128);
  *(_QWORD *)(v8 + 32) = 0;
  if ( a3 )
  {
    v9 = *(void **)(v8 + 24);
    v10 = a3;
    if ( *(_QWORD *)(v8 + 40) < a3 )
    {
      v34 = qvector_reserve(v8 + 24, *(_QWORD *)(v8 + 24), a3, 1);
      v35 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 24) = v34;
      v10 = a3 - v35;
      v9 = (void *)(v34 + v35);
    }
    memset(v9, 0, v10);
    *(_QWORD *)(v8 + 32) = a3;
    memcpy(*(void **)(v8 + 24), a2, a3);
  }
  v11 = *(_QWORD *)(a1 + 48);
  v12 = a1 + 40;
  v13 = *(_DWORD *)(a1 + 84) | (*(_DWORD *)(a1 + 80) << 16);
  v38 = v13;
  if ( !v11 )
    goto LABEL_18;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v11 + 16);
      v15 = *(_QWORD *)(v11 + 24);
      if ( v13 > *(_DWORD *)(v11 + 32) )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v14 )
        goto LABEL_12;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v15 );
LABEL_12:
  if ( v12 == a1 + 40 || v13 < *(_DWORD *)(v12 + 32) )
  {
LABEL_18:
    v39[0] = &v38;
    v12 = sub_9D20((_QWORD *)(a1 + 32), v12, (__int64)&unk_FD90, v39);
  }
  if ( v8 != v12 + 40 )
  {
    v16 = *(_QWORD *)(v12 + 48);
    if ( v16 > 1 )
    {
      v18 = *(const void **)(v12 + 40);
      v19 = *(void **)v8;
      if ( *(_QWORD *)(v8 + 16) < v16 )
      {
        v36 = qvector_reserve(v8, *(_QWORD *)v8, v16, 1);
        *(_QWORD *)v8 = v36;
        v19 = (void *)v36;
      }
      *(_QWORD *)(v8 + 8) = v16;
      memmove(v19, v18, v16 - 1);
      *(_BYTE *)(*(_QWORD *)v8 + v16 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = 0;
    }
  }
  ++*(_DWORD *)(a1 + 84);
  return 0;
}

