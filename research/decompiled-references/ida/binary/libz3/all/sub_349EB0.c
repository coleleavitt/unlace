__int64 __fastcall sub_349EB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // esi
  char *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // r9
  char *v13; // rdi
  char *v14; // rbx
  __int64 v15; // rax
  void *v16; // rbx
  __int64 v17; // rax
  void *v18; // r13
  void *v19; // r12
  int v20; // eax
  _QWORD v22[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v23[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a3 + 12);
  v22[0] = 0;
  v7 = *(char **)(v5 + 216);
  v22[1] = 0;
  v8 = *(unsigned int *)(v5 + 224);
  v23[0] = 1;
  v23[1] = 0;
  v9 = v8 - 1;
  v8 *= 40;
  v10 = 5LL * (v6 & v9);
  v11 = &v7[v8];
  v12 = 8 * v10;
  v13 = &v7[v12];
  if ( v12 == v8 )
  {
LABEL_9:
    while ( v13 != v7 )
    {
      v17 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 > 1u )
      {
        if ( *(_DWORD *)(v17 + 12) == v6 && a3 == v17 )
        {
          v14 = v7;
          goto LABEL_18;
        }
      }
      else if ( !v17 )
      {
        break;
      }
      v7 += 40;
    }
LABEL_8:
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v22);
    sub_182CBA0(v16, v23);
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    BUG();
  }
  v14 = &v7[v12];
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 > 1u )
      break;
    if ( !v15 )
      goto LABEL_8;
LABEL_5:
    v14 += 40;
    if ( v11 == v14 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v15 + 12) != v6 || a3 != v15 )
    goto LABEL_5;
LABEL_18:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v18, v23);
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v19 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v14[12] & 1) != 0 )
  {
    sub_182C690(v19, a1, v14 + 8);
    if ( (v14[28] & 1) != 0 )
      goto LABEL_22;
LABEL_20:
    v20 = *((_DWORD *)v14 + 6);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v20;
    return a1;
  }
  else
  {
    *(_DWORD *)a1 = *((_DWORD *)v14 + 2);
    if ( (v14[28] & 1) == 0 )
      goto LABEL_20;
LABEL_22:
    sub_182C690(v19, a1 + 16, v14 + 24);
    return a1;
  }
}

