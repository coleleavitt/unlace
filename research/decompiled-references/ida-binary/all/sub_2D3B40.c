__int64 __fastcall sub_2D3B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  size_t v6; // rbx
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  size_t v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rbx
  size_t v16; // r15
  void *v17; // rax
  void *v18; // rax
  __int64 v19; // rax
  size_t v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v24; // rbx
  size_t v25; // r15
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r15
  __m128i v30; // xmm0
  __int64 v31; // rbx
  __int64 v32; // rbp
  int v33; // eax
  void *v34; // rax
  void *v35; // rax
  size_t n; // [rsp+0h] [rbp-40h]
  size_t na; // [rsp+0h] [rbp-40h]
  size_t nb; // [rsp+0h] [rbp-40h]
  size_t nc; // [rsp+0h] [rbp-40h]
  size_t ne; // [rsp+0h] [rbp-40h]
  size_t nd; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a2 = 0;
  *(_OWORD *)(a2 + 8) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    n = *(_QWORD *)(a3 + 8);
    v9 = 0;
    v10 = qalloc_or_throw(24 * v4);
    v11 = n;
    v12 = 0;
    *(_QWORD *)a2 = v10;
    v13 = v10;
    *(_QWORD *)(a2 + 16) = n;
    while ( 1 )
    {
      v14 = 24 * v9 + v13;
      v15 = 24 * v9 + *(_QWORD *)a3;
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = v12;
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        na = v11;
        ++v9;
        v17 = (void *)qalloc_or_throw(*(_QWORD *)(v15 + 8));
        *(_QWORD *)(v14 + 16) = v16;
        *(_QWORD *)v14 = v17;
        memcpy(v17, *(const void **)v15, v16);
        v11 = na;
        *(_QWORD *)(v14 + 8) = v16;
        v12 = 0;
        if ( na == v9 )
        {
LABEL_12:
          *(_QWORD *)(a2 + 8) = v11;
          break;
        }
      }
      else if ( v11 == ++v9 )
      {
        goto LABEL_12;
      }
      v13 = *(_QWORD *)a2;
    }
  }
  *(_QWORD *)(a2 + 24) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  v5 = *(_QWORD *)(a3 + 32);
  if ( !v5 )
    goto LABEL_3;
  nb = *(_QWORD *)(a3 + 32);
  v19 = qalloc_or_throw(24 * v5);
  v20 = nb;
  *(_QWORD *)(a2 + 24) = v19;
  v21 = v19;
  v22 = 0;
  *(_QWORD *)(a2 + 40) = nb;
  while ( 1 )
  {
    v23 = 24 * v22 + v21;
    v24 = 24 * v22 + *(_QWORD *)(a3 + 24);
    *(_QWORD *)v23 = 0;
    *(_OWORD *)(v23 + 8) = 0;
    v25 = *(_QWORD *)(v24 + 8);
    if ( v25 )
      break;
    if ( v20 == ++v22 )
      goto LABEL_18;
LABEL_15:
    v21 = *(_QWORD *)(a2 + 24);
  }
  nc = v20;
  v26 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 8));
  *(_QWORD *)v23 = v26;
  ++v22;
  *(_QWORD *)(v23 + 16) = v25;
  memcpy(v26, *(const void **)v24, v25);
  v20 = nc;
  *(_QWORD *)(v23 + 8) = v25;
  if ( nc != v22 )
    goto LABEL_15;
LABEL_18:
  *(_QWORD *)(a2 + 32) = v20;
LABEL_3:
  *(_QWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 56) = 0;
  v6 = *(_QWORD *)(a3 + 56);
  if ( v6 )
  {
    v18 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 56));
    *(_QWORD *)(a2 + 48) = v18;
    *(_QWORD *)(a2 + 64) = v6;
    memcpy(v18, *(const void **)(a3 + 48), v6);
    *(_QWORD *)(a2 + 56) = v6;
  }
  *(_QWORD *)(a2 + 72) = 0;
  *(_OWORD *)(a2 + 80) = 0;
  v7 = *(_QWORD *)(a3 + 80);
  if ( v7 )
  {
    v27 = qalloc_or_throw(80 * v7);
    *(_QWORD *)(a2 + 72) = v27;
    v28 = v27;
    v29 = 0;
    *(_QWORD *)(a2 + 88) = v7;
    while ( 1 )
    {
      v31 = 80 * v29 + v28;
      v32 = *(_QWORD *)(a3 + 72) + 80 * v29;
      v33 = *(_DWORD *)v32;
      *(_QWORD *)(v31 + 8) = 0;
      *(_OWORD *)(v31 + 16) = 0;
      *(_DWORD *)v31 = v33;
      if ( *(_QWORD *)(v32 + 16) )
      {
        ne = *(_QWORD *)(v32 + 16);
        v34 = (void *)qalloc_or_throw(ne);
        *(_QWORD *)(v31 + 8) = v34;
        *(_QWORD *)(v31 + 24) = ne;
        memcpy(v34, *(const void **)(v32 + 8), ne);
        *(_QWORD *)(v31 + 16) = ne;
      }
      *(_QWORD *)(v31 + 32) = 0;
      *(_OWORD *)(v31 + 40) = 0;
      if ( *(_QWORD *)(v32 + 40) )
      {
        nd = *(_QWORD *)(v32 + 40);
        v35 = (void *)qalloc_or_throw(nd);
        *(_QWORD *)(v31 + 32) = v35;
        *(_QWORD *)(v31 + 48) = nd;
        memcpy(v35, *(const void **)(v32 + 32), nd);
        *(_QWORD *)(v31 + 40) = nd;
      }
      v30 = _mm_loadu_si128((const __m128i *)(v32 + 56));
      ++v29;
      *(_DWORD *)(v31 + 72) = *(_DWORD *)(v32 + 72);
      *(__m128i *)(v31 + 56) = v30;
      if ( v7 == v29 )
        break;
      v28 = *(_QWORD *)(a2 + 72);
    }
    *(_QWORD *)(a2 + 80) = v7;
  }
  *(_BYTE *)(a2 + 96) = *(_BYTE *)(a3 + 96);
  *(_DWORD *)(a2 + 100) = *(_DWORD *)(a3 + 100);
  result = *(unsigned __int8 *)(a3 + 104);
  *(_BYTE *)(a2 + 104) = result;
  return result;
}
