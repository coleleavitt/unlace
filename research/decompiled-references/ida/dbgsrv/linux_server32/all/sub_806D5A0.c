/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D5A0
// Address: 0x0806D5A0

//----- (0806D5A0) --------------------------------------------------------
int __cdecl sub_806D5A0(int a1, int a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // edx
  int v6; // ebp
  int v7; // ebp
  int v8; // edx
  unsigned __int64 v9; // rdi
  int v10; // eax
  _DWORD *v12; // [esp+0h] [ebp-20h]

  v2 = *(_DWORD *)(a2 + 60);
  v3 = *(_DWORD **)(a1 + 12);
  if ( !v3 )
    return 1;
  v4 = (_DWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( v3[4] >= v2 )
        break;
      v3 = (_DWORD *)v3[3];
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = v3;
    v3 = (_DWORD *)v3[2];
  }
  while ( v5 );
LABEL_6:
  v7 = 1;
  if ( v4 != (_DWORD *)(a1 + 8) && v2 >= v4[4] )
  {
    v8 = v4[8];
    v12 = v4 + 6;
    if ( (_DWORD *)v8 != v4 + 6 )
    {
      v9 = *(_QWORD *)(a2 + 32);
      v10 = v8;
      do
      {
        if ( v9 < *(_QWORD *)(v10 + 16) )
          break;
        v7 = *(_DWORD *)(v10 + 24);
        v10 = std::_Rb_tree_increment(v10);
      }
      while ( v12 != (_DWORD *)v10 );
    }
  }
  return v7;
}
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
