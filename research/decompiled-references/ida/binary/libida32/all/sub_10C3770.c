__int64 __fastcall sub_10C3770(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  const void *v7; // rsi
  __int64 v8; // rcx
  size_t v9; // rdx
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  result = sub_9D20F0(a1, (__int64)a2);
  if ( v4 )
  {
    if ( !result && v4 != a1 + 8 )
    {
      v7 = *(const void **)(v4 + 32);
      v8 = *a2;
      v9 = *(_QWORD *)(v4 + 40);
      v10[1] = a2[1];
      v10[0] = v8;
      sub_9A0DC0((__int64)v10, v7, v9);
    }
    v5 = operator new(0x30u);
    v6 = a2[1];
    *(_QWORD *)(v5 + 32) = *a2;
    *(_QWORD *)(v5 + 40) = v6;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    return v5;
  }
  return result;
}

