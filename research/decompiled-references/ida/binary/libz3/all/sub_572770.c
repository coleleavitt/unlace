__int64 __fastcall sub_572770(__int64 a1, __int64 a2, const void **a3)
{
  __int64 v5; // rdi
  const void *v6; // rbx
  size_t v7; // rdx
  int v8; // eax
  __int64 v9; // rbp
  int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // ecx
  unsigned __int64 v27; // rax
  __m128i v28; // xmm1
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // [rsp+0h] [rbp-48h]

  v5 = *(_QWORD *)(a2 + 120);
  if ( v5 == 0xFFFFFFFFLL )
  {
    v32 = *(_QWORD *)(a2 + 48);
    v33 = a2 + 40;
    *(_QWORD *)(a2 + 120) = v32;
    sub_5716E0(a2 + 40, v32 + *(unsigned int *)(a2 + 40));
    v5 = *(_QWORD *)(a2 + 120);
    v6 = *a3;
    v7 = *(unsigned int *)(a2 + 40);
    if ( v5 == 0xFFFFFFFFLL )
    {
      v34 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 120) = v34;
      sub_5716E0(v33, v7 + v34);
      v5 = *(_QWORD *)(a2 + 120);
      v7 = *(unsigned int *)(a2 + 40);
    }
  }
  else
  {
    v6 = *a3;
    v7 = *(unsigned int *)(a2 + 40);
  }
  memcpy((void *)(*(_QWORD *)(a2 + 56) + v5), v6, v7);
  v35 = *(_QWORD *)(a2 + 120);
  v8 = sub_17E8B20(**(_QWORD **)(a2 + 64) + v35, *(unsigned int *)(a2 + 72), 0);
  v9 = *(_QWORD *)(a2 + 96);
  v10 = v8;
  v11 = *(unsigned int *)(a2 + 104);
  v12 = v11 - 1;
  v11 *= 16;
  v13 = v9 + v11;
  v14 = 16LL * (v10 & v12);
  v15 = v9 + v14;
  if ( v14 == v11 )
  {
LABEL_20:
    while ( v15 != v9 )
    {
      v30 = *(_DWORD *)(v9 + 4);
      if ( v30 == 2 )
      {
        if ( v10 == *(_DWORD *)v9
          && !memcmp(
                (const void *)(*(_QWORD *)(v9 + 8) + **(_QWORD **)(a2 + 80)),
                (const void *)(**(_QWORD **)(a2 + 80) + v35),
                *(unsigned int *)(a2 + 88)) )
        {
          v16 = v9;
          goto LABEL_10;
        }
      }
      else if ( !v30 )
      {
        break;
      }
      v9 += 16;
    }
LABEL_36:
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v16 = v9 + v14;
  while ( 1 )
  {
    v17 = *(_DWORD *)(v16 + 4);
    if ( v17 != 2 )
    {
      if ( !v17 )
        goto LABEL_36;
      goto LABEL_6;
    }
    if ( v10 == *(_DWORD *)v16
      && !memcmp(
            (const void *)(*(_QWORD *)(v16 + 8) + **(_QWORD **)(a2 + 80)),
            (const void *)(**(_QWORD **)(a2 + 80) + v35),
            *(unsigned int *)(a2 + 88)) )
    {
      break;
    }
LABEL_6:
    v16 += 16;
    if ( v13 == v16 )
      goto LABEL_20;
  }
LABEL_10:
  v18 = *(unsigned int *)(a2 + 24);
  v19 = *(_QWORD *)(v16 + 8);
  v20 = *(_QWORD *)(a2 + 16);
  v21 = 24LL * ((unsigned int)v19 & ((_DWORD)v18 - 1));
  v22 = 24 * v18;
  v23 = v20 + v21;
  v24 = v20 + 24 * v18;
  v25 = v20 + v21;
  if ( v21 != v22 )
  {
    do
    {
      v26 = *(_DWORD *)(v25 + 4);
      if ( v26 == 2 )
      {
        if ( (_DWORD)v19 == *(_DWORD *)v25 && v19 == *(_QWORD *)(v25 + 8) )
          goto LABEL_17;
      }
      else if ( !v26 )
      {
        goto LABEL_36;
      }
      v25 += 24;
    }
    while ( v24 != v25 );
  }
  if ( v20 == v23 )
    goto LABEL_36;
  while ( 2 )
  {
    v31 = *(_DWORD *)(v20 + 4);
    if ( v31 != 2 )
    {
      if ( !v31 )
        goto LABEL_36;
LABEL_31:
      v20 += 24;
      if ( v23 == v20 )
        goto LABEL_36;
      continue;
    }
    break;
  }
  if ( (_DWORD)v19 != *(_DWORD *)v20 || v19 != *(_QWORD *)(v20 + 8) )
    goto LABEL_31;
  v25 = v20;
LABEL_17:
  v27 = *(_QWORD *)(v25 + 16);
  if ( v27 )
    v28 = (__m128i)(v27 + 8LL * *(unsigned int *)(v27 - 4));
  else
    v28 = 0;
  *(_BYTE *)a1 = 0;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)v27, v28);
  return a1;
}

