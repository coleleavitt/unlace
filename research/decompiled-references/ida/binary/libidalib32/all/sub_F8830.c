void __fastcall sub_F8830(TView *this)
{
  std::__detail::_List_node_base *v2; // rbp
  char *v3; // r15
  _QWORD *v4; // r14
  void (*v5)(); // rax
  _QWORD *v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  void (*v10)(); // rax
  _QWORD *v11; // rdi
  std::__detail::_List_node_base *v12; // r12
  std::__detail::_List_node_base *v13; // r13
  std::__detail::_List_node_base *v14; // r12
  std::__detail::_List_node_base *v15; // rdi
  char *v16; // r15
  std::__detail::_List_node_base *v17; // rbp
  _QWORD *v18; // r14
  void (*v19)(); // rax
  _QWORD *v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  void (*v24)(); // rax
  _QWORD *v25; // rdi
  std::__detail::_List_node_base *v26; // r12
  std::__detail::_List_node_base *v27; // r13
  std::__detail::_List_node_base *v28; // r12
  std::__detail::_List_node_base *v29; // rdi
  char *v30; // r15
  std::__detail::_List_node_base *v31; // rbp
  _QWORD *v32; // r14
  void (*v33)(); // rax
  _QWORD *v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  void (*v38)(); // rax
  _QWORD *v39; // rdi
  std::__detail::_List_node_base *v40; // r12
  std::__detail::_List_node_base *v41; // r13
  std::__detail::_List_node_base *v42; // r12
  std::__detail::_List_node_base *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 m; // rbp
  void *v47; // rdi
  __int64 v48; // r12
  __int64 n; // rbp
  __int64 v50; // r12
  __int64 ii; // rbp
  __int64 v52; // rdi
  __int64 v53; // r13
  __int64 jj; // rbp
  _QWORD *v55; // r12
  _QWORD **v56; // rbp
  char *v57; // rsi
  __int64 v58; // rbp
  void *v59; // rdi
  _QWORD *v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *k; // rdx
  __int64 v64; // r11
  __int64 v65; // r10
  _QWORD *j; // rdx
  __int64 v67; // r11
  __int64 v68; // r10
  _QWORD *i; // rdx
  __int64 v70; // r10
  __int64 v71; // r9
  std::__detail::_List_node_base *v72; // [rsp+8h] [rbp-40h]

  *(_QWORD *)this = &unk_239D30;
  *((_QWORD *)this + 9) = &off_23A000;
  *((_QWORD *)this + 20) = &unk_23A048;
  *((_QWORD *)this + 13) = &unk_23A018;
  sub_165ED0();
  v2 = *((std::__detail::_List_node_base **)this + 143);
  *((_QWORD *)this + 142) = &off_22FED8;
  v72 = (TView *)((char *)this + 1144);
  if ( v2 != (TView *)((char *)this + 1144) )
  {
    v3 = (char *)this + 1136;
    do
    {
      v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v2 + 2) + 16LL))(*((_QWORD **)v2 + 2));
      v5 = *(void (**)())(*v4 + 16LL);
      if ( v5 != nullsub_1 )
        ((void (__fastcall *)(_QWORD *))v5)(v4);
      v6 = (_QWORD *)v4[3];
      v7 = (__int64)(v4 + 2);
      while ( 1 )
      {
        if ( !v6 )
        {
LABEL_9:
          v9 = v7;
          goto LABEL_10;
        }
        while ( 1 )
        {
          v8 = v6[4];
          if ( v8 >= (unsigned __int64)v3 )
            break;
          v6 = (_QWORD *)v6[3];
          if ( !v6 )
            goto LABEL_9;
        }
        v62 = (_QWORD *)v6[2];
        if ( (unsigned __int64)v3 >= v8 )
          break;
        v7 = (__int64)v6;
        v6 = (_QWORD *)v6[2];
      }
      for ( i = (_QWORD *)v6[3]; i; i = (_QWORD *)i[2] )
      {
        while ( 1 )
        {
          v70 = i[3];
          if ( (unsigned __int64)v3 < i[4] )
            break;
          i = (_QWORD *)i[3];
          if ( !v70 )
            goto LABEL_121;
        }
        v7 = (__int64)i;
      }
LABEL_121:
      while ( v62 )
      {
        while ( 1 )
        {
          v71 = v62[3];
          if ( v62[4] >= (unsigned __int64)v3 )
            break;
          v62 = (_QWORD *)v62[3];
          if ( !v71 )
            goto LABEL_124;
        }
        v6 = v62;
        v62 = (_QWORD *)v62[2];
      }
LABEL_124:
      v9 = v7;
      v7 = (__int64)v6;
