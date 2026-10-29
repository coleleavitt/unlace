__int64 __fastcall sub_483320(QT::QApplication *this, QT::QObject *a2, QT::QEvent *a3)
{
  QT::QApplication *v5; // rdi
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rdx
  int v10; // r13d
  _QWORD (*v11)(QT::QApplication *__hidden, QT::QObject *, QT::QEvent *); // rax
  __int64 v13; // rdx
  QT::QObject *v14; // rax
  __int16 v15; // ax
  unsigned __int8 v16; // [rsp+Fh] [rbp-39h]

  v5 = (QT::QApplication *)((char *)this + 16);
  v6 = sub_541D40(v5);
  v7 = *((unsigned __int16 *)a3 + 4);
  if ( !(_BYTE)v6 )
    goto LABEL_7;
  if ( (unsigned __int16)v7 <= 0x1Fu )
  {
    v8 = (unsigned __int16)v7;
    if ( (unsigned __int16)v7 <= 1u )
    {
LABEL_12:
      v10 = 0;
      goto LABEL_13;
    }
    v9 = 2147483852LL;
    if ( !_bittest64(&v9, v7) )
    {
      if ( (_WORD)v7 != 12 )
        goto LABEL_10;
LABEL_27:
      *((_BYTE *)this + 528) = 1;
      v8 = 12;
      v7 = *((unsigned __int16 *)a3 + 4);
LABEL_8:
      if ( (unsigned __int16)v7 > 0x1Fu )
      {
        v10 = 1;
        if ( (_WORD)v7 == 117 )
        {
LABEL_34:
          *((_QWORD *)this + 71) = a3;
          v14 = nullptr;
          if ( (*(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1) != 0 )
            v14 = a2;
          *((_QWORD *)this + 72) = v14;
          goto LABEL_13;
        }
      }
      else if ( (unsigned __int16)v7 > 1u )
      {
LABEL_10:
        switch ( v7 )
        {
          case 2uLL:
            v10 = 4;
            goto LABEL_34;
          case 3uLL:
            v10 = 5;
            goto LABEL_34;
          case 6uLL:
            v10 = 2;
            goto LABEL_34;
          case 7uLL:
            v10 = 3;
            goto LABEL_34;
          case 0x1FuLL:
            v10 = 6;
            goto LABEL_34;
          default:
            goto LABEL_12;
        }
      }
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  v8 = (unsigned __int16)v7;
  v10 = 0;
  if ( (_WORD)v7 == 117 )
  {
LABEL_5:
    if ( !QT::QApplication::activeModalWidget(v5) )
    {
      *((_BYTE *)a3 + 12) = 1;
      return v6;
    }
    v7 = *((unsigned __int16 *)a3 + 4);
LABEL_7:
    v8 = (unsigned __int16)v7;
    if ( (_WORD)v7 != 12 )
      goto LABEL_8;
    goto LABEL_27;
  }
LABEL_13:
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1) != 0 && *((_WORD *)a3 + 4) == 74 )
    sub_47AAE0((__int64)this, (char *)a2);
  v11 = *(_QWORD (**)(QT::QApplication *__hidden, QT::QObject *, QT::QEvent *))(*(_QWORD *)this + 472LL);
  if ( v11 == QT::QApplication::notify )
    v6 = QT::QApplication::notify(this, a2, a3);
  else
    v6 = v11(this, a2, a3);
  if ( v10 )
    *(_OWORD *)((char *)this + 568) = 0;
  if ( !*((_BYTE *)a3 + 12)
    && (*(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1) != 0
    && *((_WORD *)a3 + 4) == 6
    && *((_DWORD *)a3 + 16) == 0x1000000 )
  {
    v16 = *(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, a2) )
    {
      v6 = v16;
    }
    else
    {
      v15 = sub_4B8BA0(a2, a2, v13, v16);
      if ( (v15 & 0x80u) != 0 || (v15 & 0x100) == 0 && *((_BYTE *)this + 530) )
      {
        sub_482660((__int64)v5, a2, 0);
        v6 = v16;
      }
    }
  }
  if ( v8 == 12 )
    *((_BYTE *)this + 528) = 0;
  return v6;
}
