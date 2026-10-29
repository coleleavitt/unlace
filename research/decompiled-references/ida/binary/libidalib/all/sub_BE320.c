int *sub_BE320()
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

  for ( i = qword_252658; (int *)i != &dword_252648; i = std::_Rb_tree_increment() )
    sub_B75F0(*(_QWORD *)(i + 32));
  v1 = qword_252650;
  if ( qword_252650 )
  {
    do
    {
      v2 = v1;
      sub_BD0C0((_QWORD *)v1[3]);
      v3 = v1[5];
      v1 = (_QWORD *)v1[2];
      if ( v3 )
      {
        v2[6] = 0;
        qfree();
      }
      operator delete(v2, 0x58u);
    }
    while ( v1 );
  }
  v4 = qword_252610;
  qword_252658 = (__int64)&dword_252648;
  qword_252650 = nullptr;
  qword_252660 = (__int64)&dword_252648;
  qword_252668 = 0;
  if ( qword_252610 )
  {
    do
    {
      v5 = v4;
      sub_BD0C0((_QWORD *)v4[3]);
      v6 = v4[5];
      v4 = (_QWORD *)v4[2];
      if ( v6 )
      {
        v5[6] = 0;
        qfree();
      }
      operator delete(v5, 0x58u);
    }
    while ( v4 );
  }
  v7 = (_QWORD **)qword_252690;
  qword_252610 = nullptr;
  qword_252618 = (__int64)&dword_252608;
  qword_252620 = (__int64)&dword_252608;
  qword_252628 = 0;
  if ( qword_252690 )
  {
    do
    {
      sub_BE150(v7[3]);
      v8 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v8, 0x28u);
    }
    while ( v7 );
  }
  qword_252690 = nullptr;
  qword_252698 = (__int64)&dword_252688;
  qword_2526A0 = (__int64)&dword_252688;
  qword_2526A8 = 0;
  return &dword_252688;
}

