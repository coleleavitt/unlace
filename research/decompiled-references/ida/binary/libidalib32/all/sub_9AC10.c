void __fastcall sub_9AC10(TGroup *this)
{
  std::__detail::_List_node_base *v2; // rbx
  char *v3; // r15
  _QWORD *v4; // r12
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
  _QWORD **v16; // rbx
  char *v17; // rsi
  __int64 v18; // rbx
  void *v19; // rdi
  _QWORD **v20; // rbx
  char *v21; // rsi
  __int64 v22; // rbx
  void *v23; // rdi
  _QWORD **v24; // rbx
  char *v25; // rsi
  __int64 v26; // rbx
  void *v27; // rdi
  _QWORD **v28; // rbx
  char *v29; // rsi
  __int64 v30; // rbx
  void *v31; // rdi
  _QWORD *v32; // rcx
  _QWORD *i; // rdx
  __int64 v34; // r10
  __int64 v35; // r9
  std::__detail::_List_node_base *v36; // [rsp+8h] [rbp-40h]

  v2 = *((std::__detail::_List_node_base **)this + 56);
  *((_QWORD *)this + 16) = off_237660;
  *((_QWORD *)this + 55) = &off_22E508;
  *(_QWORD *)this = &off_237598;
  v36 = (TGroup *)((char *)this + 448);
  if ( v2 != (TGroup *)((char *)this + 448) )
  {
    v3 = (char *)this + 440;
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
        v32 = (_QWORD *)v6[2];
        if ( (unsigned __int64)v3 >= v8 )
          break;
        v7 = (__int64)v6;
        v6 = (_QWORD *)v6[2];
      }
      for ( i = (_QWORD *)v6[3]; i; i = (_QWORD *)i[2] )
      {
        while ( 1 )
        {
          v34 = i[3];
          if ( (unsigned __int64)v3 < i[4] )
            break;
          i = (_QWORD *)i[3];
          if ( !v34 )
            goto LABEL_46;
        }
        v7 = (__int64)i;
      }
LABEL_46:
      while ( v32 )
      {
        while ( 1 )
        {
          v35 = v32[3];
          if ( v32[4] >= (unsigned __int64)v3 )
            break;
          v32 = (_QWORD *)v32[3];
          if ( !v35 )
            goto LABEL_49;
        }
        v6 = v32;
        v32 = (_QWORD *)v32[2];
      }
LABEL_49:
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
    while ( v36 != v2 );
    v12 = *((std::__detail::_List_node_base **)this + 56);
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
      v14 = *((std::__detail::_List_node_base **)this + 56);
      while ( v14 != v2 )
      {
        v15 = v14;
        v14 = *(std::__detail::_List_node_base **)v14;
        operator delete(v15, 0x18u);
      }
    }
  }
  v16 = *((_QWORD ***)this + 47);
  *((_QWORD *)this + 43) = &off_22E4D8;
  v17 = (char *)this + 360;
  if ( v16 != (_QWORD **)((char *)this + 360) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(*v16[4] + 32LL))(v16[4], (char *)this + 344);
      v16 = (_QWORD **)std::_Rb_tree_increment();
    }
    while ( (_QWORD **)((char *)this + 360) != v16 );
    v17 = *((char **)this + 47);
  }
  sub_99EA0((__int64)this + 352, (__int64)v17, (__int64)this + 360);
  v18 = *((_QWORD *)this + 46);
  while ( v18 )
  {
    sub_99890(*(_QWORD **)(v18 + 24));
    v19 = (void *)v18;
    v18 = *(_QWORD *)(v18 + 16);
    operator delete(v19, 0x28u);
  }
  v20 = *((_QWORD ***)this + 37);
  *((_QWORD *)this + 33) = &off_22E4D8;
  v21 = (char *)this + 280;
  if ( v20 != (_QWORD **)((char *)this + 280) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(*v20[4] + 32LL))(v20[4], (char *)this + 264);
      v20 = (_QWORD **)std::_Rb_tree_increment();
    }
    while ( (_QWORD **)((char *)this + 280) != v20 );
    v21 = *((char **)this + 37);
  }
  sub_99EA0((__int64)this + 272, (__int64)v21, (__int64)this + 280);
  v22 = *((_QWORD *)this + 36);
  while ( v22 )
  {
    sub_99890(*(_QWORD **)(v22 + 24));
    v23 = (void *)v22;
    v22 = *(_QWORD *)(v22 + 16);
    operator delete(v23, 0x28u);
  }
  v24 = *((_QWORD ***)this + 27);
  *((_QWORD *)this + 23) = &off_22E4D8;
  v25 = (char *)this + 200;
  if ( v24 != (_QWORD **)((char *)this + 200) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(*v24[4] + 32LL))(v24[4], (char *)this + 184);
      v24 = (_QWORD **)std::_Rb_tree_increment();
    }
    while ( (_QWORD **)((char *)this + 200) != v24 );
    v25 = *((char **)this + 27);
  }
  sub_99EA0((__int64)this + 192, (__int64)v25, (__int64)this + 200);
  v26 = *((_QWORD *)this + 26);
  while ( v26 )
  {
    sub_99890(*(_QWORD **)(v26 + 24));
    v27 = (void *)v26;
    v26 = *(_QWORD *)(v26 + 16);
    operator delete(v27, 0x28u);
  }
  v28 = *((_QWORD ***)this + 20);
  *((_QWORD *)this + 16) = &off_22E4D8;
  v29 = (char *)this + 144;
  if ( v28 != (_QWORD **)((char *)this + 144) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(*v28[4] + 32LL))(v28[4], (char *)this + 128);
      v28 = (_QWORD **)std::_Rb_tree_increment();
    }
    while ( (_QWORD **)((char *)this + 144) != v28 );
    v29 = *((char **)this + 20);
  }
  sub_99EA0((__int64)this + 136, (__int64)v29, (__int64)this + 144);
  v30 = *((_QWORD *)this + 19);
  while ( v30 )
  {
    sub_99890(*(_QWORD **)(v30 + 24));
    v31 = (void *)v30;
    v30 = *(_QWORD *)(v30 + 16);
    operator delete(v31, 0x28u);
  }
  TGroup::~TGroup(this);
}

