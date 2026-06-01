_QWORD *__fastcall sub_D58CA0(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rax
  char *v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  char *v8; // rsi
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // rax
  int v12; // ecx
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v20; // [rsp+8h] [rbp-30h]

  v4 = *((unsigned int *)a1 + 16);
  v5 = (char *)a1[7];
  v6 = v4 - 1;
  v4 *= 24;
  v7 = 3LL * (a2 & v6);
  v8 = &v5[v4];
  v9 = 8 * v7;
  v10 = &v5[v9];
  if ( v9 != v4 )
  {
    v11 = &v5[v9];
    do
    {
      v12 = *((_DWORD *)v11 + 1);
      if ( v12 == 2 )
      {
        if ( a2 == *(_DWORD *)v11 && a2 == *((_DWORD *)v11 + 2) )
          goto LABEL_8;
      }
      else if ( !v12 )
      {
        goto LABEL_22;
      }
      v11 += 24;
    }
    while ( v8 != v11 );
  }
  if ( v5 == v10 )
    goto LABEL_22;
  while ( 1 )
  {
    v14 = *((_DWORD *)v5 + 1);
    if ( v14 != 2 )
    {
      if ( !v14 )
        goto LABEL_22;
      goto LABEL_17;
    }
    if ( a2 == *(_DWORD *)v5 && a2 == *((_DWORD *)v5 + 2) )
      break;
LABEL_17:
    v5 += 24;
    if ( v10 == v5 )
      goto LABEL_22;
  }
  v11 = v5;
LABEL_8:
  if ( v8 != v11 )
  {
    while ( *((_DWORD *)v11 + 1) != 2 )
    {
      v11 += 24;
      if ( v8 == v11 )
        goto LABEL_22;
    }
    if ( v11 != v8 )
      return *((_QWORD **)v11 + 2);
  }
LABEL_22:
  v15 = (_QWORD *)sub_186B270(0x10u);
  LODWORD(v19) = a2;
  *v15 = 0;
  v16 = v15;
  v15[1] = 0;
  v20 = v15;
  sub_D81F20(a1 + 7, &v19);
  v17 = *a1;
  BYTE4(v19) &= 0xFCu;
  LODWORD(v19) = 2;
  v20 = nullptr;
  sub_18393F0(v17, &v19, a2, v16);
  v18 = *a1;
  v20 = nullptr;
  v19 = 0xFFFFFFFFLL;
  sub_1839610(v18, v16, &v19);
  return v16;
}

