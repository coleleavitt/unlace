__int64 __fastcall sub_811B30(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r13
  void *v6; // rbp
  __int64 v7; // rax
  unsigned int *v8; // rbx
  unsigned int *v9; // rbp
  unsigned int i; // r12d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  void *v14; // rdi
  int v15; // eax
  char v17; // al
  int v18; // eax
  void *v19; // [rsp+0h] [rbp-48h]
  void *v20; // [rsp+0h] [rbp-48h]
  void *v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v5 = a3 + 16;
  v6 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  sub_182CBA0(v6, v5);
  v7 = *(_QWORD *)(a1 + 600);
  *(_BYTE *)(a3 + 20) &= ~1u;
  *(_DWORD *)(a3 + 16) = 1;
  v8 = *(unsigned int **)(v7 + 8LL * a2);
  if ( !v8 )
    return 1;
  v9 = &v8[*(v8 - 1)];
  if ( v8 == v9 )
    return 1;
  for ( i = 0; ; ++i )
  {
    v11 = *v8;
    if ( (*(_DWORD *)(a1 + 700) ^ 1) == (_DWORD)v11 )
      goto LABEL_12;
    if ( *(_DWORD *)(a1 + 700) != (_DWORD)v11 )
      break;
LABEL_8:
    v13 = sub_811880(a1, i);
    v14 = qword_1C7F2C0;
    v15 = *(_DWORD *)v13;
    if ( !*(_DWORD *)v13 )
    {
      v17 = *(_BYTE *)(a3 + 4);
      if ( (v17 & 1) != 0 )
      {
        v21 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, a3, a3);
        v14 = v21;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = v17 & 0xFE;
      }
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
      {
        sub_182C690(v14, v5, v5);
        goto LABEL_12;
      }
      goto LABEL_22;
    }
    if ( !*(_DWORD *)a3 )
    {
      if ( (*(_BYTE *)(v13 + 4) & 1) != 0 )
      {
        v22 = v13;
        v20 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, a3, v13);
        v13 = v22;
        v14 = v20;
      }
      else
      {
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = v15;
      }
      if ( (*(_BYTE *)(v13 + 20) & 1) != 0 )
      {
        sub_182C690(v14, v5, v13 + 16);
      }
      else
      {
        v18 = *(_DWORD *)(v13 + 16);
        *(_BYTE *)(a3 + 20) &= ~1u;
        *(_DWORD *)(a3 + 16) = v18;
      }
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0
      && *(_DWORD *)(a3 + 16) == 1
      && (*(_BYTE *)(v13 + 20) & 1) == 0
      && *(_DWORD *)(v13 + 16) == 1 )
    {
      v19 = qword_1C7F2C0;
      sub_1831A80(qword_1C7F2C0, a3, v13, a3);
      sub_182CBA0(v19, v5);
      *(_DWORD *)(a3 + 16) = 1;
LABEL_22:
      *(_BYTE *)(a3 + 20) &= ~1u;
      goto LABEL_12;
    }
    sub_1851D20(qword_1C7F2C0, a3, v13, a3);
LABEL_12:
    if ( v9 == ++v8 )
      return 1;
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 3288LL) + 4 * v11);
  if ( v12 )
  {
    if ( v12 != 1 )
      goto LABEL_12;
    goto LABEL_8;
  }
  return 0;
}

