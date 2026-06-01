char __fastcall sub_CB2B60(__int64 a1, __int64 *a2, __int64 *a3, char a4)
{
  int *v7; // rax
  unsigned int v8; // r13d
  unsigned int *v9; // rax
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // esi
  char v13; // dl
  __int64 v14; // rdx
  unsigned int v15; // r13d
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  unsigned int v23; // esi
  char v24; // cl
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rdi

  v7 = *(int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
  if ( *((_BYTE *)v7 + 8)
    || (v8 = *v7, v9 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a3) + 24) + 8LL), *((_BYTE *)v9 + 8)) )
  {
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  }
  v12 = *v9;
  if ( *v9 < v8 && a4 )
  {
    v14 = *a3;
    v15 = v8 - v12;
    v16 = 1;
    goto LABEL_8;
  }
  v13 = a4 ^ 1;
  if ( v12 < v8 && v13 )
  {
    v14 = *a3;
    v15 = v8 - v12;
    v16 = 0;
LABEL_8:
    v17 = sub_CB29F0(a1, v15, v14, v16, v10, v11);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v19 = *a3;
    if ( *a3 )
    {
      v20 = a3[1];
      v21 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v21 )
        LOBYTE(v17) = sub_15D7BC0(v20, v19);
    }
    *a3 = v18;
    return v17;
  }
  LOBYTE(v17) = v8 < v12;
  if ( v8 < v12 && a4 )
  {
    v22 = *a2;
    v23 = v12 - v8;
    v24 = 1;
  }
  else
  {
    if ( !v13 || v8 >= v12 )
      return v17;
    v22 = *a2;
    v23 = v12 - v8;
    v24 = 0;
  }
  v17 = sub_CB29F0(a1, v23, v22, v24, v10, v11);
  v25 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v26 = *a2;
  if ( *a2 )
  {
    v27 = a2[1];
    v21 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v21 )
      LOBYTE(v17) = sub_15D7BC0(v27, v26);
  }
  *a2 = v25;
  return v17;
}

