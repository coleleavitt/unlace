int *__fastcall sub_22BF20(__int64 a1, const char *a2)
{
  __int64 i; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  _QWORD **v9; // rbx
  void *v10; // rdi

  for ( i = qword_8CC4F8; (int *)i != &dword_8CC4E8; i = std::_Rb_tree_increment(i) )
    sub_226A60(*(_QWORD *)(i + 32));
  v3 = qword_8CC4F0;
  if ( qword_8CC4F0 )
  {
    do
    {
      v4 = v3;
      sub_22B090((_QWORD *)v3[3], a2);
      v5 = v3[5];
      v3 = (_QWORD *)v3[2];
      if ( v5 )
      {
        v4[6] = 0;
        qfree(v5, a2);
      }
      a2 = (const char *)&qword_58;
      operator delete(v4, 0x58u);
    }
    while ( v3 );
  }
  v6 = qword_8CC4B0;
  qword_8CC4F8 = (__int64)&dword_8CC4E8;
  qword_8CC4F0 = nullptr;
  qword_8CC500 = (__int64)&dword_8CC4E8;
  qword_8CC508 = 0;
  if ( qword_8CC4B0 )
  {
    do
    {
      v7 = v6;
      sub_22B090((_QWORD *)v6[3], a2);
      v8 = v6[5];
      v6 = (_QWORD *)v6[2];
      if ( v8 )
      {
        v7[6] = 0;
        qfree(v8, a2);
      }
      a2 = (const char *)&qword_58;
      operator delete(v7, 0x58u);
    }
    while ( v6 );
  }
  v9 = (_QWORD **)qword_8CC530;
  qword_8CC4B0 = nullptr;
  qword_8CC4B8 = (__int64)&dword_8CC4A8;
  qword_8CC4C0 = (__int64)&dword_8CC4A8;
  qword_8CC4C8 = 0;
  if ( qword_8CC530 )
  {
    do
    {
      sub_22BD50(v9[3]);
      v10 = v9;
      v9 = (_QWORD **)v9[2];
      operator delete(v10, 0x28u);
    }
    while ( v9 );
  }
  qword_8CC530 = nullptr;
  qword_8CC538 = (__int64)&dword_8CC528;
  qword_8CC540 = (__int64)&dword_8CC528;
  qword_8CC548 = 0;
  return &dword_8CC528;
}
