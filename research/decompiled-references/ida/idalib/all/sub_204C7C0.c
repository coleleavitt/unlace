void __fastcall sub_204C7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  int *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int *i; // rbx
  __int64 v12; // rax
  int v14; // eax
  _QWORD *v15; // rsi
  int *v16; // rdi

  if ( *(_QWORD *)(a1 + 72) != a2 )
  {
    v14 = -1;
    if ( a2 )
    {
      v14 = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a2 + 88) = v14 + 1;
    }
    *(_DWORD *)(a1 + 40) = v14;
  }
  v15 = (_QWORD *)(a1 + 72);
  v16 = (int *)(a1 + 48);
  if ( v16 == &dword_30 )
  {
    *v15 = a2;
    return;
  }
  v2 = *((_QWORD *)v16 + 3);
  if ( !v2 )
  {
    *v15 = a2;
    v12 = *((_QWORD *)v16 + 3);
    if ( !v12 )
      return;
    v4 = *(_QWORD *)(v12 + 112);
    if ( !v4 || v16 == *(int **)v16 )
      return;
    goto LABEL_17;
  }
  v3 = *(_QWORD *)(v2 + 112);
  *v15 = a2;
  v4 = *((_QWORD *)v16 + 3);
  if ( v4 )
  {
    v4 = *(_QWORD *)(v4 + 112);
    if ( v3 == v4 || *(int **)v16 == v16 )
      return;
    if ( !v3 )
      goto LABEL_16;
  }
  else if ( !v3 || v16 == *(int **)v16 )
  {
    return;
  }
  v5 = *((int **)v16 + 1);
  if ( v5 == v16 )
    return;
  do
  {
    if ( !v5 )
      BUG();
    if ( (*((_BYTE *)v5 - 17) & 0x10) != 0 )
    {
      v6 = sub_20CBB10(v5 - 6);
      sub_20CDE20(v3, v6, v7, v8, v9, v10);
    }
    v5 = *((int **)v5 + 1);
  }
  while ( v5 != v16 );
LABEL_16:
  if ( !v4 )
    return;
LABEL_17:
  for ( i = *((int **)v16 + 1); v16 != i; i = *((int **)i + 1) )
  {
    if ( !i )
      BUG();
    if ( (*((_BYTE *)i - 17) & 0x10) != 0 )
      sub_20CE180(v4, i - 6);
  }
}
