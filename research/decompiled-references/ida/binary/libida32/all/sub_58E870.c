unsigned __int64 __fastcall sub_58E870(const char **a1, int a2, char *a3, char a4)
{
  __int64 v6; // rax
  char *v7; // r13
  __int64 v8; // r12
  char *v9; // rax
  const char *v10; // rax
  const char *v11; // rsi
  __int64 v12; // r12
  void *v13; // rdi
  size_t v15; // rax
  size_t v16; // r14
  void *v17; // rdi
  size_t v18; // r15
  size_t v19; // rbp
  void *v20; // r13
  const char *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  char *s; // [rsp+0h] [rbp-68h] BYREF
  char *v25; // [rsp+8h] [rbp-60h]
  void *dest; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  s = a3;
  v25 = &a3[a2];
  dest = nullptr;
  *(_OWORD *)n = 0;
  v6 = unpack_dq(&s, v25);
  v7 = s;
  v8 = v6;
  v9 = s;
  do
  {
    if ( v9 >= v25 )
      goto LABEL_4;
    ++v9;
  }
  while ( *(v9 - 1) );
  s = v9;
  if ( !v7 || (v15 = strlen(v7), (v16 = v15) == 0) )
  {
LABEL_4:
    n[0] = 0;
    goto LABEL_5;
  }
  v17 = dest;
  v18 = v15 + 1;
  if ( n[1] < v15 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v18, 1);
    v17 = dest;
  }
  n[0] = v18;
  memmove(v17, v7, v16);
  *((_BYTE *)dest + v16) = 0;
LABEL_5:
  v10 = *a1;
  v11 = *a1;
  v12 = (__int64)&(*a1)[24 * v8];
  if ( a4 )
  {
    v13 = *(void **)v12;
    if ( *(_QWORD *)v12 )
    {
      *(_QWORD *)(v12 + 8) = 0;
      qfree(v13);
      v10 = *a1;
    }
    memmove((void *)v12, (const void *)(v12 + 24), (size_t)&v10[24 * (_QWORD)a1[1]-- - v12 - 24]);
  }
  else
  {
    v19 = n[0];
    v20 = nullptr;
    if ( n[0] )
    {
      v20 = (void *)qalloc_or_throw(n[0], v11);
      memcpy(v20, dest, v19);
      v11 = *a1;
    }
    v21 = a1[1];
    v22 = v12 - (_QWORD)v11;
    if ( a1[2] < v21 + 1 )
    {
      v23 = qvector_reserve(a1, v11, v21 + 1, 24);
      *a1 = (const char *)v23;
      v12 = v23 + v22;
      v21 = a1[1];
    }
    memmove((void *)(v12 + 24), (const void *)v12, 24LL * (_QWORD)v21 - v22);
    *(_QWORD *)v12 = v20;
    *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
    ++a1[1];
  }
  if ( dest )
  {
    n[0] = 0;
    qfree(dest);
  }
  return v28 - __readfsqword(0x28u);
}

