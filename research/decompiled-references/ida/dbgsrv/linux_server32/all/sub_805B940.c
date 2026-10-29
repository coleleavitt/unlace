/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805B940
// Address: 0x0805B940

//----- (0805B940) --------------------------------------------------------
bool __cdecl sub_805B940(_DWORD *a1)
{
  int v1; // ebx
  bool result; // al

  v1 = a1[167];
  if ( (_DWORD *)v1 == a1 + 165 )
    return 1;
  while ( 1 )
  {
    result = sub_805B860(a1, *(_DWORD *)(v1 + 20));
    if ( !result )
      break;
    v1 = std::_Rb_tree_increment(v1);
    if ( (_DWORD *)v1 == a1 + 165 )
      return 1;
  }
  return result;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
