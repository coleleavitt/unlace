__int64 sub_3119D0()
{
  char *v0; // rbx
  __int64 v1; // rdi
  _QWORD v3[7]; // [rsp+0h] [rbp-118h] BYREF
  char v4; // [rsp+38h] [rbp-E0h] BYREF
  int v5; // [rsp+48h] [rbp-D0h]
  char v6; // [rsp+98h] [rbp-80h] BYREF
  _DWORD *v7; // [rsp+C0h] [rbp-58h]
  __int64 v8; // [rsp+C8h] [rbp-50h]
  _QWORD *v9; // [rsp+D8h] [rbp-40h]
  __int64 v10; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v11; // [rsp+F8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_311540((__int64)v3, (__int64)"Quick plugins view", (__int64)qword_8CD748 + 376);
  *v7 = 50;
  *v9 = "Plugin";
  v5 = 182;
  sub_311860((QT::QApplication *)v3);
  v3[0] = qo_chooser_t___vtable;
  if ( v9 )
  {
    v10 = 0;
    qfree(v9, "Quick plugins view");
  }
  if ( v7 )
  {
    v8 = 0;
    qfree(v7, "Quick plugins view");
  }
  v0 = &v6;
  v3[0] = &stru_86F6A0;
  do
  {
    v1 = *(_QWORD *)v0;
    if ( *(_QWORD *)v0 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree(v1, "Quick plugins view");
    }
    v0 -= 24;
  }
  while ( v0 != &v4 );
  return 1;
}