LABEL_10:
      sub_99EA0((__int64)(v4 + 1), v7, v9);
      v10 = *(void (**)())(*v4 + 24LL);
      if ( v10 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v10)(v4);
      v11 = *((_QWORD **)v2 + 2);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v2 = *(std::__detail::_List_node_base **)v2;
    }
    while ( v72 != v2 );
    v12 = *((std::__detail::_List_node_base **)this + 143);
    if ( v2 != v12 )
    {
      do
      {
        v13 = v12;
        v12 = *(std::__detail::_List_node_base **)v12;
        std::__detail::_List_node_base::_M_unhook(v13);
        operator delete(v13, 0x18u);
      }
      while ( v2 != v12 );
      v14 = *((std::__detail::_List_node_base **)this + 143);
      while ( v14 != v2 )
      {
        v15 = v14;
        v14 = *(std::__detail::_List_node_base **)v14;
        operator delete(v15, 0x18u);
      }
    }
  }
  *((_QWORD *)this + 139) = &off_22E278;
  v16 = (char *)this + 1040;
  sub_8E960((_QWORD *)this + 139);
  *((_QWORD *)this + 136) = &off_22E278;
  sub_8E960((_QWORD *)this + 136);
  *((_QWORD *)this + 133) = &off_22E278;
  sub_8E960((_QWORD *)this + 133);
  v17 = *((std::__detail::_List_node_base **)this + 131);
  *((_QWORD *)this + 130) = &off_22FE98;
  if ( v17 != (TView *)((char *)this + 1048) )
  {
    do
    {
      v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v17 + 2) + 16LL))(*((_QWORD **)v17 + 2));
      v19 = *(void (**)())(*v18 + 16LL);
      if ( v19 != nullsub_1 )
        ((void (__fastcall *)(_QWORD *))v19)(v18);
      v20 = (_QWORD *)v18[3];
      v21 = (__int64)(v18 + 2);
      while ( 1 )
      {
        if ( !v20 )
        {
LABEL_26:
          v23 = v21;
          goto LABEL_27;
        }
        while ( 1 )
        {
          v22 = v20[4];
          if ( v22 >= (unsigned __int64)v16 )
            break;
          v20 = (_QWORD *)v20[3];
          if ( !v20 )
            goto LABEL_26;
        }
        v61 = (_QWORD *)v20[2];
        if ( (unsigned __int64)v16 >= v22 )
          break;
        v21 = (__int64)v20;
        v20 = (_QWORD *)v20[2];
      }
      for ( j = (_QWORD *)v20[3]; j; j = (_QWORD *)j[2] )
      {
        while ( 1 )
        {
          v67 = j[3];
          if ( (unsigned __int64)v16 < j[4] )
            break;
          j = (_QWORD *)j[3];
          if ( !v67 )
            goto LABEL_111;
        }
        v21 = (__int64)j;
      }
LABEL_111:
      while ( v61 )
      {
        while ( 1 )
        {
          v68 = v61[3];
          if ( v61[4] >= (unsigned __int64)v16 )
            break;
          v61 = (_QWORD *)v61[3];
          if ( !v68 )
            goto LABEL_114;
        }
        v20 = v61;
        v61 = (_QWORD *)v61[2];
      }
LABEL_114:
      v23 = v21;
      v21 = (__int64)v20;
LABEL_27:
      sub_99EA0((__int64)(v18 + 1), v21, v23);
      v24 = *(void (**)())(*v18 + 24LL);
      if ( v24 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v24)(v18);
      v25 = *((_QWORD **)v17 + 2);
      if ( v25 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
      v17 = *(std::__detail::_List_node_base **)v17;
    }
    while ( (TView *)((char *)this + 1048) != v17 );
    v26 = *((std::__detail::_List_node_base **)this + 131);
    if ( v17 != v26 )
    {
      do
      {
        v27 = v26;
        v26 = *(std::__detail::_List_node_base **)v26;
        std::__detail::_List_node_base::_M_unhook(v27);
        operator delete(v27, 0x18u);
      }
      while ( v17 != v26 );
      v28 = *((std::__detail::_List_node_base **)this + 131);
      while ( v28 != v17 )
      {
        v29 = v28;
        v28 = *(std::__detail::_List_node_base **)v28;
        operator delete(v29, 0x18u);
      }
    }
  }
  *((_QWORD *)this + 127) = &off_22E278;
  v30 = (char *)this + 992;
  sub_8E960((_QWORD *)this + 127);
  v31 = *((std::__detail::_List_node_base **)this + 125);
  *((_QWORD *)this + 124) = &off_22FE58;
  if ( v31 != (TView *)((char *)this + 1000) )
  {
    do
    {
      v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v31 + 2) + 16LL))(*((_QWORD **)v31 + 2));
      v33 = *(void (**)())(*v32 + 16LL);
      if ( v33 != nullsub_1 )
        ((void (__fastcall *)(_QWORD *))v33)(v32);
      v34 = (_QWORD *)v32[3];
      v35 = (__int64)(v32 + 2);
      while ( 1 )
      {
        if ( !v34 )
        {
LABEL_43:
          v37 = v35;
          goto LABEL_44;
        }
        while ( 1 )
        {
          v36 = v34[4];
          if ( v36 >= (unsigned __int64)v30 )
            break;
          v34 = (_QWORD *)v34[3];
          if ( !v34 )
            goto LABEL_43;
        }
        v60 = (_QWORD *)v34[2];
        if ( (unsigned __int64)v30 >= v36 )
          break;
        v35 = (__int64)v34;
        v34 = (_QWORD *)v34[2];
      }
      for ( k = (_QWORD *)v34[3]; k; k = (_QWORD *)k[2] )
      {
        while ( 1 )
        {
          v64 = k[3];
          if ( (unsigned __int64)v30 < k[4] )
            break;
          k = (_QWORD *)k[3];
          if ( !v64 )
            goto LABEL_101;
        }
        v35 = (__int64)k;
      }
