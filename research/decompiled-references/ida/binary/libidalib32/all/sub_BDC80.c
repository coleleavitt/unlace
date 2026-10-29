int *sub_BDC80()
{
  __int64 i; // rbx
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  _QWORD **v7; // rbx
  void *v8; // rdi

  for ( i = qword_2514D8; (int *)i != &dword_2514C8; i = std::_Rb_tree_increment() )
    sub_B6F80(*(_DWORD *)(i + 32));
  v1 = qword_2514D0;
  if ( qword_2514D0 )
  {
    do
    {
      v2 = v1;
      sub_BCA30((_QWORD *)v1[3]);
      v3 = v1[5];
      v1 = (_QWORD *)v1[2];
      if ( v3 )
      {
        v2[6] = 0;
        qfree();
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
  v4 = qword_251490;
  qword_2514D8 = (__int64)&dword_2514C8;
  qword_2514D0 = nullptr;
  qword_2514E0 = (__int64)&dword_2514C8;
  qword_2514E8 = 0;
  if ( qword_251490 )
  {
    do
    {
      v5 = v4;
      sub_BCA30((_QWORD *)v4[3]);
      v6 = v4[5];
      v4 = (_QWORD *)v4[2];
      if ( v6 )
      {
        v5[6] = 0;
        qfree();
      }
      operator delete(v5, 0x50u);
    }
    while ( v4 );
  }
  v7 = (_QWORD **)qword_251510;
  qword_251490 = nullptr;
  qword_251498 = (__int64)&dword_251488;
  qword_2514A0 = (__int64)&dword_251488;
  qword_2514A8 = 0;
  if ( qword_251510 )
  {
    do
    {
      sub_BDAB0(v7[3]);
      v8 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v8, 0x28u);
    }
    while ( v7 );
  }
  qword_251510 = nullptr;
  qword_251518 = (__int64)&dword_251508;
  qword_251520 = (__int64)&dword_251508;
  qword_251528 = 0;
  return &dword_251508;
}

