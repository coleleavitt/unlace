void __fastcall sub_F8BF0(TView *this)
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
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 k; // rbp
  void *v33; // rdi
  __int64 v34; // r12
  __int64 m; // rbp
  __int64 v36; // r12
  __int64 n; // rbp
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 ii; // r12
  _QWORD *v41; // rbp
  _QWORD **v42; // rbp
  char *v43; // rsi
  __int64 v44; // rbp
  void *v45; // rdi
  _QWORD *v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *j; // rdx
  __int64 v49; // r11
  __int64 v50; // r10
  _QWORD *i; // rdx
  __int64 v52; // r10
  __int64 v53; // r9
  std::__detail::_List_node_base *v54; // [rsp+8h] [rbp-40h]

  *(_QWORD *)this = &unk_23AD30;
  *((_QWORD *)this + 9) = &off_23B000;
  *((_QWORD *)this + 20) = &unk_23B048;
  *((_QWORD *)this + 13) = &unk_23B018;
  sub_166890();
  v2 = *((std::__detail::_List_node_base **)this + 144);
  *((_QWORD *)this + 143) = &off_230F98;
  v54 = (TView *)((char *)this + 1152);
  if ( v2 != (TView *)((char *)this + 1152) )
  {
    v3 = (char *)this + 1144;
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
        v47 = (_QWORD *)v6[2];
        if ( (unsigned __int64)v3 >= v8 )
          break;
        v7 = (__int64)v6;
        v6 = (_QWORD *)v6[2];
      }
      for ( i = (_QWORD *)v6[3]; i; i = (_QWORD *)i[2] )
      {
        while ( 1 )
        {
          v52 = i[3];
          if ( (unsigned __int64)v3 < i[4] )
            break;
          i = (_QWORD *)i[3];
          if ( !v52 )
            goto LABEL_92;
        }
        v7 = (__int64)i;
      }
LABEL_92:
      while ( v47 )
      {
        while ( 1 )
        {
          v53 = v47[3];
          if ( v47[4] >= (unsigned __int64)v3 )
            break;
          v47 = (_QWORD *)v47[3];
          if ( !v53 )
            goto LABEL_95;
        }
        v6 = v47;
        v47 = (_QWORD *)v47[2];
      }
LABEL_95:
      v9 = v7;
      v7 = (__int64)v6;
LABEL_10:
      sub_99FE0((__int64)(v4 + 1), v7, v9);
      v10 = *(void (**)())(*v4 + 24LL);
      if ( v10 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v10)(v4);
      v11 = *((_QWORD **)v2 + 2);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v2 = *(std::__detail::_List_node_base **)v2;
    }
    while ( v54 != v2 );
    v12 = *((std::__detail::_List_node_base **)this + 144);
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
      v14 = *((std::__detail::_List_node_base **)this + 144);
      while ( v14 != v2 )
      {
        v15 = v14;
        v14 = *(std::__detail::_List_node_base **)v14;
        operator delete(v15, 0x18u);
      }
    }
  }
  *((_QWORD *)this + 140) = &off_22F2F8;
  v16 = (char *)this + 1048;
  sub_8EA40((_QWORD *)this + 140);
  *((_QWORD *)this + 137) = &off_22F2F8;
  sub_8EA40((_QWORD *)this + 137);
  *((_QWORD *)this + 134) = &off_22F2F8;
  sub_8EA40((_QWORD *)this + 134);
  v17 = *((std::__detail::_List_node_base **)this + 132);
  *((_QWORD *)this + 131) = &off_230F58;
  if ( v17 != (TView *)((char *)this + 1056) )
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
        v46 = (_QWORD *)v20[2];
        if ( (unsigned __int64)v16 >= v22 )
          break;
        v21 = (__int64)v20;
        v20 = (_QWORD *)v20[2];
      }
      for ( j = (_QWORD *)v20[3]; j; j = (_QWORD *)j[2] )
      {
        while ( 1 )
        {
          v49 = j[3];
          if ( (unsigned __int64)v16 < j[4] )
            break;
          j = (_QWORD *)j[3];
          if ( !v49 )
            goto LABEL_82;
        }
        v21 = (__int64)j;
      }
LABEL_82:
      while ( v46 )
      {
        while ( 1 )
        {
          v50 = v46[3];
          if ( v46[4] >= (unsigned __int64)v16 )
            break;
          v46 = (_QWORD *)v46[3];
          if ( !v50 )
            goto LABEL_85;
        }
        v20 = v46;
        v46 = (_QWORD *)v46[2];
      }
