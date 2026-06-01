__int64 __fastcall sub_693480(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_3B9110(**(_QWORD ***)a1, *a3);
  sub_6933C0(v3, v4);
  if ( v5 )
  {
    *(_DWORD *)(operator new(0x28u) + 32) = v4;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v3 + 40);
  }
  return 0;
}

