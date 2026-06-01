/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A14C0
// Address: 0x080A14C0

//----- (080A14C0) --------------------------------------------------------
_DWORD *__userpurge sub_80A14C0@<eax>(_DWORD *a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // ebx
  int (*v5)(); // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  unsigned int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  int v13; // edx

  v4 = -4096;
  v5 = *(int (**)())(*a2 + 248);
  if ( v5 != sub_8053370 )
    v4 = -((int (__cdecl *)(_DWORD *))v5)(a2);
  v6 = (_DWORD *)a2[80];
  v7 = a2 + 79;
  v8 = a3 & v4;
  v9 = (int)(a2 + 79);
  if ( !v6 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      v10 = v6[2];
      v11 = v6[3];
      if ( v6[4] < v8 )
        break;
      v9 = (int)v6;
      v6 = (_DWORD *)v6[2];
      if ( !v10 )
        goto LABEL_8;
    }
    v6 = (_DWORD *)v6[3];
  }
  while ( v11 );
LABEL_8:
  if ( (_DWORD *)v9 == v7 || (v12 = *(_DWORD *)(v9 + 16), v12 >= a3 + a4) )
  {
LABEL_16:
    if ( v9 == a2[81] )
      goto LABEL_15;
    v9 = std::_Rb_tree_decrement(v9);
    v12 = *(_DWORD *)(v9 + 16);
  }
  v13 = *(_DWORD *)(v9 + 32);
  if ( a4 && v13 && a3 + a4 - 1 >= v12 && v12 + v13 - 1 >= a3 )
    v7 = (_DWORD *)v9;
LABEL_15:
  *a1 = v7;
  return a1;
}
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
