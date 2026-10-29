/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805E840
// Address: 0x0805E840

//----- (0805E840) --------------------------------------------------------
int __usercall sub_805E840@<eax>(int result@<eax>, const char *a2@<edx>)
{
  int v2; // edi
  int v3; // ebp
  _DWORD *v4; // eax
  unsigned int v5; // ebx
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // edx
  const char *v9; // eax
  int v10; // esi
  void *v11; // eax
  int v12; // [esp+0h] [ebp-30h]
  _DWORD *v13; // [esp+4h] [ebp-2Ch]

  v2 = *(_DWORD *)(result + 620);
  if ( v2 != result + 612 )
  {
    v3 = result;
    v12 = result + 612;
    v13 = (_DWORD *)(result + 636);
    do
    {
      v4 = *(_DWORD **)(v3 + 640);
      v5 = *(_DWORD *)(v2 + 16);
      if ( v4 )
      {
        v6 = v13;
        do
        {
          while ( 1 )
          {
            v7 = v4[2];
            v8 = v4[3];
            if ( v4[4] < v5 )
              break;
            v6 = v4;
            v4 = (_DWORD *)v4[2];
            if ( !v7 )
              goto LABEL_8;
          }
          v4 = (_DWORD *)v4[3];
        }
        while ( v8 );
LABEL_8:
        if ( v13 != v6 && v5 >= v6[4] )
        {
          if ( a2 )
          {
            v9 = (const char *)&dword_80DDFD8;
            if ( v6[11] )
              v9 = (const char *)v6[10];
            if ( strcmp(v9, a2) )
            {
              v2 = std::_Rb_tree_increment(v2);
              goto LABEL_16;
            }
          }
          sub_805DF40(v3, v6 + 5);
        }
      }
      v10 = std::_Rb_tree_increment(v2);
      v11 = (void *)std::_Rb_tree_rebalance_for_erase(v2, v12);
      v2 = v10;
      operator delete(v11, 0x14u);
      --*(_DWORD *)(v3 + 628);
LABEL_16:
      result = v12;
    }
    while ( v2 != v12 );
  }
  return result;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
