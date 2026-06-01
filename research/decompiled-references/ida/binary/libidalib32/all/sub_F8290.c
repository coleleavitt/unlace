void __fastcall sub_F8290(char *a1)
{
  std::__detail::_List_node_base *v2; // rbx
  char *v3; // r15
  _QWORD *v4; // r14
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
  char *v16; // rbx
  char *v17; // r15
  _QWORD *v18; // r14
  void (*v19)(); // rax
  _QWORD *v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  void (*v24)(); // rax
  _QWORD *v25; // rdi
  std::__detail::_List_node_base *v26; // rbp
  std::__detail::_List_node_base *v27; // r12
  char *v28; // rbp
  char *v29; // rdi
  char *v30; // rbx
  char *v31; // r15
  _QWORD *v32; // r14
  void (*v33)(); // rax
  _QWORD *v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  void (*v38)(); // rax
  _QWORD *v39; // rdi
  std::__detail::_List_node_base *v40; // rbp
  std::__detail::_List_node_base *v41; // r12
  char *v42; // rbp
  char *v43; // rdi
  _QWORD *v44; // rcx
  _QWORD *v45; // rcx
  _QWORD *v46; // rcx
  _QWORD *k; // rdx
  __int64 v48; // r10
  __int64 v49; // r9
  _QWORD *j; // rdx
  __int64 v51; // r11
  __int64 v52; // r10
  _QWORD *i; // rdx
  __int64 v54; // r10
  __int64 v55; // r9
  std::__detail::_List_node_base *v56; // [rsp+8h] [rbp-40h]

  v2 = *((std::__detail::_List_node_base **)a1 + 10);
  *((_QWORD *)a1 + 9) = &off_22FF98;
  v56 = (std::__detail::_List_node_base *)(a1 + 80);
  if ( v2 != (std::__detail::_List_node_base *)(a1 + 80) )
  {
    v3 = a1 + 72;
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
        v46 = (_QWORD *)v6[2];
        if ( (unsigned __int64)v3 >= v8 )
          break;
        v7 = (__int64)v6;
        v6 = (_QWORD *)v6[2];
      }
      for ( i = (_QWORD *)v6[3]; i; i = (_QWORD *)i[2] )
      {
        while ( 1 )
        {
          v54 = i[3];
          if ( (unsigned __int64)v3 < i[4] )
            break;
          i = (_QWORD *)i[3];
          if ( !v54 )
            goto LABEL_84;
        }
        v7 = (__int64)i;
      }
LABEL_84:
      while ( v46 )
      {
        while ( 1 )
        {
          v55 = v46[3];
          if ( v46[4] >= (unsigned __int64)v3 )
            break;
          v46 = (_QWORD *)v46[3];
          if ( !v55 )
            goto LABEL_87;
        }
        v6 = v46;
        v46 = (_QWORD *)v46[2];
      }
LABEL_87:
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
    while ( v56 != v2 );
    v12 = *((std::__detail::_List_node_base **)a1 + 10);
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
      v14 = *((std::__detail::_List_node_base **)a1 + 10);
      while ( v14 != v2 )
      {
        v15 = v14;
        v14 = *(std::__detail::_List_node_base **)v14;
        operator delete(v15, 0x18u);
      }
    }
  }
  v16 = *((char **)a1 + 7);
  v17 = a1 + 48;
  *((_QWORD *)a1 + 6) = &off_22FF18;
  if ( v16 != a1 + 56 )
  {
    do
    {
      v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v16 + 2) + 16LL))(*((_QWORD **)v16 + 2));
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
          if ( v22 >= (unsigned __int64)v17 )
            break;
          v20 = (_QWORD *)v20[3];
          if ( !v20 )
            goto LABEL_26;
        }
        v45 = (_QWORD *)v20[2];
        if ( (unsigned __int64)v17 >= v22 )
          break;
        v21 = (__int64)v20;
        v20 = (_QWORD *)v20[2];
      }
      for ( j = (_QWORD *)v20[3]; j; j = (_QWORD *)j[2] )
      {
        while ( 1 )
        {
          v51 = j[3];
          if ( (unsigned __int64)v17 < j[4] )
            break;
          j = (_QWORD *)j[3];
          if ( !v51 )
            goto LABEL_74;
        }
        v21 = (__int64)j;
      }
