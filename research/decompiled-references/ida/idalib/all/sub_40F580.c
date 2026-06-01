__int64 __fastcall sub_40F580(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64),
        __int64 a4)
{
  _QWORD *v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned int v10; // r13d
  __int64 result; // rax

  v5 = *(_QWORD **)(a1 + 72);
  v6 = *a2;
  if ( v5 )
  {
    v8 = a1 + 64;
    do
    {
      if ( v5[4] >= v6 )
      {
        v8 = (__int64)v5;
        v5 = (_QWORD *)v5[2];
      }
      else
      {
        v5 = (_QWORD *)v5[3];
      }
    }
    while ( v5 );
    while ( v8 != a1 + 64 && *(_QWORD *)(v8 + 32) < a2[1] )
    {
      v9 = *(_QWORD *)(v8 + 40);
      v10 = *(unsigned __int8 *)(v8 + 48);
      v8 = std::_Rb_tree_increment(v8);
      result = a3(v9, v10, a4);
      if ( result )
        return result;
    }
  }
  return 0;
}
