/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055100
// Address: 0x08055100

//----- (08055100) --------------------------------------------------------
_DWORD *__usercall sub_8055100@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _DWORD *v5; // esi
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // ecx

  v5 = *(_DWORD **)(a2 + 8);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = v5[4];
      v8 = (_DWORD *)v5[3];
      if ( a3 < v7 )
        v8 = (_DWORD *)v5[2];
      if ( !v8 )
        break;
      v5 = v8;
    }
    v9 = v5;
    if ( a3 >= v7 )
    {
      if ( a3 > v7 )
      {
LABEL_12:
        a1[1] = v9;
        *a1 = 0;
        return a1;
      }
LABEL_9:
      *a1 = v5;
      a1[1] = 0;
      return a1;
    }
  }
  else
  {
    v5 = (_DWORD *)(a2 + 4);
  }
  if ( v5 != *(_DWORD **)(a2 + 12) )
  {
    v11 = std::_Rb_tree_decrement(v5);
    v12 = *(_DWORD *)(v11 + 16);
    v13 = (_DWORD *)v11;
    v9 = v5;
    v5 = v13;
    if ( a3 > v12 )
      goto LABEL_12;
    goto LABEL_9;
  }
  *a1 = 0;
  a1[1] = v5;
  return a1;
}
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
