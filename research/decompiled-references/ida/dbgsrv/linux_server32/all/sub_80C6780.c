/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C6780
// Address: 0x080C6780

//----- (080C6780) --------------------------------------------------------
int __userpurge sub_80C6780@<eax>(int a1, _DWORD *a2, unsigned int *a3)
{
  _DWORD *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // edx
  _DWORD *v6; // eax
  char v7; // bl
  _DWORD *v8; // ecx
  _BOOL4 v9; // esi
  int v10; // edi
  int v12; // eax
  _DWORD *v13; // [esp+0h] [ebp-28h]
  _DWORD *v14; // [esp+8h] [ebp-20h]

  v3 = (_DWORD *)a2[2];
  v4 = *a3;
  v13 = a2 + 1;
  if ( !v3 )
  {
    v3 = a2 + 1;
    if ( a2 + 1 == (_DWORD *)a2[3] )
    {
      v8 = a2 + 1;
      v9 = 1;
LABEL_11:
      v14 = v8;
      v10 = operator new(0x14u);
      *(_DWORD *)(v10 + 16) = *a3;
      std::_Rb_tree_insert_and_rebalance(v9, v10, v14, v13);
      ++a2[5];
      *(_DWORD *)a1 = v10;
      *(_BYTE *)(a1 + 4) = 1;
      return a1;
    }
LABEL_14:
    v12 = std::_Rb_tree_decrement(v3);
    v8 = v3;
    v5 = *(_DWORD *)(v12 + 16);
    v3 = (_DWORD *)v12;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v5 = v3[4];
    v6 = (_DWORD *)v3[2];
    v7 = 1;
    if ( v4 >= v5 )
    {
      v6 = (_DWORD *)v3[3];
      v7 = 0;
    }
    if ( !v6 )
      break;
    v3 = v6;
  }
  v8 = v3;
  if ( v7 )
  {
    if ( (_DWORD *)a2[3] == v3 )
    {
LABEL_9:
      v9 = 1;
      if ( v13 != v8 )
        v9 = v4 < v8[4];
      goto LABEL_11;
    }
    goto LABEL_14;
  }
LABEL_8:
  if ( v5 < v4 )
    goto LABEL_9;
  *(_DWORD *)a1 = v3;
  *(_BYTE *)(a1 + 4) = 0;
  return a1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
