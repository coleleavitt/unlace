unsigned __int64 __fastcall sub_7C9380(const char **a1, const char *a2)
{
  const char *v2; // rbx
  const char *v5; // rsi
  const char *v6; // rdx
  const char *v7; // rsi
  int v8; // r13d
  size_t v9; // r14
  const char *v10; // r15
  const char *v12; // r13
  __int64 v13; // rax
  void *v14; // rdi
  const char *v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rbx
  char *src; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+10h] [rbp-88h] BYREF
  __int64 v21; // [rsp+18h] [rbp-80h] BYREF
  __int128 v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  char *v24; // [rsp+38h] [rbp-60h] BYREF
  size_t n[3]; // [rsp+40h] [rbp-58h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v26 - __readfsqword(0x28u);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    do
    {
      v13 = (__int64)&(*a1)[32 * (_QWORD)v12];
      v14 = *(void **)(v13 + 8);
      if ( v14 )
      {
        *(_QWORD *)(v13 + 16) = 0;
        qfree(v14);
      }
      ++v12;
    }
    while ( v2 != v12 );
    goto LABEL_15;
  }
  v5 = *a1;
  v6 = a1[2];
  if ( &v20 < (__int64 *)*a1 || &v20 >= (__int64 *)&v5[32 * (_QWORD)v6] )
  {
    if ( v6 < a2 )
    {
      *a1 = (const char *)qvector_reserve(a1, v5, a2, 32);
      v2 = a1[1];
    }
    if ( v2 < a2 )
    {
      do
      {
        v15 = v2++;
        v16 = (__int64)&(*a1)[32 * (_QWORD)v15];
        *(_QWORD *)v16 = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_OWORD *)(v16 + 16) = 0;
      }
      while ( a2 != v2 );
      a1[1] = a2;
      return v26 - __readfsqword(0x28u);
    }
LABEL_15:
    a1[1] = a2;
    return v26 - __readfsqword(0x28u);
  }
  v7 = (const char *)&v21;
  v23 = 0;
  v24 = nullptr;
  *(_OWORD *)n = 0;
  sub_7B9B70(&v24, (__int64)&v21);
  v8 = v23;
  v9 = n[0];
  src = v24;
  if ( a1[2] < a2 )
  {
    v7 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, a2, 32);
  }
  v10 = a1[1];
  if ( v10 < a2 )
  {
    do
    {
      v18 = (__int64)&(*a1)[32 * (_QWORD)v10];
      *(_DWORD *)v18 = v8;
      *(_QWORD *)(v18 + 8) = 0;
      *(_OWORD *)(v18 + 16) = 0;
      if ( v9 )
      {
        v17 = (void *)qalloc_or_throw(v9, v7);
        *(_QWORD *)(v18 + 8) = v17;
        v7 = src;
        *(_QWORD *)(v18 + 24) = v9;
        memcpy(v17, src, v9);
        *(_QWORD *)(v18 + 16) = v9;
      }
      ++v10;
    }
    while ( a2 != v10 );
  }
  a1[1] = a2;
  if ( src )
    qfree(src);
  return v26 - __readfsqword(0x28u);
}

