__int64 sub_21B8A0()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  char v2; // dl
  _QWORD **v3; // rbx
  void *v4; // rdi
  _QWORD **v5; // rbx
  void *v6; // rdi
  _QWORD **v7; // rbx
  void *v8; // rdi
  __int64 v9; // rax
  QT::QWidget *v10; // rbx
  char *v11; // rax

  qword_8BA518 = -1;
  qword_8BA510 = -1;
  v0 = qword_8CC430;
  v1 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( (_QWORD)xmmword_8CC438 << 8 )
  {
    do
    {
      v2 = *(_BYTE *)(v0 + 153);
      if ( (v2 & 2) != 0 )
        *(_QWORD *)(v0 + 160) = -1;
      if ( (v2 & 8) != 0 )
        *(_QWORD *)(v0 + 168) = -1;
      *(_BYTE *)(v0 + 232) = 0;
      v0 += 256;
    }
    while ( v0 != v1 );
  }
  v3 = (_QWORD **)qword_8CB630;
  if ( qword_8CB630 )
  {
    do
    {
      sub_20B720(v3[3]);
      v4 = v3;
      v3 = (_QWORD **)v3[2];
      operator delete(v4, 0x30u);
    }
    while ( v3 );
  }
  v5 = (_QWORD **)qword_8CB5F0;
  qword_8CB630 = nullptr;
  qword_8CB638 = (__int64)&dword_8CB628;
  qword_8CB640 = (__int64)&dword_8CB628;
  qword_8CB648 = 0;
  if ( qword_8CB5F0 )
  {
    do
    {
      sub_20B920(v5[3]);
      v6 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v6, 0x28u);
    }
    while ( v5 );
  }
  v7 = (_QWORD **)qword_8CB5B0;
  qword_8CB5F0 = nullptr;
  qword_8CB5F8 = (__int64)&dword_8CB5E8;
  qword_8CB600 = (__int64)&dword_8CB5E8;
  qword_8CB608 = 0;
  if ( qword_8CB5B0 )
  {
    do
    {
      sub_20B920(v7[3]);
      v8 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v8, 0x28u);
    }
    while ( v7 );
  }
  qword_8CB5B0 = nullptr;
  qword_8CB5B8 = (__int64)&dword_8CB5A8;
  qword_8CB5C0 = (__int64)&dword_8CB5A8;
  qword_8CB5C8 = 0;
  sub_20B290(dword_8CC428, (_BYTE *)&dword_0 + 1);
  v9 = sub_49EDE0(16);
  v10 = (QT::QWidget *)v9;
  if ( v9 )
  {
    v11 = (char *)sub_21B4A0(*(_QWORD **)(v9 + 2392));
    sub_4A3940(v10, v11);
  }
  return mark_builtin_widgets(&stru_10000, 0, 1);
}
