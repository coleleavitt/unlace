__int64 __fastcall sub_521610(QT::QAbstractItemView *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  char *v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+7h] [rbp-51h] BYREF
  char v15; // [rsp+Fh] [rbp-49h]
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = 0;
  v16[3] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_4DFF10((__int64)this + 304) )
  {
    v5 = QT::QAbstractItemView::model(this);
    v16[0] = sub_48B5B0(v5, a3);
    v16[1] = v6;
    if ( v16[0] != -1 || !v6 )
    {
      v7 = QT::QAbstractItemView::model(this);
      v8 = *(__int64 **)(v7 + 216);
      if ( !v8 )
        v8 = *(__int64 **)(v7 + 208);
      v9 = *v8;
      v14 = -1;
      v15 = 0;
      dirtree_resolve_cursor(&v14, v9, v16);
      v10 = v14;
      QT::QAbstractItemView::model(this);
      if ( v10 != -1
        && !v15
        && (v11 = sub_4DFB30((char *)this + 304), (v12 = sub_4D8990(v11, v10)) != 0)
        && *(_DWORD *)(v12 + 96) == *(_DWORD *)(a3 + 4) )
      {
        return v12 + 48;
      }
      else
      {
        return 0;
      }
    }
  }
  return v3;
}
