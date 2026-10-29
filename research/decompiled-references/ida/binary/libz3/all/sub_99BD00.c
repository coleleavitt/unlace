unsigned __int64 __fastcall sub_99BD00(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int *v3; // rbp
  int v4; // eax
  int v5; // eax
  void *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 result; // rax
  unsigned int *v11; // rdi
  size_t v12; // rdx
  void *v13; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int **)(a1 + 840);
  if ( !v2 )
    goto LABEL_11;
  v3 = &v2[*(v2 - 1)];
  if ( v3 == v2 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v6 = qword_1C7F2C0;
      v7 = 32LL * *v2;
      v8 = v7 + *(_QWORD *)(a1 + 608);
      v9 = *(_QWORD *)(a1 + 600) + v7;
      if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
        break;
      v4 = *(_DWORD *)v8;
      *(_BYTE *)(v9 + 4) &= ~1u;
      *(_DWORD *)v9 = v4;
      if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
        goto LABEL_8;
LABEL_5:
      v5 = *(_DWORD *)(v8 + 16);
      ++v2;
      *(_BYTE *)(v9 + 20) &= ~1u;
      *(_DWORD *)(v9 + 16) = v5;
      if ( v3 == v2 )
        goto LABEL_9;
    }
    v13 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v9, v8);
    v6 = v13;
    if ( (*(_BYTE *)(v8 + 20) & 1) == 0 )
      goto LABEL_5;
LABEL_8:
    ++v2;
    sub_182C690(v6, v9 + 16, v8 + 16);
  }
  while ( v3 != v2 );
LABEL_9:
  v2 = *(unsigned int **)(a1 + 840);
  if ( v2 )
LABEL_10:
    *(v2 - 1) = 0;
LABEL_11:
  result = (unsigned int)(*(_DWORD *)(a1 + 848) + 1);
  *(_DWORD *)(a1 + 848) = result;
  if ( (_DWORD)result == -1 )
  {
    v11 = *(unsigned int **)(a1 + 856);
    if ( v11 )
    {
      v12 = 4LL * *(v11 - 1);
      if ( v12 )
        result = (unsigned __int64)memset(v11, 0, v12);
    }
    *(_DWORD *)(a1 + 848) = 0;
  }
  return result;
}

