void __fastcall sub_3EE920(int a1, _QWORD *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rax

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
    v3 = (_DWORD *)a2[3];
    if ( v3 )
      --*v3;
    operator delete(a2, 0x20u);
  }
}
