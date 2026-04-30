__int64 __fastcall graph_mouse_pos_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  __int64 v7; // rdx
  __int64 v8; // [rsp+18h] [rbp-40h] BYREF
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        v7 = *a4[1];
        *(_QWORD *)v9 = 0;
        v8 = v7;
        v10 = &v8;
        QT::QMetaObject::activate(this, (QT::QObject *)&off_8868A0, nullptr, (int)v9, v6);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
