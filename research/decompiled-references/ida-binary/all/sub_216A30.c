unsigned __int64 __fastcall sub_216A30(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 *v7; // rbp
  int v9; // r15d
  int v10; // r13d
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  char v22; // r10
  __int64 v23; // rdx
  __int64 *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  char nc; // [rsp+0h] [rbp-B8h]
  void *nb; // [rsp+0h] [rbp-B8h]
  char na; // [rsp+0h] [rbp-B8h]
  void *n; // [rsp+0h] [rbp-B8h]
  __int64 *v35; // [rsp+10h] [rbp-A8h]
  char v36; // [rsp+10h] [rbp-A8h]
  char v37; // [rsp+1Fh] [rbp-99h]
  __int64 v38; // [rsp+28h] [rbp-90h] BYREF
  __int64 v39; // [rsp+30h] [rbp-88h] BYREF
  __m128i v40; // [rsp+38h] [rbp-80h]
  int v41; // [rsp+50h] [rbp-68h] BYREF
  void *src[3]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( !a2 )
    return v43 - __readfsqword(0x28u);
  v4 = a3;
  if ( !a3 )
    return v43 - __readfsqword(0x28u);
  v7 = a2;
  v9 = *(_DWORD *)(dbg + 64);
  v10 = v9 + 14;
  if ( v9 + 7 >= 0 )
    v10 = v9 + 7;
  v11 = v10 >> 3;
  if ( v11 )
  {
    v29 = qvector_reserve(a1, 0, v11, 1);
    v30 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v29;
    a2 = nullptr;
    memset((void *)(v29 + v30), 0, v11 - v30);
    *(_QWORD *)(a1 + 8) = v11;
  }
  v12 = v9;
  v13 = 0;
  v14 = 0;
  v39 = 0;
  v40 = 0;
  if ( v9 )
  {
    a2 = nullptr;
    v14 = qvector_reserve(&v39, 0, v9, 32);
    v39 = v14;
    if ( v9 <= 0 )
    {
      v13 = v40.m128i_i64[1];
      v12 = v40.m128i_i64[0];
      goto LABEL_9;
    }
    v21 = 0;
    while ( 1 )
    {
      a2 = (__int64 *)v4;
      v22 = sub_235060(v7, v4);
      if ( !v22 )
        break;
      if ( a4 )
        goto LABEL_21;
LABEL_39:
      ++v21;
      v7 += 4;
      v4 += 32;
      if ( v12 == v21 )
      {
        v14 = v39;
        v13 = v40.m128i_i64[1];
        v12 = v40.m128i_i64[0];
        goto LABEL_9;
      }
    }
    *(_BYTE *)(*(_QWORD *)a1 + (v21 >> 3)) |= 1 << (v21 & 7);
LABEL_21:
    v41 = -2;
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
        v36 = v22;
        n = *(void **)(v4 + 16);
        src[0] = (void *)qalloc_or_throw(n);
        src[2] = n;
        memcpy(src[0], *(const void **)(v4 + 8), (size_t)n);
        v22 = v36;
        src[1] = n;
      }
    }
    v23 = v40.m128i_i64[0];
    a2 = (__int64 *)v39;
    v41 = *(_DWORD *)v4;
    if ( v40.m128i_i64[1] < (unsigned __int64)(v40.m128i_i64[0] + 1) )
    {
      na = v22;
      v39 = qvector_reserve(&v39, v39, v40.m128i_i64[0] + 1, 32);
      v23 = v40.m128i_i64[0];
      a2 = (__int64 *)v39;
      v22 = na;
    }
    v24 = &a2[4 * v23];
    *(_DWORD *)v24 = -2;
    v24[3] = 0;
    *(_OWORD *)(v24 + 1) = 0;
    if ( v24 != (__int64 *)&v41 )
    {
      v25 = v41;
      if ( v41 < -1 )
      {
        v24[1] = (__int64)src[0];
      }
      else
      {
        v24[1] = 0;
        *((_OWORD *)v24 + 1) = 0;
        if ( src[1] )
        {
          v35 = &a2[4 * v23];
          v37 = v22;
          nb = src[1];
          v28 = (void *)qalloc_or_throw(src[1]);
          v35[1] = (__int64)v28;
          a2 = (__int64 *)src[0];
          v35[3] = (__int64)nb;
          memcpy(v28, a2, (size_t)nb);
          v24 = v35;
          v25 = v41;
          v22 = v37;
          v35[2] = (__int64)nb;
        }
      }
      *(_DWORD *)v24 = v25;
    }
    ++v40.m128i_i64[0];
    if ( v41 >= -1 && src[0] )
    {
      nc = v22;
      src[1] = nullptr;
      qfree(src[0], (const char *)a2);
      v22 = nc;
    }
    if ( !v22 )
    {
      a2 = &dbg;
      v26 = *(int *)(qword_8CC390 + 56 * v21 + 44);
      if ( (int)v26 < *(_DWORD *)(dbg + 64) )
      {
        v27 = *(_QWORD *)(dbg + 56) + 32 * v26;
        if ( (*(_BYTE *)(v27 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v27 + 16) )
          {
            a2 = &v38;
            v38 = v7[1] ^ *(_QWORD *)(v4 + 8);
            sub_216980((__int64 *)(a1 + 48), &v38);
          }
        }
      }
    }
    goto LABEL_39;
  }
LABEL_9:
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v12;
  *(_QWORD *)(a1 + 24) = v14;
  *(_QWORD *)(a1 + 40) = v13;
  v39 = v16;
  v40 = v15;
  if ( v16 )
  {
    v17 = v15.m128i_i64[0];
    if ( v15.m128i_i64[0] )
    {
      v18 = 0;
      do
      {
        v19 = v16 + 32 * v18;
        if ( *(int *)v19 >= -1 )
        {
          v20 = *(_QWORD *)(v19 + 8);
          if ( v20 )
          {
            *(_QWORD *)(v19 + 16) = 0;
            qfree(v20, (const char *)a2);
            v16 = v39;
          }
        }
        ++v18;
      }
      while ( v18 != v17 );
    }
    v40.m128i_i64[0] = 0;
    qfree(v16, (const char *)a2);
  }
  return v43 - __readfsqword(0x28u);
}
