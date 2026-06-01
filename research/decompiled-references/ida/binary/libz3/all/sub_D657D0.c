__int64 __fastcall sub_D657D0(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // rdx
  unsigned int v10; // ecx
  char *v11; // rsi
  __int64 v12; // rcx
  char *v13; // rdi
  char *v14; // rax
  int v15; // ecx
  _QWORD *v16; // rax
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
  _QWORD *v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v32; // [rsp+18h] [rbp-50h]
  _QWORD v33[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2 - 1;
  v5 = a1 + 232;
  v7 = *(_QWORD *)(a1 + 496);
  v8 = *(unsigned int *)(v7 + 800);
  v9 = *(char **)(v7 + 792);
  v10 = v8 - 1;
  v8 *= 24;
  v11 = &v9[v8];
  v12 = 24LL * (v3 & v10);
  v13 = &v9[v12];
  if ( v12 != v8 )
  {
    v14 = &v9[v12];
    do
    {
      v15 = *((_DWORD *)v14 + 1);
      if ( v15 == 2 )
      {
        if ( v3 == *(_DWORD *)v14 && v3 == *((_DWORD *)v14 + 2) )
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
  if ( v9 == v13 )
    goto LABEL_31;
  while ( 1 )
  {
    v25 = *((_DWORD *)v9 + 1);
    if ( v25 != 2 )
    {
      if ( !v25 )
        goto LABEL_31;
      goto LABEL_25;
    }
    if ( v3 == *(_DWORD *)v9 && v3 == *((_DWORD *)v9 + 2) )
      break;
LABEL_25:
    v9 += 24;
    if ( v13 == v9 )
      goto LABEL_31;
  }
  v14 = v9;
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
  LODWORD(v31) = v3;
  *v26 = 0;
  v26[1] = 0;
  v32 = v26;
  v30 = v26;
  sub_D81F20(v7 + 792, &v31);
  v27 = *(_QWORD *)(v7 + 736);
  BYTE4(v31) &= 0xFCu;
  LODWORD(v31) = 2;
  v32 = nullptr;
  sub_18393F0(v27, &v31, v3, v30);
  v28 = *(_QWORD *)(v7 + 736);
  v31 = 0xFFFFFFFFLL;
  v32 = nullptr;
  sub_1839610(v28, v30, &v31);
  v16 = v30;
LABEL_14:
  v31 = 0;
  v32 = nullptr;
  v33[0] = 1;
  v17 = qword_1C7F2C0;
  v33[1] = 0;
  if ( (*((_BYTE *)v16 + 4) & 1) != 0 )
  {
    v29 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v31, v16);
    v17 = v29;
  }
  else
  {
    LODWORD(v31) = *(_DWORD *)v16;
  }
  sub_182CBA0(v17, v33);
  BYTE4(v33[0]) &= ~1u;
  LODWORD(v33[0]) = 1;
  v18 = sub_1674520(v5, &v31, a2);
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
  sub_182CBA0(qword_1C7F2C0, &v31);
  return sub_182CBA0(v23, v33);
}

