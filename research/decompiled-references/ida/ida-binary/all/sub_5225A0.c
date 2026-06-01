__int64 __fastcall sub_5225A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  QT::QTreeView *v3; // rdi
  QT::QHeaderView *v4; // rbp
  __int64 v5; // rax
  int v6; // ebx
  int v7; // r12d
  int v8; // eax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  result = 6;
  v9[1] = __readfsqword(0x28u);
  v3 = *(QT::QTreeView **)(a2 + 328);
  if ( v3 )
  {
    v4 = (QT::QHeaderView *)QT::QTreeView::header(v3);
    v9[0] = QT::QCursor::pos(v3);
    v5 = QT::QWidget::mapFromGlobal(v4, v9);
    v6 = v5;
    v7 = HIDWORD(v5);
    if ( (unsigned int)QT::QHeaderView::orientation(v4) == 1 )
      v8 = QT::QHeaderView::logicalIndexAt(v4, v6);
    else
      v8 = QT::QHeaderView::logicalIndexAt(v4, v7);
    dword_8C3160 = v8;
    return 3;
  }
  return result;
}
