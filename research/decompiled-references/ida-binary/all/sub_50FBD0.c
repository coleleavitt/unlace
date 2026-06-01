unsigned __int64 __fastcall sub_50FBD0(__int64 a1, const QT::QString *a2, char a3)
{
  QT::QWidget *v5; // rsi
  const char *v7; // r12
  QT::QLabel *v8; // rbp
  __int64 v9; // rsi
  __int64 v11; // rdi
  QT::QLabel *v12; // r12
  volatile signed __int32 *v13; // rax
  __int64 v14; // rax
  void *v15; // [rsp+0h] [rbp-68h] BYREF
  const char *v16; // [rsp+8h] [rbp-60h]
  void *ptr[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v5 = *(QT::QWidget **)(a1 + 48);
  if ( *((_QWORD *)a2 + 2) )
  {
    if ( !v5 )
    {
      v12 = (QT::QLabel *)operator new(0x40u);
      *(_OWORD *)ptr = 0;
      v18 = 0;
      sub_498520(v12, (const QT::QString *)ptr, 0);
      v13 = (volatile signed __int32 *)ptr[0];
      *(_QWORD *)(a1 + 48) = v12;
      if ( v13 )
      {
        if ( !_InterlockedSub(v13, 1u) )
          free(ptr[0]);
        v12 = *(QT::QLabel **)(a1 + 48);
      }
      v14 = QT::QWidget::sizePolicy(v12);
      QT::QWidget::setSizePolicy(v12, v14 & 0xF0000);
      QT::QBoxLayout::insertWidget(*(_QWORD *)(a1 + 40), 0, *(_QWORD *)(a1 + 48), 0, 0);
    }
    QT::QString::toUtf8_helper((QT::QString *)&v15, a2);
    v7 = v16;
    if ( v16 )
    {
      if ( !a3 )
      {
LABEL_6:
        v8 = *(QT::QLabel **)(a1 + 48);
        sub_518A60((QT::QString *)ptr);
        sub_498220(v8, (const QT::QString *)ptr, 0);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        {
          free(ptr[0]);
          v9 = *(_QWORD *)(a1 + 56);
          if ( !v9 )
            goto LABEL_10;
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 56);
          if ( !v9 )
          {
LABEL_10:
            if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
              free(v15);
            return v19 - __readfsqword(0x28u);
          }
        }
        sub_498170(*(_QWORD *)(a1 + 48), v9);
        goto LABEL_10;
      }
    }
    else
    {
      v7 = (const char *)&QT::QByteArray::_empty;
      if ( !a3 )
        goto LABEL_6;
    }
    sub_4FB100(*(QT::QWidget **)(a1 + 48), a2);
    sub_4F9030(v7, 1);
    goto LABEL_6;
  }
  if ( v5 )
  {
    QT::QLayout::removeWidget(*(QT::QLayout **)(a1 + 40), v5);
    v11 = *(_QWORD *)(a1 + 48);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
    *(_QWORD *)(a1 + 48) = 0;
  }
  return v19 - __readfsqword(0x28u);
}
