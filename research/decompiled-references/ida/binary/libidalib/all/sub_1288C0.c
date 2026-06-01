unsigned __int64 __fastcall sub_1288C0(_QWORD *a1, int a2)
{
  __int64 v2; // r13
  size_t v3; // rbp
  const char *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  size_t v9; // rbp
  size_t v10; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  size_t v14; // r8
  __int64 v15; // rsi
  char *v16; // rax
  size_t v17; // rdx
  size_t v18; // rbp
  char *v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rax
  size_t v22; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h]
  size_t v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = a1[6] + 24LL * a2;
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
  {
    v16 = (char *)qalloc_or_throw();
    v17 = v3;
    v18 = v3 - 1;
    v4 = v16;
    memcpy(v16, *(const void **)v2, v17);
    v19 = strchr(v4, 58);
    src = nullptr;
    v24 = 0;
    v20 = v19 - v4;
    if ( v18 <= v19 - v4 )
      v20 = v18;
    if ( v19 )
      v18 = v20;
    if ( v18 )
    {
      src = (void *)qvector_reserve();
      v24 = v18 + 1;
      memmove(src, v4, v18);
      *((_BYTE *)src + v18) = 0;
    }
  }
  else
  {
    src = nullptr;
    v4 = nullptr;
    v24 = 0;
  }
  v5 = a1[13];
  if ( v5 )
  {
    v7 = v5 + 1;
    v8 = a1[13];
    v6 = a1[12];
    --v5;
    if ( a1[14] >= v7 )
      goto LABEL_5;
LABEL_13:
    v12 = qvector_reserve();
    a1[12] = v12;
    v6 = v12;
    goto LABEL_5;
  }
  v6 = a1[12];
  v7 = 2;
  v8 = 1;
  if ( a1[14] < 2u )
    goto LABEL_13;
LABEL_5:
  a1[13] = v7;
  *(_BYTE *)(v6 + v8) = 0;
  *(_BYTE *)(a1[12] + v5) = 45;
  v9 = v24;
  if ( v24 )
  {
    v10 = v24 - 1;
    if ( v24 != 1 )
    {
      v13 = a1[13];
      v14 = v24 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v10 + v13;
        v9 = v24 + v13;
      }
      v15 = a1[12];
      if ( a1[14] < v9 )
      {
        v22 = v14;
        v21 = qvector_reserve();
        a1[12] = v21;
        v14 = v22;
        v15 = v21;
      }
      a1[13] = v9;
      *(_BYTE *)(v15 + v14) = 0;
      memcpy((void *)(v13 + a1[12]), src, v10);
    }
  }
  if ( src )
    qfree();
  if ( v4 )
    qfree();
  return v25 - __readfsqword(0x28u);
}

