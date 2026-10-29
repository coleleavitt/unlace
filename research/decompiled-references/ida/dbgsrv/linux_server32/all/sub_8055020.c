/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055020
// Address: 0x08055020

//----- (08055020) --------------------------------------------------------
_DWORD *__usercall sub_8055020@<eax>(_DWORD *a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  unsigned int v7; // edx
  _DWORD *v8; // eax
  char v9; // cl
  _DWORD *v10; // eax
  int v12; // eax
  unsigned int v13; // edx
  _DWORD *v14; // ecx

  v4 = a1;
  v5 = *(_DWORD **)(a2 + 8);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = v5[4];
      v8 = (_DWORD *)v5[2];
      v9 = 1;
      if ( a3 >= v7 )
      {
        v8 = (_DWORD *)v5[3];
        v9 = 0;
      }
      if ( !v8 )
        break;
      v5 = v8;
    }
    v4 = a1;
    v10 = v5;
    if ( !v9 )
    {
      if ( v7 >= a3 )
      {
LABEL_9:
        *v4 = v5;
        v4[1] = 0;
        return v4;
      }
      goto LABEL_13;
    }
  }
  else
  {
    v5 = (_DWORD *)(a2 + 4);
  }
  if ( v5 != *(_DWORD **)(a2 + 12) )
  {
    v12 = std::_Rb_tree_decrement(v5);
    v13 = *(_DWORD *)(v12 + 16);
    v14 = (_DWORD *)v12;
    v10 = v5;
    v5 = v14;
    if ( v13 >= a3 )
      goto LABEL_9;
LABEL_13:
    v4[1] = v10;
    *v4 = 0;
    return v4;
  }
  *v4 = 0;
  v4[1] = v5;
  return v4;
}
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
