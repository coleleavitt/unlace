__int64 __fastcall sub_69FC0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax

  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: find_module(ea=%a)\n");
  v7 = *(_QWORD **)(a1 + 88);
  v8 = (_QWORD *)(a1 + 80);
  v9 = (_QWORD *)(a1 + 80);
  if ( v7 )
  {
    do
    {
      while ( 1 )
      {
        a4 = v7[2];
        a3 = v7[3];
        if ( v7[4] < a2 )
          break;
        v9 = v7;
        v7 = (_QWORD *)v7[2];
        if ( !a4 )
          goto LABEL_8;
      }
      v7 = (_QWORD *)v7[3];
    }
    while ( a3 );
LABEL_8:
    if ( v8 != v9 && a2 >= v9[4] )
      return v9[5];
  }
  if ( v9 == *(_QWORD **)(a1 + 96) )
    return 0;
  v10 = std::_Rb_tree_decrement(v9, v8, a3, a4, a5);
  v11 = *(_QWORD *)(v10 + 32);
  if ( a2 < v11 )
    return 0;
  result = *(_QWORD *)(v10 + 40);
  if ( a2 >= *(_QWORD *)(result + 56) + v11 )
    return 0;
  return result;
}
