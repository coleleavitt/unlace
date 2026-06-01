__int64 __fastcall sub_1F8760(QT::QFrame *this, __int64 a2, double a3)
{
  __int64 result; // rax
  QT::QFrame *v4; // rbx
  __int64 v5; // rax
  void (*v6)(void); // rax
  QT::QWidget *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi

  result = (unsigned int)dword_8D1DC0;
  if ( dword_8D1DC0 <= 0 )
  {
    v4 = this;
    v5 = *(_QWORD *)this;
    *((_BYTE *)this + 880) = 0;
    v6 = *(void (**)(void))(v5 + 760);
    if ( (char *)v6 == (char *)sub_1E6980 )
    {
      v7 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
      QT::QWidget::update(v7);
      this = *((QT::QFrame **)this + 96);
      if ( this && *(char *)(*((_QWORD *)this + 4) + 9LL) < 0 )
        QT::QWidget::update(this);
    }
    else
    {
      v6();
    }
    if ( !*((_BYTE *)v4 + 968) )
      return sub_1EBD50(v4, a2, a3);
    if ( *((_QWORD *)v4 + 53) )
    {
      v10 = *((_DWORD *)v4 + 104);
      switch ( v10 )
      {
        case 2:
          v11 = *((_QWORD *)v4 + 112);
          break;
        case 3:
          v11 = *((_QWORD *)v4 + 113);
          break;
        case 1:
          v11 = *((_QWORD *)v4 + 111);
          break;
        default:
LABEL_14:
          a2 = 0;
          sub_1E70E0((QT::QWidget **)v4, 0);
          return sub_1EBD50(v4, a2, a3);
      }
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 408LL))(v11, a2);
        if ( !*((_BYTE *)v4 + 968) )
          return sub_1EBD50(v4, a2, a3);
      }
      goto LABEL_14;
    }
    sub_1E69C0(a3, (__int64)this, a2, v8, v9);
    return sub_1F8860();
  }
  return result;
}
