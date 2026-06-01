__int64 __fastcall sub_447F40(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  const char *v6; // rsi
  const char *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r15
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  __int64 v16; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    v4 = a1 + 8;
    goto LABEL_25;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = *(_QWORD *)(v4 + 40);
    if ( v11 )
      break;
    v6 = &s1;
    if ( v5 )
      goto LABEL_4;
LABEL_6:
    LOBYTE(v9) = *(_DWORD *)(a2 + 24) < *(_DWORD *)(v4 + 56);
    v10 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(a2 + 24) < *(_DWORD *)(v4 + 56) )
      v10 = *(_QWORD *)(v4 + 16);
    if ( !v10 )
      goto LABEL_16;
LABEL_9:
    v4 = v10;
  }
  v6 = *(const char **)(v4 + 32);
  v7 = &s1;
  if ( !v5 )
    goto LABEL_5;
LABEL_4:
  v7 = *(const char **)a2;
LABEL_5:
  v8 = strcmp(v7, v6);
  if ( !v8 )
    goto LABEL_6;
  v9 = v8 >> 31;
  v10 = *(_QWORD *)(v4 + 24);
  if ( (_BYTE)v9 )
    v10 = *(_QWORD *)(v4 + 16);
  if ( v10 )
    goto LABEL_9;
LABEL_16:
  if ( (_BYTE)v9 )
  {
LABEL_25:
    if ( v4 == *(_QWORD *)(a1 + 24) )
      return 0;
    v16 = std::_Rb_tree_decrement(v4);
    v11 = *(_QWORD *)(v16 + 40);
    v4 = v16;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_27;
LABEL_18:
    v12 = *(const char **)a2;
    v13 = &s1;
    if ( v11 )
      goto LABEL_19;
    goto LABEL_20;
  }
  if ( *(_QWORD *)(a2 + 8) )
    goto LABEL_18;
LABEL_27:
  v12 = &s1;
  if ( !v11 )
  {
    if ( *(_DWORD *)(v4 + 56) >= *(_DWORD *)(a2 + 24) )
      return v4;
    return 0;
  }
LABEL_19:
  v13 = *(const char **)(v4 + 32);
LABEL_20:
  v14 = strcmp(v13, v12);
  if ( v14 )
  {
    if ( v14 >= 0 )
      return v4;
    return 0;
  }
  if ( *(_DWORD *)(v4 + 56) < *(_DWORD *)(a2 + 24) )
    return 0;
  return v4;
}
