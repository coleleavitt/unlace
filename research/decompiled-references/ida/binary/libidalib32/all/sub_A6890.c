unsigned __int64 __fastcall sub_A6890(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbp
  int v9; // r15d
  int v10; // r13d
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  char v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rsi
  int *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  size_t v30; // r10
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  void *v33; // rax
  const void *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  char nc; // [rsp+0h] [rbp-B8h]
  void *nb; // [rsp+0h] [rbp-B8h]
  char na; // [rsp+0h] [rbp-B8h]
  void *n; // [rsp+0h] [rbp-B8h]
  size_t nd; // [rsp+0h] [rbp-B8h]
  int *v44; // [rsp+10h] [rbp-A8h]
  char v45; // [rsp+10h] [rbp-A8h]
  char v46; // [rsp+1Fh] [rbp-99h]
  size_t v47; // [rsp+28h] [rbp-90h] BYREF
  __int64 v48; // [rsp+30h] [rbp-88h]
  __m128i v49; // [rsp+38h] [rbp-80h]
  int v50; // [rsp+50h] [rbp-68h] BYREF
  void *src[3]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( !a2 )
    return v52 - __readfsqword(0x28u);
  v4 = a3;
  if ( !a3 )
    return v52 - __readfsqword(0x28u);
  v7 = a2;
  v9 = *(_DWORD *)(dbg + 64LL);
  v10 = v9 + 14;
  if ( v9 + 7 >= 0 )
    v10 = v9 + 7;
  v11 = v10 >> 3;
  if ( v11 )
  {
    v36 = qvector_reserve();
    v37 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v36;
    memset((void *)(v36 + v37), 0, v11 - v37);
    *(_QWORD *)(a1 + 8) = v11;
  }
  v12 = v9;
  v13 = 0;
  v14 = 0;
  v48 = 0;
  v49 = 0;
  if ( v9 )
  {
    v14 = qvector_reserve();
    v48 = v14;
    if ( v9 <= 0 )
    {
      v13 = v49.m128i_i64[1];
      v12 = v49.m128i_i64[0];
      goto LABEL_9;
    }
    v20 = 0;
    while ( 1 )
    {
      v21 = sub_C4D40(v7, v4);
      if ( !v21 )
        break;
      if ( a4 )
        goto LABEL_21;
LABEL_43:
      ++v20;
      v7 += 32;
      v4 += 32;
      if ( v12 == v20 )
      {
        v14 = v48;
        v13 = v49.m128i_i64[1];
        v12 = v49.m128i_i64[0];
        goto LABEL_9;
      }
    }
    *(_BYTE *)(*(_QWORD *)a1 + (v20 >> 3)) |= 1 << (v20 & 7);
LABEL_21:
    v50 = -2;
    memset(src, 0, sizeof(src));
    if ( *(int *)v4 < -1 )
    {
      src[0] = *(void **)(v4 + 8);
    }
    else
    {
      memset(src, 0, sizeof(src));
      if ( *(_QWORD *)(v4 + 16) )
      {
        v45 = v21;
        n = *(void **)(v4 + 16);
        src[0] = (void *)qalloc_or_throw();
        src[2] = n;
        memcpy(src[0], *(const void **)(v4 + 8), (size_t)n);
        v21 = v45;
        src[1] = n;
      }
    }
    v22 = v49.m128i_i64[0];
    v23 = v48;
    v50 = *(_DWORD *)v4;
    if ( v49.m128i_i64[1] < (unsigned __int64)(v49.m128i_i64[0] + 1) )
    {
      na = v21;
      v48 = qvector_reserve();
      v22 = v49.m128i_i64[0];
      v23 = v48;
      v21 = na;
    }
    v24 = (int *)(v23 + 32 * v22);
    *v24 = -2;
    *((_QWORD *)v24 + 3) = 0;
    *(_OWORD *)(v24 + 2) = 0;
    if ( v24 != &v50 )
    {
      v25 = v50;
      if ( v50 < -1 )
      {
        *((void **)v24 + 1) = src[0];
      }
      else
      {
        *((_QWORD *)v24 + 1) = 0;
        *((_OWORD *)v24 + 1) = 0;
        if ( src[1] )
        {
          v44 = (int *)(v23 + 32 * v22);
          v46 = v21;
          nb = src[1];
          v33 = (void *)qalloc_or_throw();
          *((_QWORD *)v44 + 1) = v33;
          v34 = src[0];
          *((_QWORD *)v44 + 3) = nb;
          memcpy(v33, v34, (size_t)nb);
          v24 = v44;
          v25 = v50;
          v21 = v46;
          *((_QWORD *)v44 + 2) = nb;
        }
      }
      *v24 = v25;
    }
    ++v49.m128i_i64[0];
    if ( v50 >= -1 && src[0] )
    {
      nc = v21;
      src[1] = nullptr;
      qfree();
      v21 = nc;
    }
    if ( !v21 )
    {
      v26 = *(int *)(qword_251370 + 56 * v20 + 44);
      if ( (int)v26 < *(_DWORD *)(dbg + 64LL) )
      {
        v27 = *(_QWORD *)(dbg + 56LL) + 32 * v26;
        if ( (*(_BYTE *)(v27 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v27 + 16) )
          {
            v28 = *(_QWORD *)(a1 + 56);
            v29 = *(_QWORD *)(a1 + 48);
            v30 = *(_QWORD *)(v7 + 8) ^ *(_QWORD *)(v4 + 8);
            v47 = v30;
            v31 = *(_QWORD *)(a1 + 64);
            v32 = v28 + 1;
            if ( (unsigned __int64)&v47 >= v29 && (unsigned __int64)&v47 < v29 + 8 * v31 )
            {
              if ( v31 < v32 )
              {
                nd = v30;
                v35 = qvector_reserve();
                *(_QWORD *)(a1 + 48) = v35;
                v29 = v35;
                v28 = *(_QWORD *)(a1 + 56);
                v30 = nd;
                v32 = v28 + 1;
              }
            }
            else if ( v31 < v32 )
            {
              v38 = qvector_reserve();
              *(_QWORD *)(a1 + 48) = v38;
              v29 = v38;
              v28 = *(_QWORD *)(a1 + 56);
              v30 = v47;
              v32 = v28 + 1;
            }
            *(_QWORD *)(v29 + 8 * v28) = v30;
            *(_QWORD *)(a1 + 56) = v32;
          }
        }
      }
    }
    goto LABEL_43;
  }
LABEL_9:
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v12;
  *(_QWORD *)(a1 + 24) = v14;
  *(_QWORD *)(a1 + 40) = v13;
  v48 = v16;
  v49 = v15;
  if ( v16 )
  {
    if ( v15.m128i_i64[0] )
    {
      v17 = 0;
      v18 = v16;
      do
      {
        v19 = v18 + 32 * v17;
        if ( *(int *)v19 >= -1 && *(_QWORD *)(v19 + 8) )
        {
          *(_QWORD *)(v19 + 16) = 0;
          qfree();
          v18 = v48;
        }
        ++v17;
      }
      while ( v15.m128i_i64[0] != v17 );
    }
    v49.m128i_i64[0] = 0;
    qfree();
  }
  return v52 - __readfsqword(0x28u);
}

