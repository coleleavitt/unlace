void __fastcall sub_2D660(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  QT::QVariant *v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  _DWORD *v7; // rdi
  unsigned __int64 v8; // rax
  int v9; // r14d
  int v10; // eax
  __int128 v11; // xmm0
  QT::QVariant *v12; // r14
  __int64 v13; // rax
  QT::QWidget *v14; // rdi
  __int128 v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = *(QT::QVariant **)(a4 + 8);
      v5 = a2[2];
      v6 = *((_QWORD *)v4 + 3);
      v7 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
      v8 = v6 >> 2;
      if ( v7 == QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QPointF>::metaType )
        goto LABEL_11;
      if ( !v7 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QPointF>::metaType )
        goto LABEL_15;
      v9 = *(_DWORD *)&byte_9[4 * v8 + 3];
      if ( !v9 )
        v9 = ((__int64 (*)(void))QT::QMetaType::registerHelper)();
      v10 = QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QPointF>::metaType[3];
      if ( !v10 )
        v10 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QPointF>::metaType);
      if ( v10 == v9 )
      {
LABEL_11:
        v11 = *(_OWORD *)v4;
      }
      else
      {
LABEL_15:
        v12 = v4;
        v15 = 0;
        if ( (*((_BYTE *)v4 + 24) & 1) != 0 )
          v12 = (QT::QVariant *)(*(int *)(*(_QWORD *)v4 + 4LL) + *(_QWORD *)v4);
        v13 = QT::QVariant::metaType(v4);
        QT::QMetaType::convert(v13, v12, QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QPointF>::metaType, &v15);
        v11 = v15;
      }
      v15 = v11;
      QT::QGraphicsView::centerOn(v5, &v15);
      v14 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a2[2] + 88LL));
      QT::QWidget::update(v14);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
