unsigned __int64 __fastcall sub_4DA700(_QWORD *a1, int a2, char *a3, int a4, char a5)
{
  bool v5; // r14
  char *v9; // rax
  __int64 v10; // r13
  bool v11; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
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
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-60h] BYREF
  char *s; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-50h]
  void *src; // [rsp+20h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-40h]
  unsigned __int64 v37; // [rsp+38h] [rbp-30h]

  v5 = 1;
  v37 = __readfsqword(0x28u);
  v34 = (unsigned __int64)&a3[a2];
  s = a3;
  v32 = unpack_dq(&s);
  v9 = s;
  if ( (unsigned __int64)s < v34 )
  {
    v5 = *s == 0;
    v9 = s + 1;
  }
  s = v9;
  v10 = unpack_dq(&s);
  if ( a5 )
    v11 = a4 == 1;
  else
    v11 = a4 == 0;
  if ( !v11 && v5 )
  {
    sub_4DA630((__int64)a1, v32);
    return v37 - __readfsqword(0x28u);
  }
  v13 = (_QWORD *)a1[2];
  v14 = a1 + 1;
  if ( v13 )
  {
    v15 = a1 + 1;
    do
    {
      while ( 1 )
      {
        v16 = v13[2];
        v17 = v13[3];
        if ( v13[4] < v32 )
          break;
        v15 = v13;
        v13 = (_QWORD *)v13[2];
        if ( !v16 )
          goto LABEL_14;
      }
      v13 = (_QWORD *)v13[3];
    }
    while ( v17 );
LABEL_14:
    if ( v14 != v15 && v32 >= v15[4] )
      goto LABEL_17;
  }
  else
  {
    v15 = a1 + 1;
  }
  src = &v32;
  v15 = sub_4D5760(a1, v15, (__int64)&unk_23ADC14, (unsigned __int64 **)&src);
LABEL_17:
  v18 = v15[5];
  v19 = (void **)(v18 + 24 * v10);
  if ( v11 )
  {
    v20 = s;
    src = nullptr;
    *(_OWORD *)n = 0;
    v21 = s;
    do
    {
      if ( (unsigned __int64)v21 >= v34 )
        goto LABEL_21;
      ++v21;
    }
    while ( *(v21 - 1) );
    s = v21;
    if ( !v20
      || (v28 = strlen(v20), (v29 = v28) == 0)
      || (v30 = v28 + 1,
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
    v23 = (void *)qalloc_or_throw(n[0]);
    memcpy(v23, src, v22);
LABEL_22:
    v24 = v15[5];
    v25 = v15[6];
    v26 = (char *)v19 - v24;
    if ( v15[7] < (unsigned __int64)(v25 + 1) )
    {
      v31 = qvector_reserve(v15 + 5, v24, v25 + 1, 24);
      v15[5] = v31;
      v19 = (void **)&v26[v31];
      v25 = v15[6];
    }
    memmove(v19 + 3, v19, 24 * v25 - (_QWORD)v26);
    *v19 = v23;
    *(__m128i *)(v19 + 1) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
    ++v15[6];
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
      v18 = v15[5];
    }
    memmove(v19, v19 + 3, v18 + 24LL * v15[6]-- - (_QWORD)v19 - 24);
  }
  return v37 - __readfsqword(0x28u);
}