LABEL_101:
      while ( v60 )
      {
        while ( 1 )
        {
          v65 = v60[3];
          if ( v60[4] >= (unsigned __int64)v30 )
            break;
          v60 = (_QWORD *)v60[3];
          if ( !v65 )
            goto LABEL_104;
        }
        v34 = v60;
        v60 = (_QWORD *)v60[2];
      }
LABEL_104:
      v37 = v35;
      v35 = (__int64)v34;
LABEL_44:
      sub_99EA0((__int64)(v32 + 1), v35, v37);
      v38 = *(void (**)())(*v32 + 24LL);
      if ( v38 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v38)(v32);
      v39 = *((_QWORD **)v31 + 2);
      if ( v39 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
      v31 = *(std::__detail::_List_node_base **)v31;
    }
    while ( (TView *)((char *)this + 1000) != v31 );
    v40 = *((std::__detail::_List_node_base **)this + 125);
    if ( v31 != v40 )
    {
      do
      {
        v41 = v40;
        v40 = *(std::__detail::_List_node_base **)v40;
        std::__detail::_List_node_base::_M_unhook(v41);
        operator delete(v41, 0x18u);
      }
      while ( v31 != v40 );
      v42 = *((std::__detail::_List_node_base **)this + 125);
      while ( v42 != v31 )
      {
        v43 = v42;
        v42 = *(std::__detail::_List_node_base **)v42;
        operator delete(v43, 0x18u);
      }
    }
  }
  if ( *((_QWORD *)this + 116) )
  {
    *((_QWORD *)this + 117) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 102) )
  {
    *((_QWORD *)this + 103) = 0;
    qfree();
  }
  v44 = *((_QWORD *)this + 99);
  v45 = *((_QWORD *)this + 98);
  if ( v44 )
  {
    for ( m = 0; m != v44; ++m )
    {
      v47 = *(void **)(v45 + 8 * m);
      if ( v47 )
      {
        operator delete(v47, 0x18u);
        v45 = *((_QWORD *)this + 98);
      }
    }
  }
  if ( v45 )
  {
    *((_QWORD *)this + 99) = 0;
    qfree();
  }
  *((_QWORD *)this + 89) = &off_22E278;
  sub_8E960((_QWORD *)this + 89);
  if ( *((_QWORD *)this + 85) )
  {
    v48 = *((_QWORD *)this + 86);
    if ( v48 )
    {
      for ( n = 0; n != v48; ++n )
        qfree();
    }
    *((_QWORD *)this + 86) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 81) )
  {
    v50 = *((_QWORD *)this + 82);
    if ( v50 )
    {
      for ( ii = 0; ii != v50; ++ii )
        qfree();
    }
    *((_QWORD *)this + 82) = 0;
    qfree();
  }
  *((_QWORD *)this + 78) = &off_22E278;
  sub_8E960((_QWORD *)this + 78);
  v52 = *((_QWORD *)this + 74);
  if ( v52 )
  {
    v53 = *((_QWORD *)this + 75);
    if ( v53 )
    {
      for ( jj = 0; jj != v53; ++jj )
      {
        v55 = (_QWORD *)(v52 + 72 * jj);
        if ( v55[4] )
        {
          v55[5] = 0;
          qfree();
        }
        if ( v55[1] )
        {
          v55[2] = 0;
          qfree();
        }
        v52 = *((_QWORD *)this + 74);
      }
    }
    *((_QWORD *)this + 75) = 0;
    qfree();
  }
  sub_15C4E0((char *)this + 440);
  if ( *((_QWORD *)this + 32) )
    qfree();
  sub_F1A10((_QWORD *)this + 20);
  v56 = *((_QWORD ***)this + 17);
  *((_QWORD *)this + 13) = &off_22E4D8;
  if ( v56 == (_QWORD **)((char *)this + 120) )
  {
    v57 = (char *)this + 120;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(*v56[4] + 32LL))(v56[4], (char *)this + 104);
      v56 = (_QWORD **)std::_Rb_tree_increment();
    }
    while ( (_QWORD **)((char *)this + 120) != v56 );
    v57 = *((char **)this + 17);
  }
  sub_99EA0((__int64)this + 112, (__int64)v57, (__int64)this + 120);
  v58 = *((_QWORD *)this + 16);
  while ( v58 )
  {
    sub_F4040(*(_QWORD **)(v58 + 24));
    v59 = (void *)v58;
    v58 = *(_QWORD *)(v58 + 16);
    operator delete(v59, 0x28u);
  }
  sub_176A50((char *)this + 80);
  TView::~TView(this);
}

