unsigned __int64 __fastcall sub_205F00(QT::QFrame *this, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  char *v6; // rbp
  int v7; // eax
  __int64 v8; // rdi
  char v9; // al
  char v10; // r12
  __int64 (__fastcall *v11)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v12; // rax
  QT::QWidget *v13; // rdi
  void (__fastcall *v14)(QT::QFrame *, char *, char *, int *, _QWORD); // rax
  int v16; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( !*((_QWORD *)this + 53) )
    sub_1E69C0(a5, (__int64)this, a2, a3, a4);
  v6 = (char *)this + 384;
  if ( *((_BYTE *)this + 968) )
  {
    v7 = *((_DWORD *)this + 104);
    switch ( v7 )
    {
      case 2:
        v8 = *((_QWORD *)this + 112);
        break;
      case 3:
        v8 = *((_QWORD *)this + 113);
        break;
      case 1:
        v8 = *((_QWORD *)this + 111);
        break;
      default:
        goto LABEL_16;
    }
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 360LL))(v8);
      *((_BYTE *)this + 880) = 0;
      v10 = v9;
      v11 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)this + 760LL);
      if ( v11 == sub_1E6980 )
      {
        v12 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
        QT::QWidget::update(v12);
        v13 = *((QT::QWidget **)this + 96);
        if ( v13 && *(char *)(*((_QWORD *)v13 + 4) + 9LL) < 0 )
          QT::QWidget::update(v13);
      }
      else
      {
        v11(this);
      }
      if ( !v10 && !*((_BYTE *)this + 969) )
      {
        v14 = *((void (__fastcall **)(QT::QFrame *, char *, char *, int *, _QWORD))this + 44);
        v16 = 1796;
        if ( v14 )
        {
          *((_BYTE *)this + 969) = 1;
          v14(this, v6, v6, &v16, *((_QWORD *)this + 47));
          *((_BYTE *)this + 969) = 0;
        }
      }
    }
  }
LABEL_16:
  sub_204FC0(this, (__int64)v6);
  return sub_1EBD50(this, (__int64)v6, a5);
}
