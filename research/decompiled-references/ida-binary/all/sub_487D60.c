__int64 __fastcall sub_487D60(QT::QAbstractItemView *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // [rsp+Fh] [rbp-19h] BYREF
  unsigned __int8 v11; // [rsp+17h] [rbp-11h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 200);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(v2 + 8);
  if ( !v3 )
    return 0;
  result = 1;
  if ( v3 == 1 )
  {
    v6 = QT::QAbstractItemView::model(a1);
    v7 = *(__int64 **)(v6 + 216);
    if ( !v7 )
      v7 = *(__int64 **)(v6 + 208);
    v8 = *v7;
    v9 = **(_QWORD **)(a2 + 200);
    v11 = 0;
    v10 = -1;
    dirtree_resolve_cursor(&v10, v8, v9);
    if ( v10 != -1 )
      return v11 ^ 1u;
    return 0;
  }
  return result;
}
