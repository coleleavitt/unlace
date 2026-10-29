/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8063DA0
// Address: 0x08063DA0

//----- (08063DA0) --------------------------------------------------------
int __cdecl sub_8063DA0(int a1, int a2)
{
  int v2; // esi
  char v3; // dl
  int v4; // eax
  _DWORD *v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  bool v12; // al
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // ebp
  int v19; // eax
  void *v20; // eax
  _DWORD *v21; // [esp-18h] [ebp-4Ch]
  _DWORD *v22; // [esp+0h] [ebp-34h]
  _DWORD *v23; // [esp+0h] [ebp-34h]
  _DWORD *v24; // [esp+4h] [ebp-30h]
  _DWORD *v25; // [esp+4h] [ebp-30h]
  int v26; // [esp+8h] [ebp-2Ch]
  _DWORD *v27; // [esp+Ch] [ebp-28h]
  int v28; // [esp+10h] [ebp-24h]
  _DWORD *v29; // [esp+14h] [ebp-20h]

  v2 = a2;
  if ( *(_DWORD *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 768) = 1;
    goto LABEL_22;
  }
  v3 = sub_805A260((_DWORD *)a1);
  v4 = *(_DWORD *)(a1 + 756);
  if ( v3 )
  {
    *(_BYTE *)(a1 + 768) = 0;
    if ( v4 && !*(_DWORD *)(a1 + 764) )
      goto LABEL_5;
LABEL_22:
    if ( a2 )
      return sub_8062200(a1, v2, 0) & 1;
    return sub_8062200(a1, 0, 1) & 1;
  }
  *(_BYTE *)(a1 + 768) = 1;
  if ( !v4 || *(_DWORD *)(a1 + 764) )
    goto LABEL_22;
LABEL_5:
  v28 = a1 + 740;
  if ( a1 + 740 == *(_DWORD *)(a1 + 748) )
    goto LABEL_19;
  v5 = (_DWORD *)a1;
  v26 = *(_DWORD *)(a1 + 748);
  v6 = (_DWORD *)(a1 + 268);
  do
  {
    v7 = (_DWORD *)v5[68];
    v8 = *(_DWORD *)(v26 + 16);
    v27 = v7;
    if ( v7 )
    {
      v24 = v6;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = v7[4];
          if ( v9 >= v8 )
            break;
          v7 = (_DWORD *)v7[3];
          if ( !v7 )
            goto LABEL_13;
        }
        v10 = (_DWORD *)v7[2];
        if ( v8 >= v9 )
          break;
        v6 = v7;
        v7 = (_DWORD *)v7[2];
        if ( !v10 )
        {
LABEL_13:
          v11 = v6;
          v22 = v6;
          v6 = v24;
          v12 = v24 == v11;
          goto LABEL_14;
        }
      }
      v14 = (_DWORD *)v7[3];
      v23 = v6;
      v6 = v24;
      if ( v14 )
      {
        v25 = v7;
        v29 = (_DWORD *)v7[2];
        do
        {
          while ( 1 )
          {
            v15 = v14[2];
            v16 = v14[3];
            if ( v8 < v14[4] )
              break;
            v14 = (_DWORD *)v14[3];
            if ( !v16 )
              goto LABEL_32;
          }
          v23 = v14;
          v14 = (_DWORD *)v14[2];
        }
        while ( v15 );
LABEL_32:
        v7 = v25;
        v10 = v29;
      }
      if ( v10 )
      {
        a1 = (int)v5;
        do
        {
          while ( 1 )
          {
            v17 = v10[2];
            v18 = v10[3];
            if ( v10[4] >= v8 )
              break;
            v10 = (_DWORD *)v10[3];
            if ( !v18 )
              goto LABEL_38;
          }
          v7 = v10;
          v10 = (_DWORD *)v10[2];
        }
        while ( v17 );
LABEL_38:
        v5 = (_DWORD *)a1;
      }
      if ( (_DWORD *)v5[69] == v7 && v23 == v6 )
      {
LABEL_16:
        sub_80566C0(v27);
        v5[69] = v6;
        v5[68] = 0;
        v5[70] = v6;
        v5[71] = 0;
        goto LABEL_17;
      }
      for ( ; v23 != v7; --v5[71] )
      {
        v19 = std::_Rb_tree_increment(v7);
        v21 = v7;
        v7 = (_DWORD *)v19;
        v20 = (void *)std::_Rb_tree_rebalance_for_erase(v21, v6);
        operator delete(v20, 0x28u);
      }
    }
    else
    {
      v22 = v6;
      v12 = 1;
LABEL_14:
      if ( (_DWORD *)v5[69] == v22 && v12 )
        goto LABEL_16;
    }
LABEL_17:
    v26 = std::_Rb_tree_increment(v26);
  }
  while ( v28 != v26 );
  v2 = a2;
LABEL_19:
  sub_8057480(*(_DWORD **)(a1 + 744));
  *(_DWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 756) = 0;
  *(_DWORD *)(a1 + 748) = v28;
  *(_DWORD *)(a1 + 752) = v28;
  if ( v2 )
    return sub_8062200(a1, v2, 0) & 1;
  return sub_8062200(a1, 0, 1) & 1;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
