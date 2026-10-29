__int64 __fastcall sub_1007320(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  size_t v7; // rdx

  result = sub_9D20F0(a1, a2);
  if ( v3 )
  {
    v4 = v3;
    if ( !result && v3 != a1 + 8 )
    {
      v7 = *(_QWORD *)(v3 + 40);
      if ( *(_QWORD *)(a2 + 8) <= v7 )
        v7 = *(_QWORD *)(a2 + 8);
      if ( v7 )
        memcmp(*(const void **)a2, *(const void **)(v4 + 32), v7);
    }
    v5 = operator new(0x30u);
    v6 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)a2;
    *(_QWORD *)(v5 + 40) = v6;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    return v5;
  }
  return result;
}

