/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453F30
// Address: 0x0000000000453F30

//----- (0000000000453F30) ----------------------------------------------------
__int64 __fastcall sub_453F30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 result; // rax

  v5 = a3;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      a4 = a1[4];
      if ( *(_DWORD *)(a4 + 32) < (int)a3 )
        return 0;
    }
    return sub_453E00((__int64)a1, v5, a3, a4, a5);
  }
  if ( *(_DWORD *)(a2 + 32) > (int)a3 )
  {
    result = a2;
    if ( a1[3] == a2 )
      return result;
    a4 = std::_Rb_tree_decrement(a2, a2, a2, a4, a5);
    if ( *(_DWORD *)(a4 + 32) < (signed int)v5 )
    {
      result = a2;
      if ( *(_QWORD *)(a4 + 24) )
        return result;
      return 0;
    }
    return sub_453E00((__int64)a1, v5, a3, a4, a5);
  }
  if ( *(_DWORD *)(a2 + 32) >= (int)a3 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  result = std::_Rb_tree_increment(a2);
  if ( *(_DWORD *)(result + 32) <= (signed int)v5 )
    return sub_453E00((__int64)a1, v5, a3, a4, a5);
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}
// 453FC1: variable 'a3' is possibly undefined
// 453FC1: variable 'a4' is possibly undefined
// 453FC1: variable 'a5' is possibly undefined
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
