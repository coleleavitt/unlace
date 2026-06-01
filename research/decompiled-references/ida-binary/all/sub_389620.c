bool __fastcall struc_tree_node_info_t__::vfunc_3(__int64 a1, __int64 a2, char a3)
{
  if ( a3 )
    return *(_QWORD *)(a1 + 48) == *(_QWORD *)(a2 + 48);
  else
    return *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56);
}
