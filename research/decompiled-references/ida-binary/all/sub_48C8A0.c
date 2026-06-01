__int64 __fastcall sub_48C8A0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v17; // [rsp+Fh] [rbp-39h] BYREF
  char v18; // [rsp+17h] [rbp-31h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v6 = 1;
  v8 = *a2;
  v19 = __readfsqword(0x28u);
  v18 = 0;
  v17 = -1;
  dirtree_resolve_cursor(&v17, v8, a3);
  if ( v17 != -1 )
  {
    if ( v18 )
    {
      v6 = 2;
      if ( a5 )
        v6 = (unsigned __int8)QT::QTreeView::isExpanded(a5, a4, v10, v11, v12, v13) + 2;
    }
  }
  v14 = QT::QDataStream::operator<<(a1, *a3);
  v15 = QT::QDataStream::operator<<(v14, a3[1]);
  return QT::QDataStream::operator<<(v15, v6);
}
