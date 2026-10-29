/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DA80
// Address: 0x000000000046DA80

//----- (000000000046DA80) ----------------------------------------------------
_QWORD *__fastcall sub_46DA80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax

  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
  {
    v5 = (_QWORD *)(a1 + 8);
    goto LABEL_10;
  }
  while ( 1 )
  {
    a3 = v5[4];
    a5 = v5[2];
    a4 = 0;
    v6 = (_QWORD *)v5[3];
    if ( a2 < a3 )
    {
      v6 = (_QWORD *)v5[2];
      a4 = 1;
    }
    if ( !v6 )
      break;
    v5 = v6;
  }
  if ( (_BYTE)a4 )
  {
LABEL_10:
    if ( v5 != *(_QWORD **)(a1 + 24) )
    {
      v5 = (_QWORD *)std::_Rb_tree_decrement(v5, a2, a3, a4, a5);
      if ( v5[4] >= a2 )
        return v5;
    }
    return nullptr;
  }
  if ( a3 < a2 )
    return nullptr;
  return v5;
}
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
