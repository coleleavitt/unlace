QT::QTextFormat *__fastcall sub_5184C0(QT::QTextFormat *this, __int64 a2, int a3)
{
  __int64 v3; // r12
  signed int v6; // ebx
  __int64 v7; // rdi
  char v8; // r13
  char v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v20[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v3 = a2;
  v21 = __readfsqword(0x28u);
  QT::QTextCharFormat::QTextCharFormat(this);
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( (unsigned int)v6 <= 0xA )
    {
      v13 = *(_QWORD *)(a2 + 16);
      LODWORD(a2) = v6;
      v14 = sub_524F80(v13 + 40, v6, 1);
      v15 = *(_QWORD *)(v3 + 16);
      v7 = (unsigned int)__ROR4__(_byteswap_ulong(v14), 8);
      v9 = *(_BYTE *)(v15 + v6 + 160);
      v8 = *(_BYTE *)(v15 + v6 + 171);
    }
    else
    {
      v7 = 4278190080LL;
      v8 = 0;
      v9 = 0;
    }
  }
  else
  {
    v16 = QT::QWidget::palette(*(QT::QWidget **)(a2 + 16));
    LODWORD(a2) = 4;
    v17 = QT::QPalette::brush(v16, 4, 0);
    v8 = 0;
    v9 = 0;
    v7 = (unsigned int)__ROR4__(
                         _byteswap_ulong(__ROR4__(_byteswap_ulong(QT::QColor::rgba((QT::QColor *)(*(_QWORD *)v17 + 8LL))), 8)),
                         8);
  }
  v10 = QT::QColor::fromRgba((QT::QColor *)v7, a2);
  v19[1] = v11;
  v19[0] = v10;
  QT::QBrush::QBrush(v18, v19, 1);
  QT::QBrush::operator QT::QVariant(v20, v18);
  QT::QTextFormat::setProperty(this, 2081, (const QT::QVariant *)v20);
  QT::QVariant::~QVariant((QT::QVariant *)v20);
  QT::QBrush::~QBrush((QT::QBrush *)v18);
  if ( v9 )
  {
    QT::QVariant::QVariant((QT::QVariant *)v20, 700);
    QT::QTextFormat::setProperty(this, 8195, (const QT::QVariant *)v20);
    QT::QVariant::~QVariant((QT::QVariant *)v20);
  }
  QT::QVariant::QVariant((QT::QVariant *)v20, v8);
  QT::QTextFormat::setProperty(this, 8196, (const QT::QVariant *)v20);
  QT::QVariant::~QVariant((QT::QVariant *)v20);
  return this;
}