LABEL_74:
      while ( v45 )
      {
        while ( 1 )
        {
          v52 = v45[3];
          if ( v45[4] >= (unsigned __int64)v17 )
            break;
          v45 = (_QWORD *)v45[3];
          if ( !v52 )
            goto LABEL_77;
        }
        v20 = v45;
        v45 = (_QWORD *)v45[2];
      }
LABEL_77:
      v23 = v21;
      v21 = (__int64)v20;
LABEL_27:
      sub_99EA0((__int64)(v18 + 1), v21, v23);
      v24 = *(void (**)())(*v18 + 24LL);
      if ( v24 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v24)(v18);
      v25 = *((_QWORD **)v16 + 2);
      if ( v25 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
      v16 = *(char **)v16;
    }
    while ( a1 + 56 != v16 );
    v26 = *((std::__detail::_List_node_base **)a1 + 7);
    if ( v16 != (char *)v26 )
    {
      do
      {
        v27 = v26;
        v26 = *(std::__detail::_List_node_base **)v26;
        std::__detail::_List_node_base::_M_unhook(v27);
        operator delete(v27, 0x18u);
      }
      while ( v16 != (char *)v26 );
      v28 = *((char **)a1 + 7);
      while ( v28 != v16 )
      {
        v29 = v28;
        v28 = *(char **)v28;
        operator delete(v29, 0x18u);
      }
    }
  }
  v30 = *((char **)a1 + 4);
  v31 = a1 + 24;
  *((_QWORD *)a1 + 3) = &off_22FF18;
  if ( v30 != a1 + 32 )
  {
    do
    {
      v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v30 + 2) + 16LL))(*((_QWORD **)v30 + 2));
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
          if ( v36 >= (unsigned __int64)v31 )
            break;
          v34 = (_QWORD *)v34[3];
          if ( !v34 )
            goto LABEL_43;
        }
        v44 = (_QWORD *)v34[2];
        if ( (unsigned __int64)v31 >= v36 )
          break;
        v35 = (__int64)v34;
        v34 = (_QWORD *)v34[2];
      }
      for ( k = (_QWORD *)v34[3]; k; k = (_QWORD *)k[2] )
      {
        while ( 1 )
        {
          v48 = k[3];
          if ( (unsigned __int64)v31 < k[4] )
            break;
          k = (_QWORD *)k[3];
          if ( !v48 )
            goto LABEL_64;
        }
        v35 = (__int64)k;
      }
LABEL_64:
      while ( v44 )
      {
        while ( 1 )
        {
          v49 = v44[3];
          if ( v44[4] >= (unsigned __int64)v31 )
            break;
          v44 = (_QWORD *)v44[3];
          if ( !v49 )
            goto LABEL_67;
        }
        v34 = v44;
        v44 = (_QWORD *)v44[2];
      }
LABEL_67:
      v37 = v35;
      v35 = (__int64)v34;
LABEL_44:
      sub_99EA0((__int64)(v32 + 1), v35, v37);
      v38 = *(void (**)())(*v32 + 24LL);
      if ( v38 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *))v38)(v32);
      v39 = *((_QWORD **)v30 + 2);
      if ( v39 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
      v30 = *(char **)v30;
    }
    while ( a1 + 32 != v30 );
    v40 = *((std::__detail::_List_node_base **)a1 + 4);
    if ( v30 != (char *)v40 )
    {
      do
      {
        v41 = v40;
        v40 = *(std::__detail::_List_node_base **)v40;
        std::__detail::_List_node_base::_M_unhook(v41);
        operator delete(v41, 0x18u);
      }
      while ( v30 != (char *)v40 );
      v42 = *((char **)a1 + 4);
      while ( v42 != v30 )
      {
        v43 = v42;
        v42 = *(char **)v42;
        operator delete(v43, 0x18u);
      }
    }
  }
  *(_QWORD *)a1 = &off_22FF58;
  sub_F5C70(a1);
}

