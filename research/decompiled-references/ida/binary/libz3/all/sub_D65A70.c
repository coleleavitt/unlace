__int64 __fastcall sub_D65A70(_QWORD *a1, __int64 a2, __int64 *a3)
{
  int *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // r15
  int v8; // r8d
  char *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  char *v12; // rsi
  __int64 v13; // rcx
  char *v14; // rdi
  char *v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax
  void *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 result; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  _QWORD *v30; // [rsp+0h] [rbp-78h]
  void *v31; // [rsp+0h] [rbp-78h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  _QWORD *v33; // [rsp+10h] [rbp-68h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v35; // [rsp+28h] [rbp-50h]
  _QWORD v36[9]; // [rsp+30h] [rbp-48h] BYREF

  v30 = a1 + 29;
  v5 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v5 + 8) )
    sub_DBF6E(0);
  v6 = *v5;
  v7 = a1[55];
  v8 = *v5 - 1;
  v9 = *(char **)(v7 + 816);
  v32 = a1[1];
  v10 = *(unsigned int *)(v7 + 824);
  v11 = v10 - 1;
  v10 *= 24;
  v12 = &v9[v10];
  v13 = 24LL * (v8 & v11);
  v14 = &v9[v13];
  if ( v13 != v10 )
  {
    v15 = &v9[v13];
    do
    {
      v16 = *((_DWORD *)v15 + 1);
      if ( v16 == 2 )
      {
        if ( v8 == *(_DWORD *)v15 && v8 == *((_DWORD *)v15 + 2) )
          goto LABEL_9;
      }
      else if ( !v16 )
      {
        goto LABEL_37;
      }
      v15 += 24;
    }
    while ( v12 != v15 );
  }
  if ( v9 == v14 )
    goto LABEL_37;
  while ( 1 )
  {
    v26 = *((_DWORD *)v9 + 1);
    if ( v26 != 2 )
    {
      if ( !v26 )
        goto LABEL_37;
      goto LABEL_30;
    }
    if ( v8 == *(_DWORD *)v9 && v8 == *((_DWORD *)v9 + 2) )
      break;
LABEL_30:
    v9 += 24;
    if ( v14 == v9 )
      goto LABEL_37;
  }
  v15 = v9;
LABEL_9:
  if ( v15 != v12 )
  {
    while ( *((_DWORD *)v15 + 1) != 2 )
    {
      v15 += 24;
      if ( v12 == v15 )
        goto LABEL_37;
    }
    if ( v12 != v15 )
    {
      v17 = *((_QWORD **)v15 + 2);
      goto LABEL_15;
    }
  }
LABEL_37:
  v27 = (_QWORD *)sub_186B270(0x10u);
  *v27 = 0;
  v27[1] = 0;
  LODWORD(v34) = v6 - 1;
  v35 = v27;
  v33 = v27;
  sub_D81F20(v7 + 816, &v34);
  v28 = *(_QWORD *)(v7 + 760);
  BYTE4(v34) &= 0xFCu;
  LODWORD(v34) = 2;
  v35 = nullptr;
  sub_18393F0(v28, &v34, v6 - 1, v33);
  v29 = *(_QWORD *)(v7 + 760);
  v34 = 0xFFFFFFFFLL;
  v35 = nullptr;
  sub_1839610(v29, v33, &v34);
  v17 = v33;
LABEL_15:
  v34 = 0;
  v35 = nullptr;
  v36[0] = 1;
  v18 = qword_1C7F2C0;
  v36[1] = 0;
  if ( (*((_BYTE *)v17 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v34, v17);
  else
    LODWORD(v34) = *(_DWORD *)v17;
  sub_182CBA0(v18, v36);
  BYTE4(v36[0]) &= ~1u;
  LODWORD(v36[0]) = 1;
  v19 = sub_1674520(v30, &v34, v6);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v34);
  sub_182CBA0(v31, v36);
  result = sub_15E1B70(a1[30]);
  v22 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v23 = *a3;
  if ( *a3 )
  {
    v24 = a3[1];
    v25 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v24, v23);
  }
  *a3 = v22;
  if ( v20 )
  {
    v25 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v25 )
      return sub_15D7BC0(v32, v20);
  }
  return result;
}

