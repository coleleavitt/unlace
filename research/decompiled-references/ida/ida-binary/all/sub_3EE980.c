void __fastcall sub_3EE980(int a1, _QWORD *a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = a2[2];
      if ( !*(_BYTE *)(v2 + 464) )
        QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(v2 + 104), 0);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
