void __fastcall sub_916860(_QWORD *a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  int *v5; // rax
  int v6; // esi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rdx
  __int64 v14; // rdx
  bool v15[25]; // [rsp+1h] [rbp-19h] BYREF

  if ( *((_WORD *)a2 + 2) )
    return;
  v3 = *((_QWORD *)a2 + 2);
  v4 = *(_QWORD *)(v3 + 24);
  if ( !v4 || *(_DWORD *)v4 != 1 || *(_DWORD *)(v4 + 4) )
    return;
  v5 = *(int **)(v4 + 8);
  if ( *((_BYTE *)v5 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v6 = *v5;
  v15[0] = *v5 != 0;
  if ( !v6 )
  {
    v8 = (_QWORD *)a1[2];
    if ( a2 == *(unsigned int **)(v8[13] + 864LL) )
      goto LABEL_10;
    v12 = v8[1104];
    goto LABEL_22;
  }
  v9 = (_QWORD *)a1[2];
  if ( a2 != *(unsigned int **)(v9[13] + 864LL) )
  {
    v10 = v9[1104];
    if ( !v10 )
      goto LABEL_11;
    v11 = *a2;
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) || *(_DWORD *)(v10 + 4 * v11) == 0x7FFFFFFF )
      goto LABEL_11;
  }
  if ( (unsigned int)sub_8E80A0(v9, a2) != 1 )
    return;
  if ( v15[0] )
    goto LABEL_11;
  v8 = (_QWORD *)a1[2];
  if ( a2 != *(unsigned int **)(v8[13] + 864LL) )
  {
    v12 = v8[1104];
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_24;
    v3 = *((_QWORD *)a2 + 2);
LABEL_22:
    v13 = *(_DWORD **)(v3 + 24);
    if ( v13 && !*v13 && v13[1] == 8 )
    {
      if ( !v12 )
        return;
      v14 = **((unsigned int **)a2 + 4);
      if ( (unsigned int)v14 >= *(_DWORD *)(v12 - 4) )
        return;
      goto LABEL_26;
    }
LABEL_24:
    if ( !v12 )
      return;
    v14 = *a2;
    if ( (unsigned int)v14 >= *(_DWORD *)(v12 - 4) )
      return;
LABEL_26:
    if ( *(_DWORD *)(v12 + 4 * v14) == 0x7FFFFFFF )
      return;
  }
LABEL_10:
  if ( (unsigned int)sub_8E80A0(v8, a2) == -1 )
LABEL_11:
    sub_15D2F00(a1[1], a2, v15, a1[8]);
}

