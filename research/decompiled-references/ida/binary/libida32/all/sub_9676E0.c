__int64 __fastcall sub_9676E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  const char *v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  const char **v10; // rcx
  __int64 v12; // rbp
  unsigned int *v13; // r12
  _QWORD v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  if ( (v2 & 4) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( (v3 & 2) != 0 )
    {
      v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v4 )
        BUG();
    }
    else
    {
      v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v14[0] = *(_QWORD *)(v4 + 40);
    v5 = (const char *)sub_FBAC60(v14, 0);
    v7 = v6;
  }
  else
  {
    v12 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    if ( (v12 & 7) != 0 )
    {
      v7 = 0;
      v5 = &byte_22CD811;
    }
    else
    {
      v5 = &byte_22CD811;
      v7 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 )
      {
        v8 = *(unsigned int *)(a1 + 24);
        v13 = *(unsigned int **)(v7 + 16);
        v9 = v8 + 1;
        v7 = *v13;
        v5 = (const char *)(v13 + 4);
        if ( v8 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 28) )
          goto LABEL_6;
LABEL_12:
        sub_22134E0(a1 + 16, a1 + 32, v9, 16);
        v8 = *(unsigned int *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
  v8 = *(unsigned int *)(a1 + 24);
  v9 = v8 + 1;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
    goto LABEL_12;
LABEL_6:
  v10 = (const char **)(*(_QWORD *)(a1 + 16) + 16 * v8);
  *v10 = v5;
  v10[1] = (const char *)v7;
  ++*(_DWORD *)(a1 + 24);
  return 1;
}

