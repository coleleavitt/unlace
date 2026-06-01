unsigned __int64 __fastcall sub_9A2160(__int64 a1)
{
  unsigned int *v2; // rbp
  unsigned int *v3; // r14
  int v4; // eax
  int v5; // eax
  void *v6; // rdi
  int v7; // eax
  int v8; // eax
  void *v9; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 result; // rax
  unsigned int *v17; // rdi
  size_t v18; // rdx
  void *v19; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int **)(a1 + 968);
  if ( !v2 )
    goto LABEL_19;
  v3 = &v2[*(v2 - 1)];
  if ( v3 == v2 )
    goto LABEL_18;
  do
  {
    while ( 1 )
    {
      v12 = *v2;
      v13 = qword_1C7F2C0;
      v14 = 96 * v12 + *(_QWORD *)(a1 + 736);
      v15 = *(_QWORD *)(a1 + 728) + 96 * v12;
      if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
        break;
      v4 = *(_DWORD *)v14;
      *(_BYTE *)(v15 + 4) &= ~1u;
      *(_DWORD *)v15 = v4;
      if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
        goto LABEL_12;
LABEL_5:
      v5 = *(_DWORD *)(v14 + 16);
      v6 = qword_1C7F2C0;
      *(_BYTE *)(v15 + 20) &= ~1u;
      *(_DWORD *)(v15 + 16) = v5;
      if ( (*(_BYTE *)(v14 + 36) & 1) != 0 )
        goto LABEL_13;
LABEL_6:
      v7 = *(_DWORD *)(v14 + 32);
      *(_BYTE *)(v15 + 36) &= ~1u;
      *(_DWORD *)(v15 + 32) = v7;
      if ( (*(_BYTE *)(v14 + 52) & 1) != 0 )
        goto LABEL_14;
LABEL_7:
      v8 = *(_DWORD *)(v14 + 48);
      v9 = qword_1C7F2C0;
      *(_BYTE *)(v15 + 52) &= ~1u;
      *(_DWORD *)(v15 + 48) = v8;
      if ( (*(_BYTE *)(v14 + 68) & 1) != 0 )
        goto LABEL_15;
LABEL_8:
      v10 = *(_DWORD *)(v14 + 64);
      *(_BYTE *)(v15 + 68) &= ~1u;
      *(_DWORD *)(v15 + 64) = v10;
      if ( (*(_BYTE *)(v14 + 84) & 1) != 0 )
        goto LABEL_16;
LABEL_9:
      v11 = *(_DWORD *)(v14 + 80);
      ++v2;
      *(_BYTE *)(v15 + 84) &= ~1u;
      *(_DWORD *)(v15 + 80) = v11;
      if ( v3 == v2 )
        goto LABEL_17;
    }
    v19 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, *(_QWORD *)(a1 + 728) + 96 * v12, 96 * v12 + *(_QWORD *)(a1 + 736));
    v13 = v19;
    if ( (*(_BYTE *)(v14 + 20) & 1) == 0 )
      goto LABEL_5;
LABEL_12:
    sub_182C690(v13, v15 + 16, v14 + 16);
    v6 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v14 + 36) & 1) == 0 )
      goto LABEL_6;
LABEL_13:
    sub_182C690(v6, v15 + 32, v14 + 32);
    if ( (*(_BYTE *)(v14 + 52) & 1) == 0 )
      goto LABEL_7;
LABEL_14:
    sub_182C690(v6, v15 + 48, v14 + 48);
    v9 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v14 + 68) & 1) == 0 )
      goto LABEL_8;
LABEL_15:
    sub_182C690(v9, v15 + 64, v14 + 64);
    if ( (*(_BYTE *)(v14 + 84) & 1) == 0 )
      goto LABEL_9;
LABEL_16:
    ++v2;
    sub_182C690(v9, v15 + 80, v14 + 80);
  }
  while ( v3 != v2 );
LABEL_17:
  v2 = *(unsigned int **)(a1 + 968);
  if ( v2 )
LABEL_18:
    *(v2 - 1) = 0;
LABEL_19:
  result = (unsigned int)(*(_DWORD *)(a1 + 976) + 1);
  *(_DWORD *)(a1 + 976) = result;
  if ( (_DWORD)result == -1 )
  {
    v17 = *(unsigned int **)(a1 + 984);
    if ( v17 )
    {
      v18 = 4LL * *(v17 - 1);
      if ( v18 )
        result = (unsigned __int64)memset(v17, 0, v18);
    }
    *(_DWORD *)(a1 + 976) = 0;
  }
  return result;
}

