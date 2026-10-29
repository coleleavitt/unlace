unsigned __int64 __fastcall sub_191BC0(QT::QAbstractItemView ***a1, __int64 a2)
{
  QT::QAbstractItemView **v2; // rax
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rsi
  __int64 v8; // [rsp+Fh] [rbp-29h] BYREF
  char v9; // [rsp+17h] [rbp-21h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = *a1;
  v10 = __readfsqword(0x28u);
  v4 = QT::QAbstractItemView::model(*v2);
  v5 = *(__int64 **)(v4 + 216);
  if ( !v5 )
    v5 = *(__int64 **)(v4 + 208);
  v6 = *v5;
  v8 = -1;
  v9 = 0;
  dirtree_resolve_cursor(&v8, v6, a2 + 24);
  if ( v8 != -1 && !v9 )
    *a1[1] = (QT::QAbstractItemView *)(unsigned int)sub_198090(**a1);
  return v10 - __readfsqword(0x28u);
}
