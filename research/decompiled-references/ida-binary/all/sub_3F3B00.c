void __fastcall sub_3F3B00(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  QT::QHeaderView *v5; // rax
  __int64 v6; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_BYTE **)(a4 + 8) ^ 1;
      v5 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(*(_QWORD *)(a2 + 16) + 104LL));
      QT::QHeaderView::setSectionHidden(v5, *(_DWORD *)(a2 + 24), v4);
      sub_3F3A40(*(_QWORD *)(a2 + 16));
      v6 = *(_QWORD *)(a2 + 16);
      if ( !*(_BYTE *)(v6 + 464) )
        QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(v6 + 104), 0);
    }
  }
  else if ( a2 )
  {
    operator delete((void *)a2, 0x20u);
  }
}
