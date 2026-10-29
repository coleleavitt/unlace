__int64 __fastcall sub_3A0360(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r13
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  _BOOL4 v7; // r14d
  __int64 v8; // rax

  if ( (*(_WORD *)(a2 + 44) & 0x18) != 8 )
    return 0;
  *(_WORD *)(a2 + 44) |= 0x10u;
  update_segm(a2);
  v3 = *(_QWORD *)a2;
  v4 = sub_3A0080(a1 + 8, *(_QWORD *)a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = 1;
    if ( !v4 && v5 != a1 + 16 )
      v7 = v3 < *(_QWORD *)(v5 + 32);
    v8 = operator new(0x28u);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)a2;
    std::_Rb_tree_insert_and_rebalance(v7, v8, v6, a1 + 16);
    ++*(_QWORD *)(a1 + 48);
  }
  return 0;
}
