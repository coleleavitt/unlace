__int64 __fastcall sub_1582A90(__int64 a1, std::__detail::_List_node_base *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax

  v6 = operator new(0x60u);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)a3;
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a3 + 16);
  v7 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a3 + 8) = 0;
  *(_QWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 48) = v6 + 64;
  *(_QWORD *)(v6 + 56) = 0x100000000LL;
  if ( *(_DWORD *)(a4 + 8) )
    sub_1582780(v6 + 48, a4);
  result = std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v6, a2);
  ++*(_QWORD *)(a1 + 16);
  return result;
}
