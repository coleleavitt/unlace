unsigned __int64 __fastcall sub_521200(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v3; // rax
  int (*v4)(void); // rax
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD v12[4]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-A8h]
  __int128 v18; // [rsp+60h] [rbp-98h]
  __int128 v19; // [rsp+70h] [rbp-88h]
  __int128 v20; // [rsp+80h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-68h]
  __int64 v22; // [rsp+98h] [rbp-60h]
  __int64 v23; // [rsp+A0h] [rbp-58h]
  __int64 v24; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+B0h] [rbp-48h]
  __int64 v26; // [rsp+B8h] [rbp-40h]
  QT::QAbstractItemView *v27; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-30h]

  v3 = *(_QWORD *)this;
  v28 = __readfsqword(0x28u);
  v13[0] = &standalone_dirtree_widget_t::do_load_cached_list;
  v4 = *(int (**)(void))(v3 + 848);
  if ( (char *)v4 == (char *)sub_51F150 )
  {
    v5 = (_QWORD *)QT::QAbstractItemView::model(this);
    v6 = 0;
    v7 = v5;
    if ( v5 )
    {
      v8 = *v5;
      v12[0] = -1;
      v12[1] = 0;
      v12[2] = 0;
      v6 = (*(int (__fastcall **)(_QWORD *, _QWORD *))(v8 + 128))(v7, v12);
    }
  }
  else
  {
    v6 = v4();
  }
  v13[1] = a2;
  v15 = 0;
  v17 = 0;
  v14 = 0;
  v16 = 0;
  v21 = -1;
  v22 = 12;
  v23 = -1;
  v24 = -1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v6 )
  {
    v14 = qvector_reserve(&v14, 0, v6, 24);
    if ( *((_QWORD *)&v17 + 1) < v6 )
      v16 = qvector_reserve(&v16, v16, v6, 16);
  }
  v25 = v6;
  v26 = a2;
  v27 = this;
  v9 = QT::QAbstractItemView::model(this);
  v10 = *(_QWORD **)(v9 + 216);
  if ( !v10 )
    v10 = *(_QWORD **)(v9 + 208);
  dirtree_traverse(*v10, v13);
  v13[0] = &standalone_dirtree_widget_t::do_load_cached_list;
  if ( (_QWORD)v18 )
  {
    *((_QWORD *)&v18 + 1) = 0;
    qfree(v18, (const char *)v13);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, (const char *)v13);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, (const char *)v13);
  }
  return v28 - __readfsqword(0x28u);
}