LABEL_85:
      v23 = v21;
      v21 = (__int64)v20;
LABEL_27:
      sub_99FE0((__int64)(v18 + 1), v21, v23);
      v24 = *(void (**)())(*v18 + 24LL);
      if ( v24 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v24)(v18);
      v25 = *((_QWORD **)v17 + 2);
      if ( v25 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
      v17 = *(std::__detail::_List_node_base **)v17;
    }
    while ( (TView *)((char *)this + 1056) != v17 );
    v26 = *((std::__detail::_List_node_base **)this + 132);
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
      v28 = *((std::__detail::_List_node_base **)this + 132);
      while ( v28 != v17 )
      {
        v29 = v28;
        v28 = *(std::__detail::_List_node_base **)v28;
        operator delete(v29, 0x18u);
      }
    }
  }
  *((_QWORD *)this + 128) = &off_22F2F8;
  sub_8EA40((_QWORD *)this + 128);
  *((_QWORD *)this + 125) = &off_230F18;
  sub_F70F0((_QWORD *)this + 125);
  if ( *((_QWORD *)this + 117) )
  {
    *((_QWORD *)this + 118) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 103) )
  {
    *((_QWORD *)this + 104) = 0;
    qfree();
  }
  v30 = *((_QWORD *)this + 100);
  v31 = *((_QWORD *)this + 99);
  if ( v30 )
  {
    for ( k = 0; k != v30; ++k )
    {
      v33 = *(void **)(v31 + 8 * k);
      if ( v33 )
      {
        operator delete(v33, 0x18u);
        v31 = *((_QWORD *)this + 99);
      }
    }
  }
  if ( v31 )
  {
    *((_QWORD *)this + 100) = 0;
    qfree();
  }
  *((_QWORD *)this + 89) = &off_22F2F8;
  sub_8EA40((_QWORD *)this + 89);
  if ( *((_QWORD *)this + 85) )
  {
    v34 = *((_QWORD *)this + 86);
    if ( v34 )
    {
      for ( m = 0; m != v34; ++m )
        qfree();
    }
    *((_QWORD *)this + 86) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 81) )
  {
    v36 = *((_QWORD *)this + 82);
    if ( v36 )
    {
      for ( n = 0; n != v36; ++n )
        qfree();
    }
    *((_QWORD *)this + 82) = 0;
    qfree();
  }
  *((_QWORD *)this + 78) = &off_22F2F8;
  sub_8EA40((_QWORD *)this + 78);
  v38 = *((_QWORD *)this + 74);
  if ( v38 )
  {
    v39 = *((_QWORD *)this + 75);
    if ( v39 )
    {
      for ( ii = 0; ii != v39; ++ii )
      {
        v41 = (_QWORD *)(v38 + 80 * ii);
        if ( v41[4] )
        {
          v41[5] = 0;
          qfree();
        }
        if ( v41[1] )
        {
          v41[2] = 0;
          qfree();
        }
        v38 = *((_QWORD *)this + 74);
      }
    }
    *((_QWORD *)this + 75) = 0;
    qfree();
  }
  sub_15CDB0((char *)this + 440);
  if ( *((_QWORD *)this + 32) )
    qfree();
  sub_F28F0((_QWORD *)this + 20);
  v42 = *((_QWORD ***)this + 17);
  *((_QWORD *)this + 13) = &off_22F558;
  if ( v42 == (_QWORD **)((char *)this + 120) )
  {
    v43 = (char *)this + 120;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(*v42[4] + 32LL))(v42[4], (char *)this + 104);
      v42 = (_QWORD **)std::_Rb_tree_increment();
    }
    while ( (_QWORD **)((char *)this + 120) != v42 );
    v43 = *((char **)this + 17);
  }
  sub_99FE0((__int64)this + 112, (__int64)v43, (__int64)this + 120);
  v44 = *((_QWORD *)this + 16);
  while ( v44 )
  {
    sub_F4E30(*(_QWORD **)(v44 + 24));
    v45 = (void *)v44;
    v44 = *(_QWORD *)(v44 + 16);
    operator delete(v45, 0x28u);
  }
  sub_177550((char *)this + 80);
  TView::~TView(this);
}

