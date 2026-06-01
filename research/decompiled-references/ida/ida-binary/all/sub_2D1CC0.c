__int64 __fastcall sub_2D1CC0(__int64 a1, char *a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int128 v9; // xmm0
  __int64 v10; // r13
  size_t v11; // r15
  void *v12; // rax
  __int64 v13; // rbp
  const char *v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  size_t v17; // r15
  void *v18; // rax
  const char *v19; // rsi
  _BYTE *v20; // r12
  _BYTE *v21; // r13
  unsigned int v22; // edi
  __int64 v23; // r10
  size_t v24; // r9
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // r13
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v33; // [rsp+10h] [rbp-68h]
  size_t v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  __int64 v36; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 32);
  v39 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == v3 )
    goto LABEL_2;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v4 >= v3 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 40);
    v8 = a1 + 24;
    if ( (unsigned __int64)&src < v6 || (unsigned __int64)&src >= v6 + 24 * v7 )
    {
      if ( v7 >= v4
        || (v30 = qvector_reserve(v8, v6, v4, 24),
            v3 = *(_QWORD *)(a1 + 32),
            *(_QWORD *)(a1 + 24) = v30,
            v6 = v30,
            v3 < v4) )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = v6 + 24 * v3;
          *(_QWORD *)v10 = 0;
          *(_OWORD *)(v10 + 8) = v9;
          v11 = n[0];
          if ( n[0] )
          {
            ++v3;
            v12 = (void *)qalloc_or_throw(n[0]);
            *(_QWORD *)(v10 + 16) = v11;
            *(_QWORD *)v10 = v12;
            memcpy(v12, src, v11);
            *(_QWORD *)(v10 + 8) = v11;
            v9 = 0;
            if ( v3 >= v4 )
              break;
          }
          else if ( ++v3 >= v4 )
          {
            break;
          }
          v6 = *(_QWORD *)(a1 + 24);
        }
      }
    }
    else if ( v7 >= v4
           || (v31 = qvector_reserve(v8, v6, v4, 24),
               v3 = *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 24) = v31,
               v6 = v31,
               v3 < v4) )
    {
      v25 = 24 * v3;
      while ( 1 )
      {
        v26 = v25 + v6;
        ++v3;
        v25 += 24;
        *(_QWORD *)v26 = 0;
        *(_OWORD *)(v26 + 8) = 0;
        if ( v4 == v3 )
          break;
        v6 = *(_QWORD *)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = v4;
    *(_BYTE *)(a1 + 96) = 0;
    goto LABEL_14;
  }
  v27 = v4;
  do
  {
    v28 = (__int64 *)(*(_QWORD *)(a1 + 24) + 24 * v27);
    v29 = *v28;
    if ( *v28 )
    {
      v28[1] = 0;
      qfree(v29, a2);
    }
    ++v27;
  }
  while ( v27 < v3 );
  *(_QWORD *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 96) = 0;
  if ( v4 )
  {
LABEL_14:
    v13 = 0;
    while ( 1 )
    {
      v14 = &s1;
      v15 = 24 * v13 + *(_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)a1 + 24 * v13;
      if ( *(_QWORD *)(v16 + 8) )
        v14 = *(const char **)v16;
      if ( tag_remove(24 * v13 + *(_QWORD *)(a1 + 24), v14, 0) <= 0 )
        goto LABEL_15;
      if ( *(_BYTE *)(a1 + 96) )
        goto LABEL_15;
      src = nullptr;
      *(_OWORD *)n = 0;
      v17 = *(_QWORD *)(v15 + 8);
      if ( !v17 )
        goto LABEL_15;
      v18 = (void *)qalloc_or_throw(*(_QWORD *)(v15 + 8));
      n[1] = v17;
      src = v18;
      v19 = *(const char **)v15;
      memcpy(v18, *(const void **)v15, v17);
      n[0] = v17;
      v20 = src;
      if ( v17 == 1 )
        goto LABEL_30;
      v21 = (char *)src + v17 - 1;
      if ( src < v21 )
      {
        while ( 1 )
        {
          v22 = (char)*(v21 - 1);
          if ( v22 > 0x7F || !isspace(v22) )
            break;
          if ( --v21 == v20 )
            goto LABEL_46;
        }
      }
      v23 = v21 - v20;
      if ( v21 != v20 )
        break;
LABEL_46:
      if ( !v20 || (n[0] = 0, qfree(v20, v19), n[0] > 1) )
        *(_BYTE *)(a1 + 96) = 1;
LABEL_15:
      if ( v4 == ++v13 )
        goto LABEL_2;
    }
    v24 = v23 + 1;
    if ( v17 < v23 + 1 )
    {
      if ( n[1] < v24 )
      {
        v36 = v21 - v20;
        v34 = v23 + 1;
        src = (void *)qvector_reserve(&src, v20, v23 + 1, 1);
        v17 = n[0];
        v20 = src;
        v23 = v36;
        v24 = v34;
      }
      v19 = nullptr;
      v35 = v23;
      v33 = v24;
      memset(&v20[v17], 0, v24 - v17);
      n[0] = v33;
      v21 = (char *)src + v35;
    }
    else if ( v17 != v23 + 1 )
    {
      n[0] = v23 + 1;
    }
    *v21 = 0;
    v20 = src;
    if ( n[0] > 1 )
      *(_BYTE *)(a1 + 96) = 1;
LABEL_30:
    if ( v20 )
    {
      n[0] = 0;
      qfree(v20, v19);
    }
    goto LABEL_15;
  }
LABEL_2:
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 96);
  return a1 + 24;
}
