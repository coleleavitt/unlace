unsigned __int64 __fastcall sub_494F50(QT::QAbstractItemView *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD *v9[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+30h] [rbp-58h]
  __int64 v11; // [rsp+38h] [rbp-50h]
  void *ptr[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v9[1] = this;
  v9[0] = dirtree_widget_qmodel_visitor_t___vtable;
  v10 = QT::QAbstractItemView::model(this);
  v1 = QT::QAbstractItemView::model(this);
  v5 = *(_QWORD *)(v1 + 216);
  if ( !v5 )
    v5 = *(_QWORD *)(v1 + 208);
  v11 = v5;
  v9[0] = base_dirtree_widget_t::copy_all;
  memset(ptr, 0, sizeof(ptr));
  sub_494DC0(ptr, 100, v5, v2, v3, v4);
  v8[1] = 0xFFFFFFFF00000000LL;
  v8[0] = 0;
  v8[2] = v10;
  sub_48A940(v9, (__int64)v8);
  v6 = QT::QTreeView::header(this);
  sub_4EAA40(this, v6, ptr, 1);
  v9[0] = base_dirtree_widget_t::copy_all;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v13 - __readfsqword(0x28u);
}
