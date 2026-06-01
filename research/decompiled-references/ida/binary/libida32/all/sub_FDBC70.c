std::__detail::_List_node_base *sub_FDBC70()
{
  _QWORD *v1; // rbx
  std::__detail::_List_node_base *v2; // rbp
  std::__detail::_List_node_base *v3; // rax
  void *v4; // rdx
  void *v5; // rdi
  void (*v6)(void); // rax
  __int64 v7; // r14
  void *v8; // [rsp+8h] [rbp-30h] BYREF

  if ( qword_2CAE5C0 )
  {
    if ( qword_2CAE5C0 != *(std::__detail::_List_node_base **)qword_2CAE5C0 )
      goto LABEL_3;
  }
  else
  {
    sub_220C2E0(&qword_2CAE5C0, sub_FDBB90, sub_FDBBD0);
    if ( qword_2CAE5C0 != *(std::__detail::_List_node_base **)qword_2CAE5C0 )
      goto LABEL_3;
  }
  v1 = (_QWORD *)unk_2CAE5D8;
  if ( unk_2CAE5D8 )
  {
    do
    {
      v7 = v1[1];
      if ( !qword_2CAE5C0 )
        sub_220C2E0(&qword_2CAE5C0, sub_FDBB90, sub_FDBBD0);
      v2 = qword_2CAE5C0;
      (*(void (__fastcall **)(void **))(v7 + 32))(&v8);
      v3 = (std::__detail::_List_node_base *)operator new(0x18u);
      v4 = v8;
      v8 = nullptr;
      *((_QWORD *)v3 + 2) = v4;
      std::__detail::_List_node_base::_M_hook(v3, v2);
      v5 = v8;
      ++*((_QWORD *)v2 + 2);
      if ( v5 )
      {
        v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
        if ( (char *)v6 == (char *)sub_FDBBC0 )
          operator delete(v5, 0x30u);
        else
          v6();
      }
      v1 = (_QWORD *)*v1;
    }
    while ( v1 );
  }
LABEL_3:
  if ( !qword_2CAE5C0 )
    sub_220C2E0(&qword_2CAE5C0, sub_FDBB90, sub_FDBBD0);
  return qword_2CAE5C0;
}

