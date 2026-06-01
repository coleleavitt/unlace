__int64 __fastcall blinking_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  void **v6; // r8
  char v7; // dl
  char v8; // [rsp+1Fh] [rbp-39h] BYREF
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        v7 = **(_BYTE **)(a4 + 8);
        *(_QWORD *)v9 = 0;
        v8 = v7;
        v10 = &v8;
        QT::QMetaObject::activate(this, (QT::QObject *)&off_8868E0, nullptr, (int)v9, v6);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
