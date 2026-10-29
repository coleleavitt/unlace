_QWORD *__fastcall sub_256410(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rbx
  __int64 v5; // r12
  const char *v6; // rsi
  const char *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi

  v2 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( !v4 )
  {
LABEL_18:
    if ( v2 == *(_QWORD **)(a1 + 24) )
      return nullptr;
    v11 = std::_Rb_tree_decrement(v2);
    v10 = *(_QWORD *)(v11 + 40);
    v2 = (_QWORD *)v11;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_26;
LABEL_20:
    v12 = *(const char **)a2;
    v13 = &s1;
    if ( v10 )
      goto LABEL_21;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a2 + 8);
  do
  {
    v10 = v4[5];
    if ( v10 )
    {
      v6 = (const char *)v4[4];
      v2 = v4;
      v7 = &s1;
      if ( !v5 )
        goto LABEL_5;
LABEL_4:
      v7 = *(const char **)a2;
      v2 = v4;
      goto LABEL_5;
    }
    v6 = &s1;
    if ( v5 )
      goto LABEL_4;
    v2 = (_QWORD *)v4[3];
    if ( !v2 )
    {
LABEL_14:
      if ( !*(_QWORD *)(a2 + 8) )
        return v4;
      v12 = *(const char **)a2;
      v2 = v4;
      v13 = &s1;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v10 = v2[5];
      if ( v10 )
        break;
      v4 = v2;
      v2 = (_QWORD *)v2[3];
      if ( !v2 )
        goto LABEL_14;
    }
    v6 = (const char *)v2[4];
    v7 = &s1;
LABEL_5:
    v8 = strcmp(v7, v6);
    v4 = (_QWORD *)v2[3];
    if ( v8 < 0 )
      v4 = (_QWORD *)v2[2];
    v9 = (v8 >> 31) & 1;
  }
  while ( v4 );
  if ( (_BYTE)v9 )
    goto LABEL_18;
  if ( *(_QWORD *)(a2 + 8) )
    goto LABEL_20;
LABEL_26:
  v12 = &s1;
  if ( !v10 )
    return v2;
LABEL_21:
  v13 = (const char *)v2[4];
LABEL_22:
  if ( strcmp(v13, v12) < 0 )
    return nullptr;
  return v2;
}
