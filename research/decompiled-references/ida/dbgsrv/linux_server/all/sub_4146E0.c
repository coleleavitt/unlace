/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4146E0
// Address: 0x00000000004146E0

//----- (00000000004146E0) ----------------------------------------------------
bool __fastcall sub_4146E0(__int64 a1)
{
  __int64 v1; // rbx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 1232);
  if ( v1 == a1 + 1216 )
    return 1;
  while ( 1 )
  {
    result = sub_4145E0(a1, *(unsigned int *)(v1 + 40));
    if ( !result )
      break;
    v1 = std::_Rb_tree_increment(v1);
    if ( v1 == a1 + 1216 )
      return 1;
  }
  return result;
}
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
