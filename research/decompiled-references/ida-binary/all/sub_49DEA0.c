__int64 __fastcall sub_49DEA0(__int64 a1, QT::QHeaderView *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r13
  int v6; // r14d
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  char v9; // al
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 48) = -1;
  *(_BYTE *)(a1 + 52) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v3 = QT::QHeaderView::count(a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v3;
  v6 = v3;
  if ( v4 < v3 )
  {
    v11 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v3 )
    {
      v13 = qvector_reserve(a1, v11, v3, 1);
      *(_QWORD *)a1 = v13;
      v4 = *(_QWORD *)(a1 + 8);
      v11 = v13;
    }
    memset((void *)(v11 + v4), 0, v5 - v4);
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v7 >= v5 )
    {
LABEL_5:
      if ( v5 == v7 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v3 != v4 )
      *(_QWORD *)(a1 + 8) = v3;
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 >= v3 )
      goto LABEL_5;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < v5 )
  {
    v14 = qvector_reserve(a1 + 24, v12, v5, 4);
    *(_QWORD *)(a1 + 24) = v14;
    v7 = *(_QWORD *)(a1 + 32);
    v12 = v14;
  }
  memset((void *)(v12 + 4 * v7), 0, 4 * (v5 - v7));
LABEL_6:
  *(_QWORD *)(a1 + 32) = v5;
LABEL_7:
  v8 = 0;
  if ( v6 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = QT::QHeaderView::isSectionHidden(a2, v8) ^ 1;
        *(_BYTE *)(*(_QWORD *)a1 + v8) = v9;
        if ( v9 )
          break;
        if ( v5 == ++v8 )
          goto LABEL_12;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v8) = QT::QHeaderView::sectionSize(a2, v8);
      ++v8;
    }
    while ( v5 != v8 );
  }
LABEL_12:
  result = QT::QHeaderView::isSortIndicatorShown(a2);
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a1 + 48) = QT::QHeaderView::sortIndicatorSection(a2);
    result = QT::QHeaderView::sortIndicatorOrder(a2);
    *(_BYTE *)(a1 + 52) = (_DWORD)result == 1;
  }
  return result;
}
