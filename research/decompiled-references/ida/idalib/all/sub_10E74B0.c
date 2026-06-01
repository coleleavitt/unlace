__int64 __fastcall sub_10E74B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rax
  const void *v9; // rsi
  __int64 v10; // rcx
  size_t v11; // rdx
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  result = sub_9F5E30(a1, (__int64)a2);
  if ( v4 )
  {
    v5 = v4;
    v6 = 1;
    if ( !result && v4 != a1 + 8 )
    {
      v9 = *(const void **)(v4 + 32);
      v10 = *a2;
      v11 = *(_QWORD *)(v4 + 40);
      v12[1] = a2[1];
      v12[0] = v10;
      v6 = (unsigned int)sub_9C4B00((__int64)v12, v9, v11) >> 31;
    }
    v7 = operator new(0x30u);
    v8 = a2[1];
    *(_QWORD *)(v7 + 32) = *a2;
    *(_QWORD *)(v7 + 40) = v8;
    std::_Rb_tree_insert_and_rebalance(v6, v7, v5, a1 + 8);
    ++*(_QWORD *)(a1 + 40);
    return v7;
  }
  return result;
}
