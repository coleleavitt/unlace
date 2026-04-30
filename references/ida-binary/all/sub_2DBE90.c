__int64 __fastcall sub_2DBE90(QT::QAbstractItemView *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  __int64 v8; // [rsp+Fh] [rbp-29h] BYREF
  char v9; // [rsp+17h] [rbp-21h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v3 = QT::QAbstractItemView::model(a1);
  v4 = *(__int64 **)(v3 + 216);
  if ( !v4 )
    v4 = *(__int64 **)(v3 + 208);
  v5 = *v4;
  v9 = 0;
  v8 = -1;
  dirtree_resolve_cursor(&v8, v5, a2);
  result = v8;
  if ( v8 != -1 )
  {
    if ( v9 )
    {
      return -1;
    }
    else
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1136LL);
      if ( v7 != sub_2DB460 )
        return v7((__int64)a1, v8);
    }
  }
  return result;
}
