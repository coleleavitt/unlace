/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DBC0
// Address: 0x000000000040DBC0

//----- (000000000040DBC0) ----------------------------------------------------
__int64 __fastcall sub_40DBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  __int64 v6; // rbx

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    v6 = a1 + 8;
    goto LABEL_10;
  }
  while ( 1 )
  {
    a4 = *(unsigned int *)(v6 + 32);
    a3 = *(_QWORD *)(v6 + 24);
    if ( v5 < (int)a4 )
      a3 = *(_QWORD *)(v6 + 16);
    LOBYTE(a2) = v5 < (int)a4;
    if ( !a3 )
      break;
    v6 = a3;
  }
  if ( v5 < (int)a4 )
  {
LABEL_10:
    if ( v6 != *(_QWORD *)(a1 + 24) )
    {
      v6 = std::_Rb_tree_decrement(v6, a2, a3, a4, a5);
      if ( v5 <= *(_DWORD *)(v6 + 32) )
        return v6;
    }
    return 0;
  }
  if ( v5 > (int)a4 )
    return 0;
  return v6;
}
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
