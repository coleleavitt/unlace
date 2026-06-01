/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805B5E0
// Address: 0x0805B5E0

//----- (0805B5E0) --------------------------------------------------------
void *__cdecl sub_805B5E0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebp
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // ebp
  void *v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  void *result; // eax
  int v11; // [esp-18h] [ebp-38h]
  int v12; // [esp-14h] [ebp-34h]
  int v13; // [esp-10h] [ebp-30h]
  _DWORD *v14; // [esp+0h] [ebp-20h]

  v2 = *(_DWORD **)(a1 + 664);
  if ( !v2 )
    goto LABEL_8;
  v14 = (_DWORD *)(a1 + 660);
  v3 = (_DWORD *)(a1 + 660);
  do
  {
    while ( 1 )
    {
      v4 = v2[2];
      v5 = v2[3];
      if ( v2[4] >= a2 )
        break;
      v2 = (_DWORD *)v2[3];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = v2;
    v2 = (_DWORD *)v2[2];
  }
  while ( v4 );
LABEL_6:
  if ( v14 == v3 || v3[4] > a2 )
  {
LABEL_8:
    if ( !byte_811F8A1 )
      sub_80CFF40(30064, v11, v12, v13);
    BUG();
  }
  if ( *((_BYTE *)v3 + 45) )
    --*(_DWORD *)(a1 + 764);
  v6 = (_DWORD *)std::_Rb_tree_rebalance_for_erase(v3, v14);
  v7 = (void *)v6[13];
  if ( v7 )
  {
    v6[14] = 0;
    sub_80CF780(v7);
  }
  operator delete(v6, 0x40u);
  v8 = *(_DWORD *)(a1 + 684);
  --*(_DWORD *)(a1 + 676);
  v9 = v8 + 1;
  if ( v8 > 9 )
  {
    memmove(*(void **)(a1 + 680), (const void *)(*(_DWORD *)(a1 + 680) + 4), 4 * v8 - 4);
    v9 = *(_DWORD *)(a1 + 684);
    v8 = v9 - 1;
    *(_DWORD *)(a1 + 684) = v9 - 1;
  }
  result = *(void **)(a1 + 680);
  if ( *(_DWORD *)(a1 + 688) < v9 )
  {
    result = sub_80CF920(a1 + 680, result, v9, 4u);
    v8 = *(_DWORD *)(a1 + 684);
    *(_DWORD *)(a1 + 680) = result;
  }
  *((_DWORD *)result + v8) = a2;
  ++*(_DWORD *)(a1 + 684);
  return result;
}
// 805B65D: variable 'v11' is possibly undefined
// 805B65D: variable 'v12' is possibly undefined
// 805B65D: variable 'v13' is possibly undefined
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
