void __fastcall sub_90B20(_QWORD *a1, __int64 a2, void (*a3)())
{
  _QWORD *v3; // r13
  std::__detail::_List_node_base *v4; // r15
  std::__detail::_List_node_base *v6; // r13
  _QWORD *v7; // r15
  void (*v8)(); // rax
  void (*v9)(); // rdi
  void (*v10)(); // r12
  void (*v11)(); // r14
  void (*v12)(); // rbx
  unsigned __int64 v13; // rax
  bool v14; // al
  void (*v15)(); // rax
  __int64 v16; // rdi
  std::__detail::_List_node_base *v17; // rbx
  std::__detail::_List_node_base *v18; // r15
  std::__detail::_List_node_base *v19; // rbp
  std::__detail::_List_node_base *v20; // rbx
  std::__detail::_List_node_base *v21; // rdi
  std::__detail::_List_node_base *v22; // r12
  void (*v23)(); // rcx
  void (*v24)(); // r8
  void (*v25)(); // rsi
  _QWORD *v26; // r13
  __int64 v27; // rax
  _QWORD *v28; // rbp
  void (*v29)(); // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // r14
  _QWORD *v33; // r15
  unsigned __int64 v34; // rax
  bool v35; // al
  void (*v36)(); // rax
  __int64 v37; // rdi
  std::__detail::_List_node_base *v38; // rax
  std::__detail::_List_node_base *v39; // r12
  std::__detail::_List_node_base *v40; // rbx
  std::__detail::_List_node_base *v41; // rbp
  std::__detail::_List_node_base *v42; // rbx
  std::__detail::_List_node_base *v43; // rdi
  void (*v44)(); // rax
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rbx
  void *v50; // rax
  _QWORD *i; // rax
  __int64 v52; // r11
  __int64 v53; // r10
  void *v54; // rax
  std::__detail::_List_node_base *v55; // [rsp+0h] [rbp-68h]
  std::__detail::_List_node_base *v56; // [rsp+8h] [rbp-60h]
  _QWORD *v57; // [rsp+10h] [rbp-58h]
  std::__detail::_List_node_base *v58; // [rsp+18h] [rbp-50h]
  _QWORD *v59; // [rsp+20h] [rbp-48h]

  v3 = a1;
  v4 = (std::__detail::_List_node_base *)a1[7];
  *a1 = &unk_235738;
  a1[6] = &off_22E238;
  if ( v4 == (std::__detail::_List_node_base *)(a1 + 7) )
    goto LABEL_23;
  v58 = (std::__detail::_List_node_base *)(a1 + 7);
  v6 = v4;
  v57 = a1 + 6;
  do
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 2) + 16LL))(*((_QWORD *)v6 + 2));
    v8 = *(void (**)())(*v7 + 16LL);
    if ( v8 == nullsub_1 )
    {
      v9 = (void (*)())v7[3];
      v10 = (void (*)())(v7 + 2);
      v11 = (void (*)())(v7 + 2);
      if ( !v9 )
        goto LABEL_79;
    }
    else
    {
      v10 = (void (*)())(v7 + 2);
      ((void (__fastcall *)(_QWORD *))v8)(v7);
      v9 = (void (*)())v7[3];
      v11 = (void (*)())(v7 + 2);
      if ( !v9 )
      {
LABEL_79:
        v14 = 1;
LABEL_11:
        if ( (void (*)())v7[4] == v11 && v14 )
          goto LABEL_13;
        goto LABEL_14;
      }
    }
    v12 = v9;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 + 4);
        if ( v13 >= (unsigned __int64)v57 )
          break;
        v12 = *((void (**)())v12 + 3);
        if ( !v12 )
          goto LABEL_10;
      }
      a3 = *((void (**)())v12 + 2);
      if ( (unsigned __int64)v57 >= v13 )
        break;
      v11 = v12;
      v12 = *((void (**)())v12 + 2);
      if ( !a3 )
      {
LABEL_10:
        v14 = v10 == v11;
        goto LABEL_11;
      }
    }
    v44 = *((void (**)())v12 + 3);
    if ( v44 )
    {
      do
      {
        while ( 1 )
        {
          v45 = *((_QWORD *)v44 + 2);
          v46 = *((_QWORD *)v44 + 3);
          if ( (unsigned __int64)v57 < *((_QWORD *)v44 + 4) )
            break;
          v44 = *((void (**)())v44 + 3);
          if ( !v46 )
            goto LABEL_51;
        }
        v11 = v44;
        v44 = *((void (**)())v44 + 2);
      }
      while ( v45 );
    }
LABEL_51:
    if ( a3 )
    {
      do
      {
        while ( 1 )
        {
          v47 = *((_QWORD *)a3 + 2);
          v48 = *((_QWORD *)a3 + 3);
          if ( *((_QWORD *)a3 + 4) >= (unsigned __int64)v57 )
            break;
          a3 = *((void (**)())a3 + 3);
          if ( !v48 )
            goto LABEL_56;
        }
        v12 = a3;
        a3 = *((void (**)())a3 + 2);
      }
      while ( v47 );
    }
LABEL_56:
    if ( (void (*)())v7[4] == v12 && v10 == v11 )
    {
LABEL_13:
      sub_8E790(v9);
      v7[3] = 0;
      v7[4] = v10;
      v7[5] = v10;
      v7[6] = 0;
      goto LABEL_14;
    }
    if ( v11 != v12 )
    {
      do
      {
        v49 = std::_Rb_tree_increment();
        v50 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v50, 0x28u);
        --v7[6];
      }
      while ( (void (*)())v49 != v11 );
    }
