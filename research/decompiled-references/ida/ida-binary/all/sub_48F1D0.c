unsigned __int64 __fastcall sub_48F1D0(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD v5[4]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  QT::QAbstractItemView *v10; // [rsp+48h] [rbp-30h]
  unsigned __int64 v11; // [rsp+58h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v6[1] = this;
  v6[0] = dirtree_widget_qmodel_visitor_t___vtable;
  v7 = QT::QAbstractItemView::model(this);
  v2 = QT::QAbstractItemView::model(this);
  v3 = *(_QWORD *)(v2 + 216);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 208);
  v8 = v3;
  v6[0] = base_dirtree_widget_t::restore_buckets;
  v9 = a2;
  v10 = this;
  if ( (*(_BYTE *)(a2 + 112) & 0x10) != 0 )
  {
    v5[0] = 0;
    v5[1] = 0xFFFFFFFF00000000LL;
    v5[2] = v7;
    sub_48A940(v6, (__int64)v5);
  }
  return v11 - __readfsqword(0x28u);
}
