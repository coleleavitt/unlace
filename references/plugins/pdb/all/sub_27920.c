void __fastcall sub_27920(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  void *v4; // r8
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  bool v8; // al
  _QWORD *i; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rbx
  _QWORD *v19; // r15
  __int64 v20; // rdi
  _QWORD *v21; // [rsp+8h] [rbp-40h]

  v2 = a1 + 7;
  v4 = (void *)a1[8];
  v21 = a1 + 7;
  if ( v4 )
  {
    v5 = (_QWORD *)a1[8];
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v5[4];
        if ( v6 >= a2 )
          break;
        v5 = (_QWORD *)v5[3];
        if ( !v5 )
          goto LABEL_7;
      }
      v7 = (_QWORD *)v5[2];
      if ( a2 >= v6 )
        break;
      v2 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v7 )
      {
LABEL_7:
        v8 = v21 == v2;
        goto LABEL_8;
      }
    }
    for ( i = (_QWORD *)v5[3]; i; i = (_QWORD *)i[2] )
    {
      while ( 1 )
      {
        v10 = i[3];
        if ( a2 < i[4] )
          break;
        i = (_QWORD *)i[3];
        if ( !v10 )
          goto LABEL_16;
      }
      v2 = i;
    }
LABEL_16:
    while ( v7 )
    {
      while ( 1 )
      {
        v11 = v7[3];
        if ( v7[4] >= a2 )
          break;
        v7 = (_QWORD *)v7[3];
        if ( !v11 )
          goto LABEL_19;
      }
      v5 = v7;
      v7 = (_QWORD *)v7[2];
    }
LABEL_19:
    if ( (_QWORD *)a1[9] == v5 && v21 == v2 )
      goto LABEL_10;
    for ( ; v5 != v2; --a1[11] )
    {
      v12 = v5;
      v5 = (_QWORD *)std::_Rb_tree_increment(v5);
      v13 = std::_Rb_tree_rebalance_for_erase(v12, v21);
      v14 = *(_QWORD *)(v13 + 152);
      v15 = (_QWORD *)v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v16 = v15[18];
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v17 = v15[12];
      if ( v17 )
      {
        v15[13] = 0;
        qfree(v17);
      }
      v18 = v15[8];
      while ( v18 )
      {
        v19 = (_QWORD *)v18;
        sub_27580(*(_QWORD **)(v18 + 24));
        v20 = *(_QWORD *)(v18 + 32);
        v18 = *(_QWORD *)(v18 + 16);
        if ( v20 )
        {
          v19[5] = 0;
          qfree(v20);
        }
        operator delete(v19, 0x40u);
      }
      operator delete(v15, 0xA8u);
    }
  }
  else
  {
    v2 = a1 + 7;
    v8 = 1;
LABEL_8:
    if ( (_QWORD *)a1[9] == v2 && v8 )
    {
LABEL_10:
      sub_27840(v4);
      a1[8] = 0;
      a1[11] = 0;
      a1[9] = v21;
      a1[10] = v21;
    }
  }
}
