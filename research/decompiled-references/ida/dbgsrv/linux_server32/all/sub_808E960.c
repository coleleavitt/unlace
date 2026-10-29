/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808E960
// Address: 0x0808E960

//----- (0808E960) --------------------------------------------------------
char *__cdecl sub_808E960(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  _DWORD *v4; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  const char *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  const char *v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebp
  int v16; // eax
  _DWORD *v17; // ebp
  void *v18; // edx
  int v19; // eax
  const char *v21; // ebp
  const char *v22; // esi
  int v23; // eax
  bool v24; // al
  _DWORD *v25; // [esp+0h] [ebp-4Ch]
  _DWORD *v26; // [esp+18h] [ebp-34h]
  _DWORD *v27; // [esp+1Ch] [ebp-30h]
  char *s1; // [esp+20h] [ebp-2Ch]
  char *s1a; // [esp+20h] [ebp-2Ch]
  char *s1b; // [esp+20h] [ebp-2Ch]
  _DWORD *v31; // [esp+24h] [ebp-28h]
  _DWORD *v32; // [esp+24h] [ebp-28h]
  _DWORD *v33; // [esp+2Ch] [ebp-20h]

  v27 = a1 + 1;
  v33 = (_DWORD *)a1[2];
  if ( !v33 )
  {
    v26 = a1 + 1;
    v24 = 1;
LABEL_39:
    v15 = a1[5];
    if ( (_DWORD *)a1[3] == v26 && v24 )
      goto LABEL_41;
    return nullptr;
  }
  v26 = a1 + 1;
  s1 = *(char **)(a2 + 4);
  v2 = (_DWORD *)a1[2];
  while ( 1 )
  {
    v3 = v2[5];
    if ( s1 )
      break;
    if ( !v3 )
    {
      v4 = (_DWORD *)v2[2];
      v5 = v2;
      s1a = (char *)&dword_80DDFD8;
      goto LABEL_6;
    }
    v32 = v2;
    v21 = (const char *)&dword_80DDFD8;
LABEL_34:
    v22 = (const char *)v2[4];
    if ( strcmp(v22, v21) < 0 )
    {
      v2 = (_DWORD *)v2[3];
    }
    else
    {
      v23 = strcmp(v21, v22);
      v2 = (_DWORD *)v2[2];
      if ( v23 >= 0 )
      {
        s1a = (char *)v21;
        v5 = v32;
        v4 = v2;
        goto LABEL_6;
      }
      v26 = v32;
    }
    if ( !v2 )
    {
LABEL_38:
      v24 = v27 == v26;
      goto LABEL_39;
    }
  }
  v21 = *(const char **)a2;
  if ( v3 )
  {
LABEL_33:
    v32 = v2;
    goto LABEL_34;
  }
  while ( **(_BYTE **)a2 )
  {
    v2 = (_DWORD *)v2[3];
    if ( !v2 )
      goto LABEL_38;
    if ( v2[5] )
      goto LABEL_33;
  }
  s1a = *(char **)a2;
  v5 = v2;
  v4 = (_DWORD *)v2[2];
LABEL_6:
  v6 = (_DWORD *)v5[3];
  if ( v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = (const char *)&dword_80DDFD8;
        if ( v6[5] )
          v7 = (const char *)v6[4];
        v8 = strcmp(s1a, v7);
        v9 = v6[2];
        v10 = v6[3];
        if ( v8 < 0 )
          break;
        v6 = (_DWORD *)v6[3];
        if ( !v10 )
          goto LABEL_13;
      }
      v26 = v6;
      v6 = (_DWORD *)v6[2];
    }
    while ( v9 );
  }
LABEL_13:
  if ( v4 )
  {
    v31 = v5;
    do
    {
      while ( 1 )
      {
        v11 = (const char *)&dword_80DDFD8;
        if ( v4[5] )
          v11 = (const char *)v4[4];
        v12 = strcmp(v11, s1a);
        v13 = v4[2];
        v14 = v4[3];
        if ( v12 < 0 )
          break;
        v31 = v4;
        v4 = (_DWORD *)v4[2];
        if ( !v13 )
          goto LABEL_20;
      }
      v4 = (_DWORD *)v4[3];
    }
    while ( v14 );
LABEL_20:
    v5 = v31;
  }
  v15 = a1[5];
  if ( (_DWORD *)a1[3] == v5 && v27 == v26 )
  {
LABEL_41:
    sub_808E370(v33);
    a1[2] = 0;
    a1[5] = 0;
    a1[3] = v27;
    a1[4] = v27;
  }
  else
  {
    if ( v5 == v26 )
      return nullptr;
    s1b = (char *)a1[5];
    do
    {
      v16 = std::_Rb_tree_increment(v5);
      v25 = v5;
      v5 = (_DWORD *)v16;
      v17 = (_DWORD *)std::_Rb_tree_rebalance_for_erase(v25, v27);
      sub_8089430((int)(v17 + 7));
      v18 = (void *)v17[4];
      if ( v18 )
      {
        v17[5] = 0;
        sub_80CF780(v18);
      }
      operator delete(v17, 0x30u);
      v19 = a1[5] - 1;
      a1[5] = v19;
    }
    while ( v5 != v26 );
    return &s1b[-v19];
  }
  return (char *)v15;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
