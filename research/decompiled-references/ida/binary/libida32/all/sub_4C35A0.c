unsigned __int64 __fastcall sub_4C35A0(_QWORD *a1, int a2, char *a3, int a4, char a5)
{
  bool v5; // r14
  char *v9; // rax
  __int64 v10; // r13
  bool v11; // r12
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  void **v19; // rbp
  char *v20; // r12
  char *v21; // rax
  size_t v22; // r12
  void *v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  char *v26; // r14
  void *v27; // rdi
  size_t v28; // rax
  size_t v29; // r13
  size_t v30; // r14
  const char *v31; // rsi
  __int64 v32; // rax
  unsigned int v33; // [rsp+Ch] [rbp-5Ch] BYREF
  char *s; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-50h]
  void *src; // [rsp+20h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-40h]
  unsigned __int64 v38; // [rsp+38h] [rbp-30h]

  v5 = 1;
  v38 = __readfsqword(0x28u);
  v35 = (unsigned __int64)&a3[a2];
  s = a3;
  v33 = unpack_dd(&s);
  v9 = s;
  if ( (unsigned __int64)s < v35 )
  {
    v5 = *s == 0;
    v9 = s + 1;
  }
  s = v9;
  v10 = unpack_dq(&s, v35);
  if ( a5 )
    v11 = a4 == 1;
  else
    v11 = a4 == 0;
  if ( !v11 && v5 )
  {
    sub_4C34D0((__int64)a1, v33);
    return v38 - __readfsqword(0x28u);
  }
  v13 = a1[2];
  v14 = a1 + 1;
  if ( v13 )
  {
    v15 = (__int64)(a1 + 1);
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v13 + 16);
        v17 = *(_QWORD *)(v13 + 24);
        if ( *(_DWORD *)(v13 + 32) < v33 )
          break;
        v15 = v13;
        v13 = *(_QWORD *)(v13 + 16);
        if ( !v16 )
          goto LABEL_14;
      }
      v13 = *(_QWORD *)(v13 + 24);
    }
    while ( v17 );
LABEL_14:
    if ( v14 != (_QWORD *)v15 && v33 >= *(_DWORD *)(v15 + 32) )
      goto LABEL_17;
  }
  else
  {
    v15 = (__int64)(a1 + 1);
  }
  src = &v33;
  v15 = sub_4BE680(a1, v15, (__int64)&unk_2389B34, (_DWORD **)&src);
LABEL_17:
  v18 = *(_QWORD *)(v15 + 40);
  v19 = (void **)(v18 + 24 * v10);
  if ( v11 )
  {
    v20 = s;
    src = nullptr;
    *(_OWORD *)n = 0;
    v21 = s;
    do
    {
      if ( (unsigned __int64)v21 >= v35 )
        goto LABEL_21;
      ++v21;
    }
    while ( *(v21 - 1) );
    s = v21;
    if ( !v20
      || (v28 = strlen(v20), (v29 = v28) == 0)
      || (v30 = v28 + 1,
          v31 = v20,
          src = (void *)qvector_reserve(&src, 0, v28 + 1, 1),
          n[0] = v30,
          memmove(src, v20, v29),
          *((_BYTE *)src + v29) = 0,
          (v22 = n[0]) == 0) )
    {
LABEL_21:
      v22 = 0;
      v23 = nullptr;
      goto LABEL_22;
    }
    v23 = (void *)qalloc_or_throw(n[0], v31);
    memcpy(v23, src, v22);
LABEL_22:
    v24 = *(_QWORD *)(v15 + 40);
    v25 = *(_QWORD *)(v15 + 48);
    v26 = (char *)v19 - v24;
    if ( *(_QWORD *)(v15 + 56) < (unsigned __int64)(v25 + 1) )
    {
      v32 = qvector_reserve(v15 + 40, v24, v25 + 1, 24);
      *(_QWORD *)(v15 + 40) = v32;
      v19 = (void **)&v26[v32];
      v25 = *(_QWORD *)(v15 + 48);
    }
    memmove(v19 + 3, v19, 24 * v25 - (_QWORD)v26);
    *v19 = v23;
    *(__m128i *)(v19 + 1) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
    ++*(_QWORD *)(v15 + 48);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  else
  {
    v27 = *v19;
    if ( *v19 )
    {
      v19[1] = nullptr;
      qfree(v27);
      v18 = *(_QWORD *)(v15 + 40);
    }
    memmove(v19, v19 + 3, v18 + 24LL * *(_QWORD *)(v15 + 48) - (_QWORD)v19 - 24);
    --*(_QWORD *)(v15 + 48);
  }
  return v38 - __readfsqword(0x28u);
}

