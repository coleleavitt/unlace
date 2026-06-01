__int64 sub_9CB60()
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

  qword_245138 = -1;
  qword_245130 = -1;
  v0 = qword_252590;
  v1 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( (_QWORD)xmmword_252598 << 8 )
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
  v3 = (_QWORD **)qword_251AB0;
  if ( qword_251AB0 )
  {
    do
    {
      sub_9C760(v3[3]);
      v4 = v3;
      v3 = (_QWORD **)v3[2];
      operator delete(v4, 0x30u);
    }
    while ( v3 );
  }
  v5 = (_QWORD **)qword_251A70;
  qword_251AB0 = nullptr;
  qword_251AB8 = (__int64)&dword_251AA8;
  qword_251AC0 = (__int64)&dword_251AA8;
  qword_251AC8 = 0;
  if ( qword_251A70 )
  {
    do
    {
      sub_9C960(v5[3]);
      v6 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v6, 0x28u);
    }
    while ( v5 );
  }
  v7 = (_QWORD **)qword_251A30;
  qword_251A70 = nullptr;
  qword_251A78 = (__int64)&dword_251A68;
  qword_251A80 = (__int64)&dword_251A68;
  qword_251A88 = 0;
  if ( qword_251A30 )
  {
    do
    {
      sub_9C960(v7[3]);
      v8 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v8, 0x28u);
    }
    while ( v7 );
  }
  qword_251A30 = nullptr;
  qword_251A38 = (__int64)&dword_251A28;
  qword_251A40 = (__int64)&dword_251A28;
  qword_251A48 = 0;
  sub_9C2D0(dword_252588, 1);
  return mark_builtin_widgets();
}

