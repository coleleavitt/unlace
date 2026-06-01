unsigned __int64 __fastcall sub_9952A0(__int64 a1)
{
  unsigned int *v2; // rax
  unsigned int *v3; // r12
  unsigned int *v4; // r14
  int v5; // eax
  int v6; // eax
  void *v7; // rdi
  int v8; // eax
  int v9; // eax
  void *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 result; // rax
  unsigned int *v15; // rdi
  size_t v16; // rdx
  void *v17; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int **)(a1 + 904);
  if ( !v2 )
    goto LABEL_15;
  v3 = &v2[*(v2 - 1)];
  if ( v3 == v2 )
    goto LABEL_14;
  v4 = *(unsigned int **)(a1 + 904);
  do
  {
    while ( 1 )
    {
      v10 = qword_1C7F2C0;
      v11 = (unsigned __int64)*v4 << 6;
      v12 = v11 + *(_QWORD *)(a1 + 672);
      v13 = *(_QWORD *)(a1 + 664) + v11;
      if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
        break;
      v5 = *(_DWORD *)v12;
      *(_BYTE *)(v13 + 4) &= ~1u;
      *(_DWORD *)v13 = v5;
      if ( (*(_BYTE *)(v12 + 20) & 1) != 0 )
        goto LABEL_10;
LABEL_5:
      v6 = *(_DWORD *)(v12 + 16);
      v7 = qword_1C7F2C0;
      *(_BYTE *)(v13 + 20) &= ~1u;
      *(_DWORD *)(v13 + 16) = v6;
      if ( (*(_BYTE *)(v12 + 36) & 1) != 0 )
        goto LABEL_11;
LABEL_6:
      v8 = *(_DWORD *)(v12 + 32);
      *(_BYTE *)(v13 + 36) &= ~1u;
      *(_DWORD *)(v13 + 32) = v8;
      if ( (*(_BYTE *)(v12 + 52) & 1) != 0 )
        goto LABEL_12;
LABEL_7:
      v9 = *(_DWORD *)(v12 + 48);
      ++v4;
      *(_BYTE *)(v13 + 52) &= ~1u;
      *(_DWORD *)(v13 + 48) = v9;
      if ( v3 == v4 )
        goto LABEL_13;
    }
    v17 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v13, v12);
    v10 = v17;
    if ( (*(_BYTE *)(v12 + 20) & 1) == 0 )
      goto LABEL_5;
LABEL_10:
    sub_182C690(v10, v13 + 16, v12 + 16);
    v7 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v12 + 36) & 1) == 0 )
      goto LABEL_6;
LABEL_11:
    sub_182C690(v7, v13 + 32, v12 + 32);
    if ( (*(_BYTE *)(v12 + 52) & 1) == 0 )
      goto LABEL_7;
LABEL_12:
    ++v4;
    sub_182C690(v7, v13 + 48, v12 + 48);
  }
  while ( v3 != v4 );
LABEL_13:
  v2 = *(unsigned int **)(a1 + 904);
  if ( v2 )
LABEL_14:
    *(v2 - 1) = 0;
LABEL_15:
  result = (unsigned int)(*(_DWORD *)(a1 + 912) + 1);
  *(_DWORD *)(a1 + 912) = result;
  if ( (_DWORD)result == -1 )
  {
    v15 = *(unsigned int **)(a1 + 920);
    if ( v15 )
    {
      v16 = 4LL * *(v15 - 1);
      if ( v16 )
        result = (unsigned __int64)memset(v15, 0, v16);
    }
    *(_DWORD *)(a1 + 912) = 0;
  }
  return result;
}

