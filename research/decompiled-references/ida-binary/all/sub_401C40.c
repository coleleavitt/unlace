__int64 __fastcall sub_401C40(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 112) + 72LL) = a2;
  result = sub_400520(a1, *(_QWORD *)(a1 + 280), a3, a4, a5, a6);
  if ( !*(_BYTE *)(a1 + 464) )
    return QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
  return result;
}
