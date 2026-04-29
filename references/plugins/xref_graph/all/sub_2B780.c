unsigned __int64 __fastcall sub_2B780(QT::QGraphicsItem *a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  QT::QGraphicsItem::QGraphicsItem(a1, nullptr);
  *((_QWORD *)a1 + 2) = a2;
  *(_QWORD *)a1 = edge_t___vtable;
  *((_QWORD *)a1 + 3) = a3;
  *((_QWORD *)a1 + 5) = 0;
  *((_BYTE *)a1 + 48) = 0;
  *((_DWORD *)a1 + 8) = a4;
  *((_DWORD *)a1 + 13) = a4;
  *(_OWORD *)((char *)a1 + 56) = 0;
  *(_OWORD *)((char *)a1 + 72) = 0;
  QT::QPainterPath::QPainterPath((QT::QGraphicsItem *)((char *)a1 + 88));
  QT::QPainterPath::QPainterPath((QT::QGraphicsItem *)((char *)a1 + 96));
  v6 = *((_QWORD **)a1 + 2);
  if ( !v6 )
    goto LABEL_10;
  if ( !*((_QWORD *)a1 + 3) )
  {
    if ( under_debugger )
      goto LABEL_12;
    interr(30829);
LABEL_10:
    if ( !under_debugger )
      interr(30828);
LABEL_12:
    BUG();
  }
  v7 = v6[13];
  v8 = v6[12];
  if ( v6[14] < (unsigned __int64)(v7 + 1) )
  {
    v13 = qvector_reserve(v6 + 12, v8, v7 + 1, 8);
    v6[12] = v13;
    v8 = v13;
    v7 = v6[13];
  }
  *(_QWORD *)(v8 + 8 * v7) = a1;
  ++v6[13];
  v9 = *((_QWORD **)a1 + 3);
  v10 = v9[13];
  v11 = v9[12];
  if ( v9[14] < (unsigned __int64)(v10 + 1) )
  {
    v14 = qvector_reserve(v9 + 12, v11, v10 + 1, 8);
    v9[12] = v14;
    v11 = v14;
    v10 = v9[13];
  }
  *(_QWORD *)(v11 + 8 * v10) = a1;
  ++v9[13];
  sub_2AD20(a1);
  QT::QGraphicsItem::setAcceptedMouseButtons(a1, 1);
  QT::QGraphicsItem::setAcceptHoverEvents(a1, 1);
  return v15 - __readfsqword(0x28u);
}
