__int64 sub_9CA40()
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

  dword_2440E4 = -1;
  dword_2440E0 = -1;
  v0 = qword_251410;
  v1 = qword_251410 + 232 * xmmword_251418;
  if ( 232LL * (_QWORD)xmmword_251418 )
  {
    do
    {
      v2 = *(_BYTE *)(v0 + 153);
      if ( (v2 & 2) != 0 )
        *(_DWORD *)(v0 + 160) = -1;
      if ( (v2 & 8) != 0 )
        *(_DWORD *)(v0 + 164) = -1;
      *(_BYTE *)(v0 + 208) = 0;
      v0 += 232;
    }
    while ( v0 != v1 );
  }
  v3 = (_QWORD **)qword_250A30;
  if ( qword_250A30 )
  {
    do
    {
      sub_9C640(v3[3]);
      v4 = v3;
      v3 = (_QWORD **)v3[2];
      operator delete(v4, 0x28u);
    }
    while ( v3 );
  }
  v5 = (_QWORD **)qword_2509F0;
  qword_250A30 = nullptr;
  qword_250A38 = (__int64)&dword_250A28;
  qword_250A40 = (__int64)&dword_250A28;
  qword_250A48 = 0;
  if ( qword_2509F0 )
  {
    do
    {
      sub_9C840(v5[3]);
      v6 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v6, 0x28u);
    }
    while ( v5 );
  }
  v7 = (_QWORD **)qword_2509B0;
  qword_2509F0 = nullptr;
  qword_2509F8 = (__int64)&dword_2509E8;
  qword_250A00 = (__int64)&dword_2509E8;
  qword_250A08 = 0;
  if ( qword_2509B0 )
  {
    do
    {
      sub_9C840(v7[3]);
      v8 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v8, 0x28u);
    }
    while ( v7 );
  }
  qword_2509B0 = nullptr;
  qword_2509B8 = (__int64)&dword_2509A8;
  qword_2509C0 = (__int64)&dword_2509A8;
  qword_2509C8 = 0;
  sub_9C1B0(dword_251408, 1);
  return mark_builtin_widgets();
}

