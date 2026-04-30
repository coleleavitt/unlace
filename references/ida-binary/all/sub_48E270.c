__int64 __fastcall sub_48E270(QT::QAbstractItemView *this, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD *v7[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+30h] [rbp-58h]
  __int64 v9; // [rsp+38h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  char v11; // [rsp+48h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  unsigned __int64 v13; // [rsp+68h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v7[1] = this;
  v7[0] = dirtree_widget_qmodel_visitor_t___vtable;
  v8 = QT::QAbstractItemView::model(this);
  v2 = QT::QAbstractItemView::model(this);
  v3 = *(_QWORD *)(v2 + 216);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 208);
  v9 = v3;
  v7[0] = base_dirtree_widget_t::find_first_direntry;
  v4 = *a2;
  v6[0] = 0;
  v10 = v4;
  LOBYTE(v4) = *((_BYTE *)a2 + 8);
  v12 = -1;
  v11 = v4;
  v6[1] = 0xFFFFFFFF00000000LL;
  v6[2] = v8;
  sub_48A940(v7, (__int64)v6);
  return v12;
}
