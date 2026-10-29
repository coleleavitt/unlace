unsigned __int64 __fastcall sub_39B0B0(_QWORD *a1, const char *a2, const char *a3)
{
  const char *v3; // r13
  bool v5; // zf
  int v7; // eax
  size_t v8; // rbx
  void *v9; // r14
  int v10; // eax
  size_t v11; // rbp
  void *v12; // r15
  void *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  void *v18; // rdi
  const void *v19; // rbp
  int v20; // eax
  __int64 v21; // rax
  void *v22; // rdi
  void *v23; // rdi
  void *ptr; // [rsp+8h] [rbp-70h]
  char v25; // [rsp+17h] [rbp-61h]
  _QWORD *v26; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v5 = *a3 == 45;
  v29 = __readfsqword(0x28u);
  if ( v5 )
  {
    v19 = a3 + 1;
    v20 = strlen(a3 + 1);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v20 > 1024 )
      v20 = 1024;
    v8 = v20;
    if ( !v20 )
    {
      v25 = 1;
      if ( a2 )
        goto LABEL_6;
      goto LABEL_31;
    }
    v23 = nullptr;
    if ( v20 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v20 + 1LL, 1);
      v23 = src;
    }
    n[0] = v8 + 1;
    memmove(v23, v19, v8);
    v25 = 1;
    *((_BYTE *)src + v8) = 0;
    v9 = src;
    v8 = n[0];
LABEL_23:
    if ( a2 )
    {
LABEL_7:
      v10 = strlen(a2);
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v10 > 1024 )
        v10 = 1024;
      v11 = v10;
      if ( v10 )
      {
        v22 = nullptr;
        if ( v10 != -1 )
        {
          src = (void *)qvector_reserve(&src, 0, v10 + 1LL, 1);
          v22 = src;
        }
        n[0] = v11 + 1;
        memmove(v22, a2, v11);
        *((_BYTE *)src + v11) = 0;
        v11 = n[0];
        v26 = a1 + 7;
        v12 = src;
        if ( n[0] )
        {
          ptr = (void *)qalloc_or_throw(n[0]);
          memcpy(ptr, v12, v11);
LABEL_12:
          v13 = nullptr;
          if ( !v8 )
            goto LABEL_13;
          goto LABEL_26;
        }
      }
      else
      {
        v12 = nullptr;
        v26 = a1 + 7;
      }
      ptr = nullptr;
      goto LABEL_12;
    }
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v8 )
    {
      src = (void *)qalloc_or_throw(v8);
      n[1] = v8;
      memcpy(src, v9, v8);
      v12 = src;
      v26 = a1 + 7;
      ptr = (void *)qalloc_or_throw(v8);
      memcpy(ptr, v12, v8);
      v11 = v8;
LABEL_26:
      v13 = (void *)qalloc_or_throw(v8);
      memcpy(v13, v9, v8);
      goto LABEL_13;
    }
    v3 = (const char *)v9;
    goto LABEL_31;
  }
  v7 = strlen(a3);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v7 > 1024 )
    v7 = 1024;
  v8 = v7;
  if ( v7 )
  {
    v18 = nullptr;
    if ( v7 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v7 + 1LL, 1);
      v18 = src;
    }
    n[0] = v8 + 1;
    memmove(v18, a3, v8);
    v25 = 0;
    *((_BYTE *)src + v8) = 0;
    v9 = src;
    v8 = n[0];
    goto LABEL_23;
  }
  v25 = 0;
  if ( a2 )
  {
LABEL_6:
    v9 = nullptr;
    goto LABEL_7;
  }
LABEL_31:
  v9 = (void *)v3;
  v12 = nullptr;
  v11 = 0;
  v26 = a1 + 7;
  v8 = 0;
  v13 = nullptr;
  ptr = nullptr;
LABEL_13:
  v14 = a1[8];
  v15 = a1[7];
  if ( a1[9] < (unsigned __int64)(v14 + 1) )
  {
    v21 = qvector_reserve(v26, v15, v14 + 1, 56);
    a1[7] = v21;
    v14 = a1[8];
    v15 = v21;
  }
  v16 = v15 + 56 * v14;
  *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  *(_QWORD *)v16 = ptr;
  *(_QWORD *)(v16 + 24) = v13;
  *(_BYTE *)(v16 + 48) = v25;
  *(__m128i *)(v16 + 32) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  ++a1[8];
  if ( v9 )
    qfree(v9);
  if ( v12 )
    qfree(v12);
  return v29 - __readfsqword(0x28u);
}
