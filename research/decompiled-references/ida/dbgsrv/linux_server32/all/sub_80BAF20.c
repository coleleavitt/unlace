/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BAF20
// Address: 0x080BAF20

//----- (080BAF20) --------------------------------------------------------
int __cdecl sub_80BAF20(int a1, unsigned int a2, int a3)
{
  int v3; // edx
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  _BOOL4 v11; // edx
  _DWORD *v13; // [esp+0h] [ebp-4Ch]
  _DWORD *v14; // [esp+Ch] [ebp-40h]
  int v15; // [esp+10h] [ebp-3Ch]
  int v16; // [esp+14h] [ebp-38h]
  unsigned int v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+14h] [ebp-38h]
  _DWORD v19[5]; // [esp+18h] [ebp-34h] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-20h]

  v20 = __readgsdword(0x14u);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v3 = *(_DWORD *)(a1 + 44);
  v13 = (_DWORD *)(v3 + 8);
  v4 = (_DWORD *)(v3 + 8);
  v5 = *(_DWORD **)(v3 + 12);
  if ( !v5 )
    goto LABEL_27;
  do
  {
    while ( 1 )
    {
      v6 = v5[2];
      v7 = v5[3];
      if ( v5[4] < a2 )
        break;
      v4 = v5;
      v5 = (_DWORD *)v5[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v5 = (_DWORD *)v5[3];
  }
  while ( v7 );
LABEL_6:
  if ( v13 == v4 )
  {
LABEL_27:
    v18 = *(_DWORD *)(a1 + 44);
    v15 = v3 + 4;
    v14 = (_DWORD *)operator new(0x18u);
    v14[4] = a2;
    v14[5] = 0;
    if ( *(_DWORD *)(v18 + 24) )
    {
      v10 = *(_DWORD *)(v18 + 20);
      v4 = nullptr;
      if ( *(_DWORD *)(v10 + 16) < a2 )
        goto LABEL_13;
    }
    goto LABEL_29;
  }
  if ( a2 >= v4[4] )
    goto LABEL_18;
  v16 = *(_DWORD *)(a1 + 44);
  v15 = v3 + 4;
  v8 = (_DWORD *)operator new(0x18u);
  v8[4] = a2;
  v8[5] = 0;
  v9 = v4[4];
  v14 = v8;
  if ( a2 >= v9 )
  {
    if ( v9 >= a2 )
      goto LABEL_21;
    if ( *(_DWORD **)(v16 + 20) == v4 )
      goto LABEL_32;
    v17 = v4[4];
    v10 = std::_Rb_tree_increment(v4);
    if ( a2 < *(_DWORD *)(v10 + 16) )
    {
      v9 = v17;
      if ( v4[3] )
      {
        v4 = (_DWORD *)v10;
        goto LABEL_13;
      }
LABEL_32:
      v10 = (int)v4;
      if ( v4 )
        goto LABEL_31;
      goto LABEL_21;
    }
LABEL_29:
    sub_80BA640(v19, v15, a2);
    v4 = (_DWORD *)v19[0];
    v10 = v19[1];
    goto LABEL_13;
  }
  v10 = (int)v4;
  if ( *(_DWORD **)(v16 + 16) == v4 )
    goto LABEL_13;
  v10 = std::_Rb_tree_decrement(v4);
  if ( *(_DWORD *)(v10 + 16) >= a2 )
    goto LABEL_29;
  if ( *(_DWORD *)(v10 + 12) )
    v10 = (int)v4;
  else
    v4 = nullptr;
LABEL_13:
  if ( v10 )
  {
    if ( v13 == (_DWORD *)v10 || v4 )
    {
      v11 = 1;
LABEL_17:
      v4 = v14;
      std::_Rb_tree_insert_and_rebalance(v11, v14, v10, v13);
      ++*(_DWORD *)(v15 + 20);
      goto LABEL_18;
    }
    v9 = *(_DWORD *)(v10 + 16);
LABEL_31:
    v11 = a2 < v9;
    goto LABEL_17;
  }
LABEL_21:
  if ( v14 )
    operator delete(v14, 0x18u);
LABEL_18:
  v4[5] = a3;
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
