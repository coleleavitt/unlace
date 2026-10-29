void __fastcall sub_18F500(_QWORD *a1)
{
  std::__detail::_List_node_base *v1; // r12
  _QWORD *v3; // r14
  void (*v4)(); // rax
  _QWORD **v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rsi
  void *v11; // rdi
  void (*v12)(); // rax
  __int64 v13; // rdi
  std::__detail::_List_node_base *v14; // rbx
  std::__detail::_List_node_base *v15; // rbp
  std::__detail::_List_node_base *v16; // rbx
  std::__detail::_List_node_base *v17; // rdi
  _QWORD *i; // rax
  __int64 v19; // r11
  __int64 v20; // r10
  void *v21; // rax
  _QWORD *v22; // [rsp+8h] [rbp-50h]
  std::__detail::_List_node_base *v23; // [rsp+10h] [rbp-48h]
  void *v24; // [rsp+18h] [rbp-40h]
  _QWORD **v25; // [rsp+18h] [rbp-40h]

  v1 = (std::__detail::_List_node_base *)a1[1];
  *a1 = &off_234DF0;
  v23 = (std::__detail::_List_node_base *)(a1 + 1);
  if ( v1 != (std::__detail::_List_node_base *)(a1 + 1) )
  {
    do
    {
      v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(**((_QWORD **)v1 + 2) + 16LL))(*((_QWORD *)v1 + 2));
      v4 = *(void (**)())(*v3 + 16LL);
      if ( v4 != nullsub_1 )
        ((void (__fastcall *)(_QWORD *))v4)(v3);
      v5 = (_QWORD **)v3[3];
      v6 = (_QWORD *)v3[4];
      v22 = v3 + 2;
      if ( v5 )
      {
        v7 = v3 + 2;
        v8 = (_QWORD *)v3[3];
        while ( 1 )
        {
          while ( 1 )
          {
            v9 = v8[4];
            if ( v9 >= (unsigned __int64)a1 )
              break;
            v8 = (_QWORD *)v8[3];
            if ( !v8 )
              goto LABEL_10;
          }
          v10 = (_QWORD *)v8[2];
          if ( (unsigned __int64)a1 >= v9 )
            break;
          v7 = v8;
          v8 = (_QWORD *)v8[2];
          if ( !v10 )
          {
LABEL_10:
            if ( v22 == v7 && v7 == v6 )
            {
              do
              {
LABEL_12:
                v24 = v5;
                sub_18F320(v5[3]);
                v11 = v24;
                v25 = *((_QWORD ***)v24 + 2);
                operator delete(v11, 0x28u);
                v5 = v25;
              }
              while ( v25 );
              goto LABEL_13;
            }
            goto LABEL_14;
          }
        }
        for ( i = (_QWORD *)v8[3]; i; i = (_QWORD *)i[3] )
        {
          while ( 1 )
          {
            v19 = i[2];
            if ( (unsigned __int64)a1 >= i[4] )
              break;
            v7 = i;
            i = (_QWORD *)i[2];
            if ( !v19 )
              goto LABEL_28;
          }
        }
LABEL_28:
        while ( v10 )
        {
          while ( 1 )
          {
            v20 = v10[2];
            if ( v10[4] < (unsigned __int64)a1 )
              break;
            v8 = v10;
            v10 = (_QWORD *)v10[2];
            if ( !v20 )
              goto LABEL_31;
          }
          v10 = (_QWORD *)v10[3];
        }
LABEL_31:
        if ( v6 == v8 && v7 == v22 )
          goto LABEL_12;
        while ( v7 != v8 )
        {
          v8 = (_QWORD *)std::_Rb_tree_increment();
          v21 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v21, 0x28u);
          --v3[6];
        }
      }
      else if ( v22 == v6 )
      {
LABEL_13:
        v3[3] = 0;
        v3[6] = 0;
        v3[4] = v22;
        v3[5] = v22;
      }
LABEL_14:
      v12 = *(void (**)())(*v3 + 24LL);
      if ( v12 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v12)(v3);
      v13 = *((_QWORD *)v1 + 2);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v1 = *(std::__detail::_List_node_base **)v1;
    }
    while ( v23 != v1 );
    v14 = (std::__detail::_List_node_base *)a1[1];
    if ( v1 != v14 )
    {
      do
      {
        v15 = v14;
        v14 = *(std::__detail::_List_node_base **)v14;
        std::__detail::_List_node_base::_M_unhook(v15);
        operator delete(v15, 0x18u);
      }
      while ( v1 != v14 );
      v16 = (std::__detail::_List_node_base *)a1[1];
      while ( v16 != v1 )
      {
        v17 = v16;
        v16 = *(std::__detail::_List_node_base **)v16;
        operator delete(v17, 0x18u);
      }
    }
  }
}

