__int64 __fastcall sub_3C5ED0(QT::QAbstractItemView *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+Fh] [rbp-19h] BYREF
  char v8; // [rsp+17h] [rbp-11h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v3 = QT::QAbstractItemView::model(a1);
  v4 = *(__int64 **)(v3 + 216);
  if ( !v4 )
    v4 = *(__int64 **)(v3 + 208);
  if ( *a2 == -1 && a2[1] )
    return 0;
  v5 = *v4;
  v8 = 0;
  v7 = -1;
  dirtree_resolve_cursor(&v7, v5, a2);
  result = v7;
  if ( v7 == -1 || v8 )
    return 0;
  return result;
}
