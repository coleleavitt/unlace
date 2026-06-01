__int64 __fastcall GraphMiniView__::vfunc_2(QT::QWidget *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  void **v6; // r8
  __int64 v7; // rdx
  char v8; // al
  int v9; // [rsp+Ch] [rbp-4Ch]
  char v10; // [rsp+1Fh] [rbp-39h] BYREF
  int v11[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 1 )
          **(_QWORD **)a4 = 0;
        return (unsigned int)(result - 2);
      }
      if ( a2 <= 8 )
      {
        v7 = 334;
        if ( _bittest64(&v7, a2) )
        {
          v9 = result;
          sub_465F00(this, a2, result, a4, v6);
          LODWORD(result) = v9;
          return (unsigned int)(result - 2);
        }
      }
    }
    else
    {
      if ( (int)result > 1 )
        return (unsigned int)(result - 2);
      if ( (_DWORD)result == 1 )
      {
        QT::QWidget::update(this);
        return 0xFFFFFFFFLL;
      }
      else
      {
        v8 = **(_BYTE **)(a4 + 8);
        *(_QWORD *)v11 = 0;
        v10 = v8;
        v12 = &v10;
        QT::QMetaObject::activate(this, (QT::QObject *)&off_885220, nullptr, (int)v11, v6);
        return 4294967294LL;
      }
    }
  }
  return result;
}
