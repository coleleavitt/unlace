void (*__fastcall sub_F3690(_QWORD *a1, __int64 a2))()
{
  void (*v2)(void); // rax
  std::__detail::_List_node_base *v3; // rbx
  std::__detail::_List_node_base *v4; // r13
  std::__detail::_List_node_base *v5; // rbp
  void (*result)(); // rax

  v2 = *(void (**)(void))(*a1 + 16LL);
  if ( v2 != nullsub_1 )
    v2();
  v3 = (std::__detail::_List_node_base *)a1[1];
  v4 = (std::__detail::_List_node_base *)(a1 + 1);
  while ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = v3;
      v3 = *(std::__detail::_List_node_base **)v3;
      if ( a2 != (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v5 + 2) + 16LL))(*((_QWORD **)v5 + 2)) )
        break;
      std::__detail::_List_node_base::_M_unhook(v5);
      operator delete(v5, 0x18u);
      if ( v4 == v3 )
        goto LABEL_7;
    }
  }
LABEL_7:
  result = *(void (**)())(*a1 + 24LL);
  if ( result != nullsub_2 )
    return (void (*)())((__int64 (__fastcall *)(_QWORD *))result)(a1);
  return result;
}

