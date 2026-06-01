QT::QWidget *__fastcall sub_346940(_QWORD *a1)
{
  int v1; // r12d
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rsi
  QT::QWidget *v10; // rbx
  QT::QWidget *v11; // rbx
  __int64 v13; // rax
  QT::QLayout *v14; // [rsp+0h] [rbp-88h]
  int v15; // [rsp+Ch] [rbp-7Ch]
  __int64 v16; // [rsp+10h] [rbp-78h]
  QT::QWidget *v17; // [rsp+18h] [rbp-70h]
  int v18; // [rsp+20h] [rbp-68h] BYREF
  int v19; // [rsp+24h] [rbp-64h]
  char v20[8]; // [rsp+28h] [rbp-60h] BYREF
  void *ptr[11]; // [rsp+30h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v17 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v17, 0, 0);
  v14 = (QT::QLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v14);
  v1 = 0;
  QT::QLayout::setContentsMargins(v14, 0, 0, 0, 0);
  QT::QLayoutItem::setAlignment((char *)v14 + 16, 65);
  do
  {
    v3 = a1[8];
    v4 = a1[7];
    if ( a1[9] < (unsigned __int64)(v3 + 1) )
    {
      v5 = qvector_reserve(a1 + 7, v4, v3 + 1, 16);
      a1[7] = v5;
      v4 = v5;
      v3 = a1[8];
    }
    v2 = 16 * v3 + v4;
    *(_DWORD *)(v2 + 8) = -1;
    *(_QWORD *)v2 = 0;
    ++a1[8];
    *(_DWORD *)(v2 + 8) = v1++;
  }
  while ( v1 != 6 );
  v6 = a1[8];
  v7 = a1[7];
  if ( a1[9] < (unsigned __int64)(v6 + 1) )
  {
    v13 = qvector_reserve(a1 + 7, v7, v6 + 1, 16);
    a1[7] = v13;
    v7 = v13;
    v6 = a1[8];
  }
  v8 = 0;
  v9 = 16 * v6 + v7;
  *(_DWORD *)(v9 + 8) = -1;
  *(_QWORD *)v9 = 0;
  ++a1[8];
  *(_DWORD *)(v9 + 8) = 10;
  v16 = a1[8];
  if ( v16 )
  {
    do
    {
      v10 = (QT::QWidget *)operator new(0x28u);
      sub_53B9D0(v10, 0);
      QT::QWidget::setSizePolicy(v10, 0);
      QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(a1[4] + 56LL));
      v15 = QT::QFontMetrics::height((QT::QFontMetrics *)ptr);
      QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v20, (const QT::QFont *)(a1[4] + 56LL));
      v18 = QT::QFontMetrics::height((QT::QFontMetrics *)v20);
      v19 = v15;
      QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v20);
      QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
      QT::QWidget::resize(v10, &v18);
      QT::QWidget::setMaximumSize(v10, v18, v19);
      QT::QWidget::setMinimumSize(v10, v18, v19);
      QT::QBoxLayout::addWidget(v14, v10, 0, 0);
      *(_QWORD *)(a1[7] + 16 * v8) = v10;
      v11 = (QT::QWidget *)operator new(0x28u);
      QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_88CC00, (const char *)*(&off_866E80 + v8), 0);
      sub_53BA20(v11, ptr, 0);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      ++v8;
      QT::QWidget::setMinimumWidth(v11, 1);
      QT::QBoxLayout::addWidget(v14, v11, 0, 0);
    }
    while ( v16 != v8 );
  }
  QT::QWidget::setLayout(v17, v14);
  QT::QWidget::setSizePolicy(v17, 0x40000);
  return v17;
}
