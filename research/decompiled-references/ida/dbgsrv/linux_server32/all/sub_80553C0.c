/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80553C0
// Address: 0x080553C0

//----- (080553C0) --------------------------------------------------------
int __usercall sub_80553C0@<eax>(_DWORD *a1@<eax>, unsigned int *a2@<edx>)
{
  _DWORD *v2; // esi
  unsigned int v3; // ebp
  _DWORD *v5; // eax
  unsigned int v6; // edx
  int result; // eax
  char v8; // cl
  _BOOL4 v9; // edx
  int v10; // eax
  _DWORD *v11; // [esp+0h] [ebp-2Ch]
  _BOOL4 v13; // [esp+Ch] [ebp-20h]

  v2 = (_DWORD *)a1[2];
  v3 = *a2;
  v5 = a1 + 1;
  v11 = v5;
  if ( v2 )
  {
    while ( 1 )
    {
      v6 = v2[4];
      result = v2[2];
      v8 = 1;
      if ( v3 >= v6 )
      {
        result = v2[3];
        v8 = 0;
      }
      if ( !result )
        break;
      v2 = (_DWORD *)result;
    }
    if ( !v8 )
    {
LABEL_8:
      if ( v6 >= v3 )
        return result;
      goto LABEL_9;
    }
    if ( (_DWORD *)a1[3] == v2 )
    {
LABEL_9:
      v9 = 1;
      if ( v11 != v2 )
        v9 = v3 < v2[4];
      goto LABEL_11;
    }
LABEL_14:
    result = std::_Rb_tree_decrement(v2);
    v6 = *(_DWORD *)(result + 16);
    goto LABEL_8;
  }
  v2 = v5;
  v9 = 1;
  if ( v5 != (_DWORD *)a1[3] )
    goto LABEL_14;
LABEL_11:
  v13 = v9;
  v10 = operator new(0x14u);
  *(_DWORD *)(v10 + 16) = *a2;
  result = std::_Rb_tree_insert_and_rebalance(v13, v10, v2, v11);
  ++a1[5];
  return result;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
