unsigned __int64 __fastcall sub_4C4A40(QT::QWidget *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  int v6; // r13d
  int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  int v12; // [rsp+8h] [rbp-40h]
  char v13; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v1 = *((_QWORD **)this + 5);
  v14 = __readfsqword(0x28u);
  v11 = (__int64)DockArea::countDockWidgets;
  v12 = 0;
  v13 = 1;
  if ( *v1 )
  {
    sub_4CF2F0(&v11);
    v5 = *((_QWORD **)this + 5);
    v11 = (__int64)DockArea::countDockWidgets;
    v13 = 0;
    v6 = v12;
    v12 = 0;
    if ( *v5 )
    {
      sub_4CF2F0(&v11);
      v7 = v12;
      if ( v6 )
        goto LABEL_4;
      goto LABEL_11;
    }
    if ( v6 )
      goto LABEL_7;
    goto LABEL_18;
  }
  v13 = 0;
  if ( !*v1 )
  {
LABEL_18:
    v7 = 0;
    goto LABEL_11;
  }
  sub_4CF2F0(&v11);
  v7 = v12;
LABEL_11:
  if ( sub_47C810(nullptr) && dword_8D1D38 )
  {
    v11 = 0x100000001LL;
    QT::QWidget::resize(this, &v11);
  }
  else
  {
    (*(void (__fastcall **)(QT::QWidget *, _QWORD))(*(_QWORD *)this + 104LL))(this, 0);
  }
LABEL_4:
  if ( v7 )
    return v14 - __readfsqword(0x28u);
LABEL_7:
  QT::QWidget::setAttribute(this, 55, 1, v2, v3, v4);
  if ( dword_8D1D38 )
  {
    v9 = xmmword_8D1D78;
    v11 = (__int64)this;
    v10 = qword_8D1D70;
    if ( *((_QWORD *)&xmmword_8D1D78 + 1) < (unsigned __int64)(xmmword_8D1D78 + 1) )
    {
      qword_8D1D70 = qvector_reserve(&qword_8D1D70, qword_8D1D70, xmmword_8D1D78 + 1, 8);
      v10 = qword_8D1D70;
      v9 = xmmword_8D1D78;
    }
    *(_QWORD *)(v10 + 8 * v9) = this;
    *(_QWORD *)&xmmword_8D1D78 = xmmword_8D1D78 + 1;
    return v14 - __readfsqword(0x28u);
  }
  return QT::QWidget::close(this);
}