LABEL_14:
    v15 = *(void (**)())(*v7 + 24LL);
    if ( v15 != nullsub_2 )
      ((void (__fastcall *)(_QWORD *))v15)(v7);
    v16 = *((_QWORD *)v6 + 2);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v6 = *(std::__detail::_List_node_base **)v6;
  }
  while ( v58 != v6 );
  v17 = (std::__detail::_List_node_base *)a1[7];
  v18 = v6;
  v3 = a1;
  if ( v18 != v17 )
  {
    do
    {
      v19 = v17;
      v17 = *(std::__detail::_List_node_base **)v17;
      std::__detail::_List_node_base::_M_unhook(v19);
      operator delete(v19, 0x18u);
    }
    while ( v18 != v17 );
    v20 = (std::__detail::_List_node_base *)v3[7];
    while ( v20 != v18 )
    {
      v21 = v20;
      v20 = *(std::__detail::_List_node_base **)v20;
      operator delete(v21, 0x18u);
    }
  }
LABEL_23:
  v22 = (std::__detail::_List_node_base *)v3[4];
  v23 = (void (*)())(v3 + 4);
  v3[3] = &off_22E238;
  v24 = nullsub_1;
  v25 = nullsub_2;
  if ( v22 == (std::__detail::_List_node_base *)(v3 + 4) )
    return;
  v56 = (std::__detail::_List_node_base *)(v3 + 4);
  v55 = v22;
  v59 = v3;
  v26 = v3 + 3;
  while ( 2 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, void (*)(), void (*)(), void (*)(), void (*)()))(**((_QWORD **)v55 + 2)
                                                                                            + 16LL))(
            *((_QWORD *)v55 + 2),
            v25,
            a3,
            v23,
            v24);
    a3 = nullsub_1;
    v28 = (_QWORD *)v27;
    v29 = *(void (**)())(*(_QWORD *)v27 + 16LL);
    if ( v29 != nullsub_1 )
    {
      v31 = v28 + 2;
      ((void (__fastcall *)(_QWORD *))v29)(v28);
      v30 = (_QWORD *)v28[3];
      v32 = v28 + 2;
      if ( v30 )
        goto LABEL_27;
LABEL_77:
      v35 = 1;
LABEL_33:
      if ( (_QWORD *)v28[4] == v32 && v35 )
        goto LABEL_35;
      goto LABEL_36;
    }
    v30 = (_QWORD *)v28[3];
    v31 = v28 + 2;
    v32 = v28 + 2;
    if ( !v30 )
      goto LABEL_77;
LABEL_27:
    v33 = v30;
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = v33[4];
        if ( v34 >= (unsigned __int64)v26 )
          break;
        v33 = (_QWORD *)v33[3];
        if ( !v33 )
          goto LABEL_32;
      }
      v25 = (void (*)())v33[2];
      if ( (unsigned __int64)v26 >= v34 )
        break;
      v32 = v33;
      v33 = (_QWORD *)v33[2];
      if ( !v25 )
      {
LABEL_32:
        v35 = v31 == v32;
        goto LABEL_33;
      }
    }
    for ( i = (_QWORD *)v33[3]; i; i = (_QWORD *)i[2] )
    {
      while ( 1 )
      {
        v52 = i[3];
        if ( (unsigned __int64)v26 < i[4] )
          break;
        i = (_QWORD *)i[3];
        if ( !v52 )
          goto LABEL_65;
      }
      v32 = i;
    }
LABEL_65:
    while ( v25 )
    {
      while ( 1 )
      {
        v53 = *((_QWORD *)v25 + 3);
        if ( *((_QWORD *)v25 + 4) >= (unsigned __int64)v26 )
          break;
        v25 = *((void (**)())v25 + 3);
        if ( !v53 )
          goto LABEL_68;
      }
      v33 = v25;
      v25 = *((void (**)())v25 + 2);
    }
LABEL_68:
    if ( (_QWORD *)v28[4] == v33 && v31 == v32 )
    {
LABEL_35:
      sub_8E790(v30);
      v28[3] = 0;
      v28[4] = v31;
      v28[5] = v31;
      v28[6] = 0;
    }
    else
    {
      while ( v33 != v32 )
      {
        v33 = (_QWORD *)std::_Rb_tree_increment();
        v54 = (void *)std::_Rb_tree_rebalance_for_erase();
        v25 = (void (*)())&qword_28;
        operator delete(v54, 0x28u);
        --v28[6];
      }
    }
LABEL_36:
    v23 = nullsub_2;
    v36 = *(void (**)())(*v28 + 24LL);
    if ( v36 != nullsub_2 )
      ((void (__fastcall *)(_QWORD *))v36)(v28);
    v37 = *((_QWORD *)v55 + 2);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    v38 = *(std::__detail::_List_node_base **)v55;
    v55 = v38;
    if ( v56 != v38 )
      continue;
    break;
  }
  v39 = v38;
  v40 = (std::__detail::_List_node_base *)v59[4];
  if ( v38 != v40 )
  {
    do
    {
      v41 = v40;
      v40 = *(std::__detail::_List_node_base **)v40;
      std::__detail::_List_node_base::_M_unhook(v41);
      operator delete(v41, 0x18u);
    }
    while ( v39 != v40 );
    v42 = (std::__detail::_List_node_base *)v59[4];
    while ( v42 != v39 )
    {
      v43 = v42;
      v42 = *(std::__detail::_List_node_base **)v42;
      operator delete(v43, 0x18u);
    }
  }
}

