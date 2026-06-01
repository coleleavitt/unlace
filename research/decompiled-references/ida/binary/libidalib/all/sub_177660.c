void __fastcall sub_177660(_QWORD *a1)
{
  _QWORD *v2; // r13
  void (*(__fastcall *v3)(_QWORD *, __int64))(); // rdx
  void (*v4)(); // rax
  std::__detail::_List_node_base *v5; // r14
  std::__detail::_List_node_base *v6; // r15
  std::__detail::_List_node_base *v7; // r12
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  void (*v10)(); // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  void *v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]

  *a1 = &off_22F558;
  v15 = (__int64)(a1 + 2);
  v14 = a1[4];
  if ( (_QWORD *)v14 != a1 + 2 )
  {
    while ( 1 )
    {
      v2 = *(_QWORD **)(v14 + 32);
      v3 = *(void (*(__fastcall **)(_QWORD *, __int64))())(*v2 + 32LL);
      if ( v3 == sub_8E630 )
        break;
      v3(*(_QWORD **)(v14 + 32), (__int64)a1);
LABEL_14:
      v14 = std::_Rb_tree_increment();
      if ( v15 == v14 )
      {
        v11 = a1[4];
        goto LABEL_16;
      }
    }
    v4 = *(void (**)())(*v2 + 16LL);
    if ( v4 != nullsub_1 )
      ((void (__fastcall *)(_QWORD))v4)(*(_QWORD *)(v14 + 32));
    v5 = (std::__detail::_List_node_base *)v2[1];
    v6 = (std::__detail::_List_node_base *)(v2 + 1);
    if ( v5 == (std::__detail::_List_node_base *)(v2 + 1) )
    {
LABEL_12:
      v10 = *(void (**)())(*v2 + 24LL);
      if ( v10 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v10)(v2);
      goto LABEL_14;
    }
    while ( 1 )
    {
      v7 = v5;
      v5 = *(std::__detail::_List_node_base **)v5;
      v8 = *((_QWORD **)v7 + 2);
      v9 = *(__int64 (**)(void))(*v8 + 16LL);
      if ( (char *)v9 == (char *)sub_174770 )
      {
        if ( a1 != (_QWORD *)v8[1] )
          goto LABEL_8;
LABEL_11:
        std::__detail::_List_node_base::_M_unhook(v7);
        operator delete(v7, 0x18u);
        if ( v6 == v5 )
          goto LABEL_12;
      }
      else
      {
        if ( a1 == (_QWORD *)v9() )
          goto LABEL_11;
LABEL_8:
        if ( v6 == v5 )
          goto LABEL_12;
      }
    }
  }
  v11 = (__int64)(a1 + 2);
LABEL_16:
  sub_99FE0((__int64)(a1 + 1), v11, v15);
  v12 = a1[3];
  while ( v12 )
  {
    sub_175330(*(_QWORD **)(v12 + 24));
    v13 = (void *)v12;
    v12 = *(_QWORD *)(v12 + 16);
    operator delete(v13, 0x28u);
  }
}

