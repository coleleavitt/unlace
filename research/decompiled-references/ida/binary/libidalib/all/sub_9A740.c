void __fastcall sub_9A740(char *a1)
{
  std::__detail::_List_node_base *v2; // rbp
  std::__detail::_List_node_base *v3; // rbx
  _QWORD *v4; // r15
  void (*v5)(); // rax
  _QWORD *v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  void (*v10)(); // rax
  _QWORD *v11; // rdi
  std::__detail::_List_node_base *v12; // rbp
  std::__detail::_List_node_base *v13; // r12
  std::__detail::_List_node_base *v14; // rbp
  std::__detail::_List_node_base *v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *i; // rdx
  __int64 v18; // r9
  __int64 v19; // r8

  v2 = (std::__detail::_List_node_base *)(a1 + 8);
  v3 = *((std::__detail::_List_node_base **)a1 + 1);
  *(_QWORD *)a1 = &off_22F588;
  if ( v3 != (std::__detail::_List_node_base *)(a1 + 8) )
  {
    do
    {
      v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v3 + 2) + 16LL))(*((_QWORD **)v3 + 2));
      v5 = *(void (**)())(*v4 + 16LL);
      if ( v5 != nullsub_1 )
        ((void (__fastcall *)(_QWORD *))v5)(v4);
      v6 = (_QWORD *)v4[3];
      v7 = (__int64)(v4 + 2);
      while ( 1 )
      {
        if ( !v6 )
        {
LABEL_8:
          v9 = v7;
          goto LABEL_9;
        }
        while ( 1 )
        {
          v8 = v6[4];
          if ( v8 >= (unsigned __int64)a1 )
            break;
          v6 = (_QWORD *)v6[3];
          if ( !v6 )
            goto LABEL_8;
        }
        v16 = (_QWORD *)v6[2];
        if ( (unsigned __int64)a1 >= v8 )
          break;
        v7 = (__int64)v6;
        v6 = (_QWORD *)v6[2];
      }
      for ( i = (_QWORD *)v6[3]; i; i = (_QWORD *)i[2] )
      {
        while ( 1 )
        {
          v18 = i[3];
          if ( (unsigned __int64)a1 < i[4] )
            break;
          i = (_QWORD *)i[3];
          if ( !v18 )
            goto LABEL_25;
        }
        v7 = (__int64)i;
      }
LABEL_25:
      while ( v16 )
      {
        while ( 1 )
        {
          v19 = v16[3];
          if ( v16[4] >= (unsigned __int64)a1 )
            break;
          v16 = (_QWORD *)v16[3];
          if ( !v19 )
            goto LABEL_28;
        }
        v6 = v16;
        v16 = (_QWORD *)v16[2];
      }
LABEL_28:
      v9 = v7;
      v7 = (__int64)v6;
LABEL_9:
      sub_99FE0((__int64)(v4 + 1), v7, v9);
      v10 = *(void (**)())(*v4 + 24LL);
      if ( v10 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v10)(v4);
      v11 = *((_QWORD **)v3 + 2);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v3 = *(std::__detail::_List_node_base **)v3;
    }
    while ( v2 != v3 );
    v12 = *((std::__detail::_List_node_base **)a1 + 1);
    if ( v3 != v12 )
    {
      do
      {
        v13 = v12;
        v12 = *(std::__detail::_List_node_base **)v12;
        std::__detail::_List_node_base::_M_unhook(v13);
        operator delete(v13, 0x18u);
      }
      while ( v3 != v12 );
      v14 = *((std::__detail::_List_node_base **)a1 + 1);
      while ( v14 != v3 )
      {
        v15 = v14;
        v14 = *(std::__detail::_List_node_base **)v14;
        operator delete(v15, 0x18u);
      }
    }
  }
  operator delete(a1, 0x18u);
}

