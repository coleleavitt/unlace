QT::QPushButton *__fastcall sub_4EDBA0(__int64 a1, __int64 a2)
{
  QT::QPushButton *v2; // rbp
  __int64 v3; // rax
  size_t v4; // rax
  const char *v5; // r12
  size_t v6; // rdx
  const char *v8; // rbx
  char *v9; // rax
  _QWORD *v10; // rax
  _BYTE v11[8]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v12[16]; // [rsp+10h] [rbp-58h] BYREF
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = (QT::QPushButton *)operator new(0x28u);
  v3 = *(_QWORD *)(a2 + 112);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = *(const char **)(a2 + 104);
    v6 = v4 >> 63;
  }
  else
  {
    LOBYTE(v6) = 0;
    v4 = 0;
    v5 = &s1;
  }
  if ( !v5 || (_BYTE)v6 )
  {
    v4 = 0;
    if ( v5 )
      v4 = strlen(v5);
  }
  QT::QString::fromUtf8(ptr, v4, v5);
  QT::QPushButton::QPushButton(v2, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( *(_DWORD *)(a2 + 128) != 1 )
      return v2;
  }
  else if ( *(_DWORD *)(a2 + 128) != 1 )
  {
    return v2;
  }
  QT::QPushButton::setFlat(v2, 1);
  QT::QFont::QFont((QT::QFont *)v12, (const QT::QFont *)(*((_QWORD *)v2 + 4) + 56LL));
  if ( *(_QWORD *)(a2 + 112) && (v8 = *(const char **)(a2 + 104), (v9 = strchr(v8, 38)) != nullptr) && v9 - v8 != -1 )
    QT::QFont::setStyle(v12, 1);
  else
    QT::QFont::setUnderline((QT::QFont *)v12, 1);
  QT::QWidget::setFont(v2, (const QT::QFont *)v12);
  QT::QPalette::QPalette((QT::QPalette *)ptr);
  v10 = (_QWORD *)QT::QPalette::brush(ptr, 4, 14);
  QT::QBrush::QBrush(v11, *v10 + 8LL, 1);
  QT::QPalette::setBrush(ptr, 5, 8, v11);
  QT::QBrush::~QBrush((QT::QBrush *)v11);
  QT::QWidget::setPalette(v2, (const QT::QPalette *)ptr);
  QT::QPalette::~QPalette((QT::QPalette *)ptr);
  QT::QFont::~QFont((QT::QFont *)v12);
  return v2;
}
