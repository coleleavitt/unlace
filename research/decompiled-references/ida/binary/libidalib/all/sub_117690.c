__int64 __fastcall sub_117690(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  const char *v8; // r13
  __int64 *v9; // rbx
  size_t v10; // rax
  __int64 v11; // rbp
  size_t v12; // r12
  size_t v13; // r14
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = v3[1];
  if ( v4 > 1 )
  {
    v17 = *v3;
    if ( v3[2] < v4 + 1 )
    {
      v19 = qvector_reserve();
      *v3 = v19;
      v17 = v19;
    }
    v3[1] = v4 + 1;
    *(_BYTE *)(v17 + v4 - 1) = 59;
    *(_BYTE *)(*v3 + v4) = 0;
    v3 = *(__int64 **)(a1 + 8);
    v4 = v3[1];
  }
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = v4 + 2;
    v7 = *v3;
    --v4;
    if ( v3[2] >= v6 )
      goto LABEL_4;
  }
  else
  {
    v7 = *v3;
    v6 = 3;
    v5 = 2;
    if ( (unsigned __int64)v3[2] >= 3 )
      goto LABEL_4;
  }
  v16 = qvector_reserve();
  *v3 = v16;
  v7 = v16;
LABEL_4:
  v3[1] = v6;
  *(_BYTE *)(v7 + v5) = 0;
  *(_WORD *)(*v3 + v4) = 11818;
  v8 = *(const char **)(a2 + 24);
  if ( v8 )
  {
    v9 = *(__int64 **)(a1 + 8);
    v10 = strlen(v8);
    v11 = v9[1];
    v12 = v10;
    v13 = v10;
    if ( v11 )
    {
      --v11;
      v13 = v10 + v11;
    }
    v14 = *v9;
    if ( v9[2] < v13 + 1 )
    {
      v18 = qvector_reserve();
      *v9 = v18;
      v14 = v18;
    }
    v9[1] = v13 + 1;
    *(_BYTE *)(v14 + v13) = 0;
    memmove((void *)(v11 + *v9), v8, v12);
  }
  return 0;
}

