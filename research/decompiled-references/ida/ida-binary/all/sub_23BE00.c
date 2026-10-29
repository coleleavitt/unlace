__int64 sub_23BE00()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  _QWORD *v3; // rbp
  __int64 active; // rax
  int v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  unsigned int v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v0 = sub_310D00();
  if ( (_BYTE)v0 && (v5 = 0, v1 = v0, v6 = -1, v7 = 0, get_auto_display(&v5), v7 <= 1) )
  {
    v3 = QT::QCoreApplication::self;
    if ( !QT::QCoreApplication::self )
      return 0;
    active = QT::QApplication::activeModalWidget((QT::QApplication *)&v5);
    if ( !active || active == v3[15] )
      return 0;
  }
  else
  {
    return 1;
  }
  return v1;
}
