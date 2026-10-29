/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80703C0
// Address: 0x080703C0

//----- (080703C0) --------------------------------------------------------
_DWORD *__userpurge sub_80703C0@<eax>(_DWORD *a1, int a2, unsigned int *a3)
{
  _DWORD *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // eax
  bool v8; // bp
  _DWORD *v9; // eax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // [esp+0h] [ebp-24h]
  _DWORD *v15; // [esp+0h] [ebp-24h]

  v3 = *(_DWORD **)(a2 + 8);
  if ( v3 )
  {
    v4 = *a3;
    v14 = a3[1];
    while ( 1 )
    {
      v5 = v3[4];
      v6 = v3[5];
      v7 = (_DWORD *)v3[3];
      if ( __PAIR64__(v14, v4) < __PAIR64__(v6, v5) )
        v7 = (_DWORD *)v3[2];
      v8 = __PAIR64__(v14, v4) < __PAIR64__(v6, v5);
      if ( !v7 )
        break;
      v3 = v7;
    }
    v15 = v3;
    if ( !v8 )
    {
      v9 = a1;
      if ( __PAIR64__(v6, v5) >= *(_QWORD *)a3 )
      {
LABEL_9:
        *v9 = v3;
        v9[1] = 0;
        return a1;
      }
      goto LABEL_13;
    }
  }
  else
  {
    v3 = (_DWORD *)(a2 + 4);
  }
  if ( v3 != *(_DWORD **)(a2 + 12) )
  {
    v11 = std::_Rb_tree_decrement(v3);
    v15 = v3;
    v12 = *(_DWORD *)(v11 + 16);
    v13 = *(_DWORD *)(v11 + 20);
    v3 = (_DWORD *)v11;
    v9 = a1;
    if ( __PAIR64__(v13, v12) >= *(_QWORD *)a3 )
      goto LABEL_9;
LABEL_13:
    *v9 = 0;
    v9[1] = v15;
    return a1;
  }
  *a1 = 0;
  a1[1] = v3;
  return a1;
}
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
