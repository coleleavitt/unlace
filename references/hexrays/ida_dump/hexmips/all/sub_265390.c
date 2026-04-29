__int64 __fastcall sub_265390(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v7; // r14
  void *v8; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rbp
  _BYTE *v11; // rax
  size_t v12; // rbx
  __int64 *v13; // r12
  size_t v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v7 = (const __m128i *)a4;
  src = nullptr;
  v23 = 0;
  if ( a2 > 0 )
  {
    v8 = (void *)qvector_reserve(&src, 0, a2 + 1LL, 1);
    v9 = v23;
    src = v8;
    if ( (unsigned __int64)v23 < a2 + 1LL )
    {
      do
      {
        a4 = v9;
        *((_BYTE *)v8 + v9++) = 32;
        v8 = src;
      }
      while ( a2 != a4 );
    }
    *(_QWORD *)&v23 = a2 + 1LL;
    *((_BYTE *)v8 + a2) = 0;
  }
  sub_F6810((__int64 *)&src, a3, v7, a4, a5, a6);
  v10 = src;
  if ( !src )
    return 0;
  if ( *(_BYTE *)(a1 + 49) )
  {
    if ( *(_BYTE *)src )
    {
      do
      {
        v11 = (_BYTE *)tag_skipcodes(v10);
        if ( !*v11 )
        {
          v10 = src;
          v12 = v11 - (_BYTE *)src;
          goto LABEL_12;
        }
        *(_BYTE *)(a1 + 48) = *v11;
        v10 = v11 + 1;
      }
      while ( v11[1] );
      v12 = v10 - (_BYTE *)src;
      v10 = src;
      goto LABEL_12;
    }
  }
  else if ( (unsigned __int64)v23 > 1 )
  {
    v18 = tag_remove(&src, src, 0);
    v10 = src;
    v12 = v18;
    if ( v18 )
    {
      v19 = v18 - 1;
      v20 = (char *)src + v18 - 1;
      if ( !((unsigned __int64)v23 | v19) )
        v20 = &byte_4CE9D0;
      *(_BYTE *)(a1 + 48) = *v20;
    }
    goto LABEL_12;
  }
  v12 = 0;
LABEL_12:
  v13 = *(__int64 **)(a1 + 56);
  v14 = v12;
  v15 = v13[1];
  if ( v15 )
  {
    --v15;
    v14 = v12 + v15;
  }
  v16 = *v13;
  if ( v13[2] < v14 + 1 )
  {
    v21 = qvector_reserve(v13, v16, v14 + 1, 1);
    *v13 = v21;
    v16 = v21;
  }
  v13[1] = v14 + 1;
  *(_BYTE *)(v16 + v14) = 0;
  memmove((void *)(v15 + *v13), v10, v12);
  if ( src )
  {
    *(_QWORD *)&v23 = 0;
    qfree(src);
  }
  return (unsigned int)v12;
}
