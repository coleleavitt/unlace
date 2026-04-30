__int64 __fastcall sub_490030(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  result = QT::QTreeView::isExpanded(a1, a2, a3, a4, a5, a6);
  if ( !(_BYTE)result )
  {
    result = *(unsigned int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 808LL))(a1) + 1840);
    if ( (int)result > 0 )
      return QT::QTreeView::expand(a1, a2);
  }
  return result;
}
