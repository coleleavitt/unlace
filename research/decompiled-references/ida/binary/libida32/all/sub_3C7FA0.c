__int64 __fastcall sub_3C7FA0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx

  v5 = a2;
  result = sub_3A0490(a2, a3, a4);
  if ( (_BYTE)result && a3 != a2 )
  {
    do
    {
      sub_3B4C40(a1, (__int64)(a1 + 1), *(_DWORD *)(v5 + 32));
      if ( v7 )
      {
        *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(v5 + 32);
        std::_Rb_tree_insert_and_rebalance();
        ++a1[5];
      }
      result = std::_Rb_tree_increment();
      v5 = result;
    }
    while ( a3 != result );
  }
  return result;
}

