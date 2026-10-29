__int64 __fastcall sub_110F6E0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx

  result = sub_110F560(a1, (__int64)a2);
  if ( v4 )
  {
    v5 = v4;
    v6 = 1;
    if ( !result && v4 != a1 + 8 )
      v6 = (unsigned int)sub_9C4B50((__int64)a2, v4 + 32) >> 31;
    v7 = operator new(0x40u);
    v8 = (_BYTE *)*a2;
    v9 = v7;
    v10 = *a2 + a2[1];
    *(_QWORD *)(v7 + 32) = v7 + 48;
    sub_110A8B0((_QWORD *)(v7 + 32), v8, v10);
    std::_Rb_tree_insert_and_rebalance(v6, v9, v5, a1 + 8);
    ++*(_QWORD *)(a1 + 40);
    return v9;
  }
  return result;
}
