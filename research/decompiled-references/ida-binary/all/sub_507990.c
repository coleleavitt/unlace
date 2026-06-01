__int64 __fastcall ida_form_widget_t__::vfunc_5(volatile signed __int32 **this, QT::QEvent *a2, double a3, __m128 a4)
{
  __int16 v5; // ax
  bool v8; // zf
  int v9; // ecx
  _QWORD *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int8 *v16; // rsi
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rax
  const QT::QObject *v20; // r13
  QT::QAbstractButton *v21; // rax
  QT::QAbstractButton *v22; // r12
  __int64 v23; // rax
  int v24; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v25; // [rsp+8h] [rbp-30h]

  v5 = *((_WORD *)a2 + 4);
  v25 = __readfsqword(0x28u);
  if ( v5 != 6 )
  {
    if ( v5 == 24 && (*((_BYTE *)*(this + 4) + 18) & 3) == 0 )
      sub_531B30(7, this, 0);
    return QT::QWidget::event((QT::QWidget *)this, a2);
  }
  if ( !(unsigned int)QT::QKeyEvent::modifiers(a2) )
  {
    v8 = (*((_DWORD *)a2 + 16) & 0x1FFFFFF) == 0;
    v9 = *((_DWORD *)a2 + 16) & 0x1FFFFFF;
    v24 = v9;
    if ( !v8 )
    {
      v10 = *(this + 53);
      if ( v10 )
      {
        v11 = v10[2];
        v12 = v10[4];
        v13 = (v11 - 1)
            & (((0xD6E8FEB86659FD93LL
               * (((0xD6E8FEB86659FD93LL * (v10[3] ^ v9 ^ ((v10[3] ^ (unsigned __int64)v9) >> 32))) >> 32)
                ^ (0xD6E8FEB86659FD93LL * (v10[3] ^ v9 ^ ((v10[3] ^ (unsigned __int64)v9) >> 32))))) >> 32)
             ^ (0xD6E8FEB86659FD93LL
              * (((0xD6E8FEB86659FD93LL * (v10[3] ^ v9 ^ ((v10[3] ^ (unsigned __int64)v9) >> 32))) >> 32)
               ^ (0xD6E8FEB86659FD93LL * (v10[3] ^ v9 ^ ((v10[3] ^ (unsigned __int64)v9) >> 32))))));
        v14 = v13 & 0x7F;
        v15 = v12 + 144 * (v13 >> 7);
LABEL_10:
        v16 = (unsigned __int8 *)(v15 + 128);
LABEL_11:
        v17 = (unsigned __int8 *)(v15 + v14);
        while ( 1 )
        {
          v18 = *v17;
          if ( v18 == 255 )
            return QT::QWidget::event((QT::QWidget *)this, a2);
          v19 = (_DWORD *)(*(_QWORD *)v16 + 16 * v18);
          if ( v9 == *v19 )
            break;
          if ( ++v17 == v16 )
          {
            v15 += 144;
            v16 = v17 + 144;
            v14 = 0;
            if ( 0x8E38E38E38E38E39LL * ((v15 - v12) >> 4) != v11 >> 7 )
              goto LABEL_11;
            v15 = v12;
            goto LABEL_10;
          }
        }
        if ( !v19 )
          return QT::QWidget::event((QT::QWidget *)this, a2);
        v20 = *(const QT::QObject **)sub_4FE850(this + 53, &v24, a3, a4);
        v21 = (QT::QAbstractButton *)QT::QMetaObject::cast(
                                       (QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject,
                                       v20);
        v22 = v21;
        if ( v21 )
        {
          QT::QAbstractButton::animateClick(v21);
          QT::QWidget::setFocus(v22, 5);
          return 1;
        }
        v23 = QT::QMetaObject::cast((QT::QMetaObject *)&off_896140, v20);
        if ( v23 )
        {
          sub_498180(v23);
          return 1;
        }
      }
    }
  }
  return QT::QWidget::event((QT::QWidget *)this, a2);
}
