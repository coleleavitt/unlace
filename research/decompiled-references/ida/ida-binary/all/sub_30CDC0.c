__int64 __fastcall sub_30CDC0(QT::QApplication *this, QT::QWindow *a2, QT::QEvent *a3)
{
  __int64 v3; // rax
  char v5; // r13
  int v6; // r13d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  QT::QApplication *v15; // [rsp+0h] [rbp-68h] BYREF
  char v16; // [rsp+8h] [rbp-60h]
  _BYTE v17[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v3 = *((_QWORD *)a2 + 1);
  v18 = __readfsqword(0x28u);
  v15 = this;
  v5 = *(_BYTE *)(v3 + 48);
  v16 = 0;
  v6 = v5 & 1;
  if ( v6 )
  {
    sub_2FEFB0(&v15, (__int64)a2);
    LOBYTE(v6) = v16;
  }
  v7 = *((unsigned __int16 *)a3 + 4);
  if ( v7 != 51 )
  {
    if ( v7 == 14 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 0x40) != 0 )
      {
        v12 = QT::qt_tlw_for_window(a2);
        if ( v12 )
        {
          QT::QEvent::QEvent(v17, 3004);
          sub_51B5E0(v12, v17);
          QT::QEvent::~QEvent((QT::QEvent *)v17);
        }
      }
      goto LABEL_8;
    }
    if ( (unsigned int)(v7 - 6) > 1 )
    {
      if ( v7 == 9 || v7 == 2 || (unsigned int)(v7 - 3) <= 1 )
        goto LABEL_7;
    }
    else
    {
      if ( *((_DWORD *)a3 + 16) != 16777251 )
      {
LABEL_7:
        sub_304DE0((__int64)this, 0);
        goto LABEL_8;
      }
      sub_304DE0((__int64)this, v7 == 6);
    }
LABEL_8:
    v8 = QT::QApplication::notify(this, a2, a3);
    if ( (_BYTE)v6 )
    {
      v9 = *((_QWORD *)v15 + 91);
      v10 = *(int *)(*((_QWORD *)v15 + 90) + 4 * v9 - 4);
      if ( v9 )
        *((_QWORD *)v15 + 91) = v9 - 1;
      if ( (int)v10 >= 0 )
        j__switch_dbctx(v10);
    }
    return v8;
  }
  if ( *((_DWORD *)a3 + 16) == 16777251 )
    goto LABEL_8;
  sub_304DE0((__int64)this, 0);
  if ( !QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenuBar::staticMetaObject, a2)
    && !QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, a2) )
  {
    goto LABEL_8;
  }
  *((_BYTE *)a3 + 12) = 1;
  if ( (_BYTE)v6 )
  {
    v13 = *((_QWORD *)v15 + 91);
    v14 = *(int *)(*((_QWORD *)v15 + 90) + 4 * v13 - 4);
    if ( v13 )
      *((_QWORD *)v15 + 91) = v13 - 1;
    if ( (int)v14 >= 0 )
      j__switch_dbctx(v14);
  }
  return 1;
}
