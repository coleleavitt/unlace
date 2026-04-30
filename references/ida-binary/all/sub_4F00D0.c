QT::QFont *__fastcall sub_4F00D0(QT::QFont *this, __int64 a2, __int64 a3, const QT::QFont *a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // rdi
  int v10; // ebx
  __int128 *v11; // rbx
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int64 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 16);
  v17 = __readfsqword(0x28u);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int128 *, unsigned __int64, __int64, __int64))(*(_QWORD *)v6 + 144LL))(&v14, v6, a3, 6);
    v6 = v16 & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    v15 = 0;
    v16 = 2;
    v14 = 0;
  }
  v13[0] = v6;
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)v13)
    && (unsigned __int8)QT::QMetaType::canConvert(v16 & 0xFFFFFFFFFFFFFFFCLL, &unk_86BEE0) )
  {
    v9 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (_UNKNOWN *)(v16 & 0xFFFFFFFFFFFFFFFCLL) == &unk_86BEE0 )
      goto LABEL_15;
    if ( !v9 || !&unk_86BEE0 )
      goto LABEL_17;
    v10 = *(_DWORD *)&byte_9[4 * (v16 >> 2) + 3];
    if ( !v10 )
      v10 = QT::QMetaType::registerHelper(v9);
    if ( v10 == 4096 )
    {
LABEL_15:
      QT::QFont::QFont(this, (const QT::QFont *)&v14);
    }
    else
    {
LABEL_17:
      QT::QFont::QFont((QT::QFont *)v13);
      v11 = &v14;
      if ( (v16 & 1) != 0 )
        v11 = (__int128 *)(*(int *)(v14 + 4) + (_QWORD)v14);
      v12 = QT::QVariant::metaType((QT::QVariant *)&v14);
      QT::QMetaType::convert(v12, v11, &unk_86BEE0, v13);
      QT::QFont::QFont(this, (const QT::QFont *)v13);
      QT::QFont::~QFont((QT::QFont *)v13);
    }
  }
  else if ( *(_BYTE *)(a2 + 32) )
  {
    QT::QFont::QFont(this, (const QT::QFont *)(a2 + 16));
  }
  else
  {
    QT::QFont::QFont(this, a4);
  }
  QT::QVariant::~QVariant((QT::QVariant *)&v14);
  return this;
}
