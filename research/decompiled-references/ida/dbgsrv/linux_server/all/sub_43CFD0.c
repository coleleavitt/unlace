/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CFD0
// Address: 0x000000000043CFD0

//----- (000000000043CFD0) ----------------------------------------------------
const char *__fastcall sub_43CFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  result = nullptr;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v6 + 24) != v6 + 8 )
      {
        v7 = std::_Rb_tree_decrement(v6 + 8, a2, v6, a4, a5);
        result = s1;
        if ( *(_QWORD *)(v7 + 40) )
          return *(const char **)(v7 + 32);
      }
    }
  }
  return result;
}
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
