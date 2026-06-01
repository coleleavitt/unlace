__int64 __fastcall sub_10EB9A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx

  result = sub_10EB820(a1, (__int64)a2);
  if ( v4 )
  {
    if ( !result && v4 != a1 + 8 )
      sub_9A0E10((__int64)a2, v4 + 32);
    v5 = operator new(0x40u);
    v6 = (_BYTE *)*a2;
    v7 = v5;
    v8 = *a2 + a2[1];
    *(_QWORD *)(v5 + 32) = v5 + 48;
    sub_10E6B70((_QWORD *)(v5 + 32), v6, v8);
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    return v7;
  }
  return result;
}

