__int64 __fastcall sub_16FF160(__int64 a1, std::__detail::_List_node_base *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = operator new(0x28u);
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  result = std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v2, a2);
  ++*(_QWORD *)(a1 + 16);
  return result;
}
