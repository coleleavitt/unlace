void __fastcall ColorsOptionsDialog__::vfunc_3(QT::QDialog *this)
{
  int v2; // eax
  void *v3; // rdi
  const char *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD v13[2]; // [rsp+0h] [rbp-88h] BYREF
  char *v14; // [rsp+10h] [rbp-78h] BYREF
  __int128 v15; // [rsp+18h] [rbp-70h]
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  _QWORD *v20; // [rsp+58h] [rbp-30h]
  unsigned __int64 v21; // [rsp+68h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  *(_QWORD *)this = &ColorsOptionsDialog___vtable;
  *((_QWORD *)this + 2) = ColorsOptionsDialog___vtable_at__16;
  *((_QWORD *)this + 6) = ColorsOptionsDialog___vtable_at__48;
  if ( (unsigned __int8)netnode_inited() )
  {
    v17 = 0;
    v13[0] = &simpleline_place_t___vtable;
    v13[1] = 0x300000000LL;
    v16 = 0;
    v18 = 0xFFFFFFFFLL;
    v19 = 1;
    v20 = v13;
    v20 = (_QWORD *)simpleline_place_t__clone(v13);
    v14 = nullptr;
    v15 = 0;
    v14 = (char *)qvector_reserve(&v14, 0, 16, 1);
    *(_QWORD *)&v15 = 16;
    strcpy(v14, "Sample bookmark");
    bookmarks_t_mark(&v16, 0, 0, &unk_5C2F25, *(_QWORD *)(*((_QWORD *)this + 33) + 728LL));
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, nullptr);
    }
    if ( v20 )
      qfree(v20, nullptr);
  }
  v2 = QT::QTabWidget::currentIndex(*(QT::QTabWidget **)(*((_QWORD *)this + 32) + 40LL));
  v3 = *((void **)this + 32);
  dword_8CAE38 = v2;
  if ( v3 )
    operator delete(v3, 0x510u);
  v4 = (char *)this + 48;
  unhook_event_listener(1, (char *)this + 48);
  sub_1B3F90((_QWORD *)this + 33, (const char *)this + 48);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
  {
    *((_QWORD *)this + 30) = 0;
    qfree(v5, v4);
  }
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
  {
    *((_QWORD *)this + 27) = 0;
    qfree(v6, v4);
  }
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    *((_QWORD *)this + 24) = 0;
    qfree(v7, v4);
  }
  v8 = *((_QWORD *)this + 20);
  if ( v8 )
  {
    *((_QWORD *)this + 21) = 0;
    qfree(v8, v4);
  }
  v9 = *((_QWORD *)this + 17);
  if ( v9 )
  {
    *((_QWORD *)this + 18) = 0;
    qfree(v9, v4);
  }
  v10 = *((_QWORD *)this + 14);
  if ( v10 )
  {
    *((_QWORD *)this + 15) = 0;
    qfree(v10, v4);
  }
  v11 = *((_QWORD *)this + 11);
  if ( v11 )
  {
    *((_QWORD *)this + 12) = 0;
    qfree(v11, v4);
  }
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
  {
    *((_QWORD *)this + 9) = 0;
    qfree(v12, v4);
  }
  *((_QWORD *)this + 6) = &off_86FB08;
  remove_event_listener((char *)this + 48);
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
