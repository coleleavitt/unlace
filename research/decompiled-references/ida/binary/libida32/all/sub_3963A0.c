unsigned __int64 __fastcall sub_3963A0(_QWORD *a1, const char *a2, const char *a3)
{
  const char *v3; // r13
  bool v5; // zf
  int v7; // eax
  size_t v8; // rbx
  void *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  size_t v15; // rbp
  void *v16; // r15
  void *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // rbp
  int v32; // eax
  __int64 v33; // rax
  void *v34; // rdi
  void *v35; // rdi
  void *ptr; // [rsp+8h] [rbp-70h]
  char v37; // [rsp+17h] [rbp-61h]
  _QWORD *v38; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v5 = *a3 == 45;
  v41 = __readfsqword(0x28u);
  if ( v5 )
  {
    v31 = a3 + 1;
    v32 = strlen(a3 + 1);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v32 > 1024 )
      v32 = 1024;
    v8 = v32;
    if ( !v32 )
    {
      v37 = 1;
      if ( a2 )
        goto LABEL_6;
      goto LABEL_31;
    }
    v35 = nullptr;
    if ( v32 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v32 + 1LL, 1);
      v35 = src;
    }
    a2 = v31;
    n[0] = v8 + 1;
    memmove(v35, v31, v8);
    v37 = 1;
    *((_BYTE *)src + v8) = 0;
    v9 = src;
    v8 = n[0];
LABEL_23:
    if ( v3 )
    {
LABEL_7:
      v10 = strlen(v3);
      v14 = 1024;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v10 > 1024 )
        v10 = 1024;
      v15 = v10;
      if ( v10 )
      {
        v34 = nullptr;
        if ( v10 != -1 )
        {
          src = (void *)qvector_reserve(&src, 0, v10 + 1LL, 1);
          v34 = src;
        }
        a2 = v3;
        n[0] = v15 + 1;
        memmove(v34, v3, v15);
        *((_BYTE *)src + v15) = 0;
        v15 = n[0];
        v38 = a1 + 7;
        v16 = src;
        if ( n[0] )
        {
          a2 = (const char *)src;
          ptr = (void *)qalloc_or_throw(n[0], v3, v14, v11, v12, v13);
          memcpy(ptr, v16, v15);
LABEL_12:
          v17 = nullptr;
          if ( !v8 )
            goto LABEL_13;
          goto LABEL_26;
        }
      }
      else
      {
        v16 = nullptr;
        v38 = a1 + 7;
      }
      ptr = nullptr;
      goto LABEL_12;
    }
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v8 )
    {
      src = (void *)qalloc_or_throw(v8, a2, v23, v24, v25, v26);
      n[1] = v8;
      memcpy(src, v9, v8);
      v16 = src;
      v38 = a1 + 7;
      a2 = (const char *)src;
      ptr = (void *)qalloc_or_throw(v8, v9, v27, v28, v29, v30);
      memcpy(ptr, a2, v8);
      v15 = v8;
LABEL_26:
      v17 = (void *)qalloc_or_throw(v8, a2, v14, v11, v12, v13);
      memcpy(v17, v9, v8);
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
    v22 = nullptr;
    if ( v7 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v7 + 1LL, 1);
      v22 = src;
    }
    a2 = a3;
    n[0] = v8 + 1;
    memmove(v22, a3, v8);
    v37 = 0;
    *((_BYTE *)src + v8) = 0;
    v9 = src;
    v8 = n[0];
    goto LABEL_23;
  }
  v37 = 0;
  if ( a2 )
  {
LABEL_6:
    v9 = nullptr;
    goto LABEL_7;
  }
LABEL_31:
  v9 = (void *)v3;
  v16 = nullptr;
  v15 = 0;
  v38 = a1 + 7;
  v8 = 0;
  v17 = nullptr;
  ptr = nullptr;
LABEL_13:
  v18 = a1[8];
  v19 = a1[7];
  if ( a1[9] < (unsigned __int64)(v18 + 1) )
  {
    v33 = qvector_reserve(v38, v19, v18 + 1, 56);
    a1[7] = v33;
    v18 = a1[8];
    v19 = v33;
  }
  v20 = v19 + 56 * v18;
  *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  *(_QWORD *)v20 = ptr;
  *(_QWORD *)(v20 + 24) = v17;
  *(_BYTE *)(v20 + 48) = v37;
  *(__m128i *)(v20 + 32) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  ++a1[8];
  if ( v9 )
    qfree(v9);
  if ( v16 )
    qfree(v16);
  return v41 - __readfsqword(0x28u);
}

