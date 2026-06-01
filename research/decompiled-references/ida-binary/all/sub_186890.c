__int64 __fastcall sub_186890(QT::QLineEdit **this, QT::QObject *a2, QT::QEvent *a3)
{
  bool v4; // zf
  __int64 v6; // rax
  __int64 v7; // rax
  QT::QObject *v8; // r13
  int v10; // edx
  int v11; // eax
  __int64 v12; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v4 = *((_WORD *)a3 + 4) == 6;
  v16 = __readfsqword(0x28u);
  if ( !v4 )
    return QT::QObject::eventFilter((QT::QObject *)this, a2, a3);
  if ( *(this + 17) != a2 )
  {
    v6 = (__int64)*(this + 16);
    if ( !*(_BYTE *)(v6 + 1224) )
    {
      v7 = *(_QWORD *)(v6 + 1216);
      if ( v7 )
      {
        v8 = *(QT::QObject **)(v7 + 64);
        if ( v8 )
        {
          if ( a2 == v8
            && !(unsigned int)QT::QKeyEvent::modifiers(a3)
            && (unsigned int)(*((_DWORD *)a3 + 16) - 16777220) <= 1 )
          {
            sub_51C500(v8);
            sub_4E4770((char *)*(this + 16) + 104);
            v12 = (__int64)*(this + 16);
            ptr = nullptr;
            v15 = -1;
            v14 = 0;
            sub_4A6DB0(v12);
          }
        }
      }
    }
    return QT::QObject::eventFilter((QT::QObject *)this, a2, a3);
  }
  v10 = QT::QKeyEvent::modifiers(a3);
  v11 = *((_DWORD *)a3 + 16);
  if ( !v10 && v11 == 0x1000000 )
  {
    *((_BYTE *)a3 + 12) = 1;
    QT::QWidget::setFocus(*(this + 16), 7);
    return 1;
  }
  if ( v11 == 32 )
  {
    QT::QString::fromUtf8(&ptr, 5, "Space");
    goto LABEL_13;
  }
  if ( (unsigned int)(v11 - 16777220) > 1 )
    return QT::QObject::eventFilter((QT::QObject *)this, a2, a3);
  QT::QString::fromUtf8(&ptr, 5, "Enter");
LABEL_13:
  if ( !*((_QWORD *)&v14 + 1) )
  {
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    return QT::QObject::eventFilter((QT::QObject *)this, a2, a3);
  }
  *((_BYTE *)a3 + 12) = 1;
  QT::QLineEdit::insert(*(this + 17), (const QT::QString *)&ptr);
  QT::QWidget::setEnabled(*(this + 20), 1);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return 1;
}
