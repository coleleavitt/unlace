__int64 __fastcall sub_C5840(unsigned int a1, char a2)
{
  _QWORD *v2; // rax
  int *v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v7; // rax
  int *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  size_t v11; // r15
  __int64 v12; // rax
  void *v13; // rbx
  _QWORD *v14; // r8
  int *v15; // rbx
  int *v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rdx
  void *v19; // rbx
  void *v20; // r8
  __int64 bpt_kernel_interface; // rax
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  __int64 i; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // r13
  _QWORD *v31; // [rsp+8h] [rbp-70h]
  void *v32; // [rsp+8h] [rbp-70h]
  _QWORD *v33; // [rsp+8h] [rbp-70h]
  void *v34; // [rsp+10h] [rbp-68h] BYREF
  __int128 v35; // [rsp+18h] [rbp-60h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  int v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = qword_251510;
    if ( !qword_251510 )
      return 0;
    v3 = &dword_251508;
    do
    {
      while ( 1 )
      {
        v4 = v2[2];
        v5 = v2[3];
        if ( *((_DWORD *)v2 + 8) < a1 )
          break;
        v3 = (int *)v2;
        v2 = (_QWORD *)v2[2];
        if ( !v4 )
          goto LABEL_7;
      }
      v2 = (_QWORD *)v2[3];
    }
    while ( v5 );
LABEL_7:
    if ( v3 == &dword_251508 || a1 < v3[8] )
      return 0;
  }
  v7 = qword_2514D0;
  if ( !qword_2514D0 )
    return 0;
  v8 = &dword_2514C8;
  do
  {
    while ( 1 )
    {
      v9 = v7[2];
      v10 = v7[3];
      if ( *((_DWORD *)v7 + 8) < a1 )
        break;
      v8 = (int *)v7;
      v7 = (_QWORD *)v7[2];
      if ( !v9 )
        goto LABEL_15;
    }
    v7 = (_QWORD *)v7[3];
  }
  while ( v10 );
LABEL_15:
  if ( v8 == &dword_2514C8 || a1 < v8[8] )
    return 0;
  if ( a1 == (unsigned int)getinf() )
    byte_251468 = 0;
  v11 = *((_QWORD *)v8 + 6);
  v34 = nullptr;
  v35 = 0;
  if ( v11 )
  {
    v22 = (void *)qalloc_or_throw();
    v23 = *((const void **)v8 + 5);
    *((_QWORD *)&v35 + 1) = v11;
    v34 = v22;
    memcpy(v22, v23, v11);
    *(_QWORD *)&v35 = v11;
  }
  v36 = *((_QWORD *)v8 + 8);
  v37 = v8[18];
  v12 = std::_Rb_tree_rebalance_for_erase();
  v13 = (void *)v12;
  if ( *(_QWORD *)(v12 + 40) )
  {
    *(_QWORD *)(v12 + 48) = 0;
    qfree();
  }
  operator delete(v13, 0x50u);
  v14 = qword_251490;
  --qword_2514E8;
  if ( qword_251490 )
  {
    v15 = (int *)qword_251490;
    v16 = &dword_251488;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v15[8];
        if ( v17 >= a1 )
          break;
        v15 = *((int **)v15 + 3);
        if ( !v15 )
          goto LABEL_29;
      }
      v18 = *((_QWORD *)v15 + 2);
      if ( a1 >= v17 )
        break;
      v16 = v15;
      v15 = *((int **)v15 + 2);
      if ( !v18 )
      {
LABEL_29:
        if ( v16 != (int *)qword_251498 || v16 != &dword_251488 )
          goto LABEL_35;
        goto LABEL_31;
      }
    }
    for ( i = *((_QWORD *)v15 + 3); i; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(i + 16);
        if ( a1 >= *(_DWORD *)(i + 32) )
          break;
        v16 = (int *)i;
        i = *(_QWORD *)(i + 16);
        if ( !v26 )
          goto LABEL_44;
      }
    }
LABEL_44:
    while ( v18 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(v18 + 16);
        if ( *(_DWORD *)(v18 + 32) < a1 )
          break;
        v15 = (int *)v18;
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v27 )
          goto LABEL_47;
      }
      v18 = *(_QWORD *)(v18 + 24);
    }
LABEL_47:
    if ( v15 != (int *)qword_251498 )
      goto LABEL_53;
    if ( v16 == &dword_251488 )
    {
      do
      {
LABEL_31:
        v31 = v14;
        sub_BCA30((_QWORD *)v14[3]);
        v19 = v31;
        v20 = (void *)v31[2];
        if ( v31[5] )
        {
          v31[6] = 0;
          v32 = v20;
          qfree();
          v20 = v32;
        }
        v33 = v20;
        operator delete(v19, 0x50u);
        v14 = v33;
      }
      while ( v33 );
      goto LABEL_34;
    }
    while ( v15 != v16 )
    {
      v15 = (int *)std::_Rb_tree_increment();
      v28 = std::_Rb_tree_rebalance_for_erase();
      v29 = (void *)v28;
      if ( *(_QWORD *)(v28 + 40) )
      {
        *(_QWORD *)(v28 + 48) = 0;
        qfree();
      }
      operator delete(v29, 0x50u);
      --qword_2514A8;
LABEL_53:
      ;
    }
  }
  else if ( (int *)qword_251498 == &dword_251488 )
  {
LABEL_34:
    qword_251490 = nullptr;
    qword_251498 = (__int64)&dword_251488;
    qword_2514A0 = (__int64)&dword_251488;
    qword_2514A8 = 0;
  }
LABEL_35:
  if ( a2 )
  {
    v24 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v24, 0x28u);
    --qword_251528;
  }
  sub_B6F80(a1);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    &v34,
    0);
  mark_builtin_widgets();
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  return 1;
}

