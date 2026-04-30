__int64 __fastcall sub_494BB0(
        QT::QAbstractItemView *this,
        __int64 a2,
        int a3,
        __int64 a4,
        double a5,
        double a6,
        __m128 a7)
{
  char v7; // bl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v7 = a3;
  v18 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 112) = a3;
  v14[1] = this;
  v14[0] = dirtree_widget_qmodel_visitor_t___vtable;
  v15 = QT::QAbstractItemView::model(this);
  v9 = QT::QAbstractItemView::model(this);
  v10 = *(_QWORD *)(v9 + 216);
  if ( !v10 )
    v10 = *(_QWORD *)(v9 + 208);
  v16 = v10;
  v14[0] = base_dirtree_widget_t::collect_tree_state;
  v17 = a2;
  if ( (v7 & 0x10) != 0 )
  {
    v13[0] = 0;
    v13[1] = 0xFFFFFFFF00000000LL;
    v13[2] = v15;
    sub_48A940(v14, (__int64)v13);
  }
  if ( (v7 & 0x40) != 0 && a4 )
  {
    sub_493A60((const __m128i *)(v17 + 24), a4, this);
    if ( (v7 & 0x80) == 0 )
      return 1;
LABEL_10:
    v12 = QT::QAbstractItemView::model(this);
    sub_494920(a5, a6, a7, v12, (__int64 *)(v17 + 88), this);
    return 1;
  }
  if ( v7 < 0 )
    goto LABEL_10;
  return 1;
}
