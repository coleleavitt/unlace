unsigned __int64 __fastcall sub_34D910(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  size_t v4; // rbp
  const char *v5; // r12
  __int64 v6; // rbp
  const char *v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbp
  size_t v12; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  size_t v16; // r8
  __int64 v17; // rsi
  char *v18; // rax
  size_t v19; // rdx
  size_t v20; // rbp
  char *v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rax
  size_t v24; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v2 = a1[6];
  v27 = __readfsqword(0x28u);
  v3 = v2 + 24LL * a2;
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v18 = (char *)qalloc_or_throw(*(_QWORD *)(v3 + 8));
    v19 = v4;
    v20 = v4 - 1;
    v5 = v18;
    memcpy(v18, *(const void **)v3, v19);
    v21 = strchr(v5, 58);
    src = nullptr;
    v26 = 0;
    v22 = v21 - v5;
    if ( v20 <= v21 - v5 )
      v22 = v20;
    if ( v21 )
      v20 = v22;
    if ( v20 )
    {
      src = (void *)qvector_reserve(&src, 0, v20 + 1, 1);
      *(_QWORD *)&v26 = v20 + 1;
      memmove(src, v5, v20);
      *((_BYTE *)src + v20) = 0;
    }
  }
  else
  {
    src = nullptr;
    v5 = nullptr;
    v26 = 0;
  }
  v6 = a1[13];
  if ( v6 )
  {
    v8 = v6 + 1;
    v9 = a1[13];
    v7 = (const char *)a1[12];
    --v6;
    v10 = a1 + 12;
    if ( a1[14] >= v8 )
      goto LABEL_5;
LABEL_13:
    v14 = qvector_reserve(v10, v7, v8, 1);
    a1[12] = v14;
    v7 = (const char *)v14;
    goto LABEL_5;
  }
  v7 = (const char *)a1[12];
  v8 = 2;
  v9 = 1;
  v10 = a1 + 12;
  if ( a1[14] < 2u )
    goto LABEL_13;
LABEL_5:
  a1[13] = v8;
  v7[v9] = 0;
  *(_BYTE *)(a1[12] + v6) = 45;
  v11 = v26;
  if ( (_QWORD)v26 )
  {
    v12 = v26 - 1;
    if ( (_QWORD)v26 != 1 )
    {
      v15 = a1[13];
      v16 = v26 - 1;
      if ( v15 )
      {
        --v15;
        v16 = v12 + v15;
        v11 = v26 + v15;
      }
      v17 = a1[12];
      if ( a1[14] < v11 )
      {
        v24 = v16;
        v23 = qvector_reserve(v10, v17, v11, 1);
        a1[12] = v23;
        v16 = v24;
        v17 = v23;
      }
      a1[13] = v11;
      *(_BYTE *)(v17 + v16) = 0;
      v7 = (const char *)src;
      memcpy((void *)(v15 + a1[12]), src, v12);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v26 = 0;
    qfree(src, v7);
  }
  if ( v5 )
    qfree(v5, v7);
  return v27 - __readfsqword(0x28u);
}
