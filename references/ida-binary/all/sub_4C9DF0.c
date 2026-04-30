unsigned __int64 __fastcall sub_4C9DF0(QT::QWidget ***this, QT::QWidget *a2, double a3)
{
  QT::QWidget *v4; // rbx
  int v5; // eax
  __int64 v7; // rax
  QT::QWidget *v8; // rdi
  int v9; // eax
  char v10; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  ++dword_8D1DC0;
  ++dword_8D1D3C;
  v4 = (QT::QWidget *)sub_4CE740(a2);
  if ( v4 )
  {
    QT::QWidget::setParent(a2, nullptr);
    if ( !(*(unsigned int (__fastcall **)(QT::QWidget *))(*(_QWORD *)v4 + 464LL))(v4) && **(this + 5) == v4 )
    {
      QT::QWidget::setParent(v4, nullptr);
      if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, (*(this + 1))[2]) )
        sub_4C4A40((QT::QWidget *)this);
    }
    v5 = dword_8D1D3C;
    if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v5 == 1) )
    {
      v7 = sub_47A690((__int64)QT::QCoreApplication::self);
      if ( v7 )
LABEL_8:
        sub_4C9440(v7, a3);
    }
  }
  else
  {
    v8 = **(this + 5);
    if ( v8 == a2 )
    {
      if ( v8 )
      {
        QT::QWidget::setParent(v8, nullptr);
        if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, (*(this + 1))[2]) )
          sub_4C4A40((QT::QWidget *)this);
      }
    }
    v9 = dword_8D1D3C;
    if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v9 == 1) )
    {
      v7 = sub_47A690((__int64)QT::QCoreApplication::self);
      if ( v7 )
        goto LABEL_8;
    }
  }
  sub_4D2110(&v10);
  return v11 - __readfsqword(0x28u);
}
