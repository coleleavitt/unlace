__int64 __fastcall sub_D5B220(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  char *v11; // rsi
  __int64 v12; // rcx
  char *v13; // rdi
  char *v14; // rax
  int v15; // ecx
  _QWORD *v16; // r15
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v23; // rbx
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  void *v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v31; // [rsp+18h] [rbp-50h]
  _QWORD v32[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a1 + 232;
  v6 = *(_QWORD *)(a1 + 440);
  v7 = *(unsigned int *)(v6 + 824);
  v8 = *(char **)(v6 + 816);
  v9 = v7 - 1;
  v7 *= 24;
  v10 = 3LL * (a2 & v9);
  v11 = &v8[v7];
  v12 = 8 * v10;
  v13 = &v8[v12];
  if ( v12 != v7 )
  {
    v14 = &v8[v12];
    do
    {
      v15 = *((_DWORD *)v14 + 1);
      if ( v15 == 2 )
      {
        if ( a2 == *(_DWORD *)v14 && a2 == *((_DWORD *)v14 + 2) )
          goto LABEL_8;
      }
      else if ( !v15 )
      {
        goto LABEL_31;
      }
      v14 += 24;
    }
    while ( v11 != v14 );
  }
  if ( v8 == v13 )
    goto LABEL_31;
  while ( 1 )
  {
    v25 = *((_DWORD *)v8 + 1);
    if ( v25 != 2 )
    {
      if ( !v25 )
        goto LABEL_31;
      goto LABEL_25;
    }
    if ( a2 == *(_DWORD *)v8 && a2 == *((_DWORD *)v8 + 2) )
      break;
LABEL_25:
    v8 += 24;
    if ( v13 == v8 )
      goto LABEL_31;
  }
  v14 = v8;
LABEL_8:
  if ( v11 != v14 )
  {
    while ( *((_DWORD *)v14 + 1) != 2 )
    {
      v14 += 24;
      if ( v11 == v14 )
        goto LABEL_31;
    }
    if ( v11 != v14 )
    {
      v16 = *((_QWORD **)v14 + 2);
      goto LABEL_14;
    }
  }
LABEL_31:
  v26 = (_QWORD *)sub_186B270(0x10u);
  LODWORD(v30) = a2;
  *v26 = 0;
  v16 = v26;
  v26[1] = 0;
  v31 = v26;
  sub_D81F20(v6 + 816, &v30);
  v27 = *(_QWORD *)(v6 + 760);
  BYTE4(v30) &= 0xFCu;
  LODWORD(v30) = 2;
  v31 = nullptr;
  sub_18393F0(v27, &v30, a2, v16);
  v28 = *(_QWORD *)(v6 + 760);
  v30 = 0xFFFFFFFFLL;
  v31 = nullptr;
  sub_1839610(v28, v16, &v30);
LABEL_14:
  v30 = 0;
  v31 = nullptr;
  v32[0] = 1;
  v17 = qword_1C7F2C0;
  v32[1] = 0;
  if ( (*((_BYTE *)v16 + 4) & 1) != 0 )
  {
    v29 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v30, v16);
    v17 = v29;
  }
  else
  {
    LODWORD(v30) = *(_DWORD *)v16;
  }
  sub_182CBA0(v17, v32);
  BYTE4(v32[0]) &= ~1u;
  LODWORD(v32[0]) = 1;
  v18 = sub_1674520(v5, &v30, a2);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = *a3;
  if ( *a3 )
  {
    v21 = a3[1];
    if ( (*(_DWORD *)(v20 + 8))-- == 1 )
      sub_15D7BC0(v21, v20);
  }
  *a3 = v19;
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v30);
  return sub_182CBA0(v23, v32);
}

