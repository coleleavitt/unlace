__int64 __fastcall sub_594456(__int64 a1, std::__detail::_List_node_base *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  sub_594F6C(a1, 1);
  std::__detail::_List_node_base::_M_unhook(a2);
  v2 = sub_594660(a2);
  v3 = sub_59467E(a1);
  sub_59468C(v3, v2);
  return sub_5946B2(a1, a2);
}
