void __fastcall sub_107B0(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r13
  size_t v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( a1 && a3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = v4 + 1;
      v6 = v4 + 2;
      v7 = *a1;
      --v4;
      if ( a1[2] >= v6 )
        goto LABEL_5;
    }
    else
    {
      v7 = *a1;
      v6 = 3;
      v5 = 2;
      if ( (unsigned __int64)a1[2] >= 3 )
        goto LABEL_5;
    }
    v17 = qvector_reserve();
    *a1 = v17;
    v7 = v17;
LABEL_5:
    a1[1] = v6;
    *(_BYTE *)(v7 + v5) = 0;
    *(_WORD *)(*a1 + v4) = 2049;
    tag_addr();
    v8 = strlen(a3);
    v9 = a1[1];
    v10 = v8;
    v11 = v8;
    if ( v9 )
    {
      --v9;
      v11 = v8 + v9;
    }
    v12 = *a1;
    if ( a1[2] < v11 + 1 )
    {
      v19 = qvector_reserve();
      *a1 = v19;
      v12 = v19;
    }
    a1[1] = v11 + 1;
    *(_BYTE *)(v12 + v11) = 0;
    memmove((void *)(v9 + *a1), a3, v10);
    v13 = a1[1];
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = v13 + 2;
      v16 = *a1;
      --v13;
      if ( a1[2] >= v15 )
      {
LABEL_11:
        a1[1] = v15;
        *(_BYTE *)(v16 + v14) = 0;
        *(_WORD *)(*a1 + v13) = 2050;
        return;
      }
    }
    else
    {
      v16 = *a1;
      v15 = 3;
      v14 = 2;
      if ( (unsigned __int64)a1[2] >= 3 )
        goto LABEL_11;
    }
    v18 = qvector_reserve();
    *a1 = v18;
    v16 = v18;
    goto LABEL_11;
  }
}
