unsigned __int64 __fastcall sub_48E8B0(
        QT::QAbstractItemView *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v13[4]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD *v14[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+30h] [rbp-78h]
  __int64 v16; // [rsp+38h] [rbp-70h]
  QT::QAbstractItemView *v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+60h] [rbp-48h]
  char v22; // [rsp+64h] [rbp-44h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v14[1] = this;
  v14[0] = dirtree_widget_qmodel_visitor_t___vtable;
  v15 = QT::QAbstractItemView::model(this);
  v10 = QT::QAbstractItemView::model(this);
  v11 = *(_QWORD *)(v10 + 216);
  if ( !v11 )
    v11 = *(_QWORD *)(v10 + 208);
  v16 = v11;
  v14[0] = base_dirtree_widget_t::sync_view_helper;
  v13[1] = 0xFFFFFFFF00000000LL;
  v17 = this;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v21 = a5;
  v22 = a6;
  v13[0] = 0;
  v13[2] = v15;
  sub_48A940(v14, (__int64)v13);
  return v23 - __readfsqword(0x28u);
}
