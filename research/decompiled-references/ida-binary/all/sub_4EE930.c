QT::QWidget *__fastcall sub_4EE930(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  QT::QWidget *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  const char *v12; // r12
  signed __int64 v13; // rax
  size_t v14; // rax
  char *v15; // rbx
  unsigned __int64 v16; // rdx
  double v17; // xmm0_8
  int v18; // [rsp+Ch] [rbp-8Ch] BYREF
  char *s; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h]
  void *ptr[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[40]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      if ( !under_debugger )
        interr(70103, a2, a3, a4, a5);
      BUG();
    case 1:
      v6 = sub_4EE8D0(a1, a2, 0);
      goto LABEL_3;
    case 2:
      v6 = sub_4ED5D0((__int64)a1, a2);
      goto LABEL_3;
    case 3:
      v6 = sub_4EDDB0(a2, *(_QWORD *)(a2 + 136), a5);
      goto LABEL_3;
    case 4:
      v6 = sub_4EE2C0((__int64)a1, a2);
      goto LABEL_3;
    case 5:
      v6 = sub_4EE350((__int64)a1, a2);
      goto LABEL_3;
    case 6:
      v6 = sub_4ED700((__int64)a1, a2);
      goto LABEL_3;
    case 7:
      v6 = sub_4ED800((__int64)a1, a2);
      goto LABEL_3;
    case 8:
      v6 = (QT::QWidget *)sub_4ED1A0((__int64)a1, a2);
      goto LABEL_3;
    case 9:
      if ( !QT::QCoreApplication::self )
        return nullptr;
      v6 = (QT::QWidget *)operator new(0x48u);
      sub_5226F0(v6);
LABEL_3:
      if ( !v6 )
        return nullptr;
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 3) <= 0xC )
LABEL_33:
        sub_4F5770(*(QT::QObject **)(a1[3] + 56), v6);
      v7 = (unsigned int)QT::QWidget::sizePolicy(v6);
      v8 = (unsigned int)(*(_DWORD *)(a2 + 32) - 1);
      if ( (unsigned int)v8 <= 2 )
        v7 = ((dword_6CC278[v8] & 0xF) << 16) | (unsigned int)v7 & 0xFFF0FFFF;
      v9 = (unsigned int)(*(_DWORD *)(a2 + 52) - 1);
      if ( (unsigned int)v9 <= 2 )
        v7 = ((dword_6CC278[v9] & 0xF) << 20) | (unsigned int)v7 & 0xFF0FFFFF;
      QT::QWidget::setSizePolicy(v6, v7);
      if ( (unsigned __int8)sub_4EE540(&v18, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20)) )
        QT::QWidget::setMinimumWidth(v6, v18);
      if ( (unsigned __int8)sub_4EE540(&v18, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28)) )
        QT::QWidget::setMaximumWidth(v6, v18);
      if ( (unsigned __int8)sub_4EE540(&v18, *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 40)) )
        QT::QWidget::setMinimumHeight(v6, v18);
      if ( (unsigned __int8)sub_4EE540(&v18, *(_DWORD *)(a2 + 44), *(_DWORD *)(a2 + 48)) )
        QT::QWidget::setMaximumHeight(v6, v18);
      v10 = *(_QWORD *)(a2 + 64);
      if ( v10 > 1 )
      {
        v12 = *(const char **)(a2 + 56);
        v13 = v10 - 1;
        if ( !v12 || v13 < 0 )
        {
          v13 = 0;
          if ( v12 )
            v13 = strlen(*(const char **)(a2 + 56));
        }
        QT::QString::fromUtf8(ptr, v13, v12);
        QT::QWidget::setToolTip(v6, (const QT::QString *)ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
      if ( *(_QWORD *)(a2 + 88) )
      {
        sub_2E5140((__int64 *)&s, (__int64 *)(a2 + 80), " ");
        if ( v20 )
        {
          v14 = v20 - 1;
          v15 = s;
          v16 = (unsigned __int64)(v20 - 1) >> 63;
        }
        else
        {
          LOBYTE(v16) = 0;
          v14 = 0;
          v15 = (char *)&s1;
        }
        if ( !v15 || (_BYTE)v16 )
        {
          v14 = 0;
          if ( v15 )
            v14 = strlen(v15);
        }
        v17 = QT::QString::fromUtf8(ptr, v14, v15);
        QT::QVariant::QVariant((QT::QVariant *)v22, (const QT::QString *)ptr);
        QT::QObject::doSetProperty(v6, "class", (const QT::QVariant *)v22, (QT::QVariant *)v22);
        QT::QVariant::~QVariant((QT::QVariant *)v22);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( s )
        {
          v20 = 0;
          qfree(s, "class", v17);
        }
      }
      return v6;
    case 0xA:
      v6 = sub_4EDBA0((__int64)a1, a2);
      goto LABEL_3;
    case 0xB:
      v6 = *(QT::QWidget **)(a2 + 104);
      if ( v6 )
        goto LABEL_33;
      return nullptr;
    case 0xC:
      v6 = sub_4ECF90((__int64)a1, a2);
      goto LABEL_3;
    case 0xD:
      v6 = sub_4EE3E0((__int64)a1, a2);
      goto LABEL_3;
    case 0xE:
      v6 = sub_4ED900((__int64)a1, a2, a3, a4, a5);
      goto LABEL_3;
    case 0xF:
      v6 = sub_4ED040((__int64)a1, a2);
      goto LABEL_3;
    default:
      return nullptr;
  }
}
