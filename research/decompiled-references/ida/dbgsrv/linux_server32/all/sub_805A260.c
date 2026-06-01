/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805A260
// Address: 0x0805A260

//----- (0805A260) --------------------------------------------------------
int __cdecl sub_805A260(_DWORD *a1)
{
  int v1; // edx
  int v3; // eax

  v1 = 1;
  if ( a1[20] != a1[16] )
    return v1;
  v3 = a1[167];
  if ( (_DWORD *)v3 != a1 + 165 )
  {
    while ( 1 )
    {
      v1 = *(unsigned __int8 *)(v3 + 45);
      if ( (_BYTE)v1 )
      {
        if ( !*(_DWORD *)(v3 + 28) && !*(_DWORD *)(v3 + 24) )
          break;
      }
      v3 = std::_Rb_tree_increment(v3);
      if ( a1 + 165 == (_DWORD *)v3 )
        return 0;
    }
    return v1;
  }
  return 0;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
