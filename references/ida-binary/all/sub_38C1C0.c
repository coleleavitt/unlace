unsigned __int64 __fastcall sub_38C1C0(__int64 a1, __int64 a2, double a3)
{
  QT::QAbstractScrollArea *v4; // rdi
  QT::QCursor *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v4 = *(QT::QAbstractScrollArea **)(a1 + 80);
  v12 = __readfsqword(0x28u);
  v5 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(v4);
  v6 = sub_1C7B10(v5);
  v7 = *(_QWORD *)(a1 + 80);
  v11 = v6;
  v8 = QT::QTreeWidget::itemAt(v7, &v11);
  if ( v8 )
  {
    v9 = sub_38B880(a1, v8);
    sub_38C100(a1, a2, v9, 0, a3);
  }
  *(_BYTE *)(a2 + 104) = 0;
  return v12 - __readfsqword(0x28u);
}
