__int64 __fastcall sub_5943F8(__int64 a1, std::__detail::_List_node_base *a2, __int64 a3)
{
  __int64 v3; // rax
  std::__detail::_List_node_base *v5; // [rsp+28h] [rbp-8h]

  v3 = sub_594E8D(a3);
  v5 = (std::__detail::_List_node_base *)sub_594E9C(a1, v3);
  std::__detail::_List_node_base::_M_hook(v5, a2);
  return sub_594F5C(a1, 1);
}
