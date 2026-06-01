unsigned __int64 __fastcall sub_301F20(__int64 a1, unsigned __int8 a2, double a3)
{
  int dbctx_id; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64, unsigned __int8); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  __int64 Child_helper; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 dbctx_qty; // [rsp+8h] [rbp-90h]
  int v23; // [rsp+2Ch] [rbp-6Ch] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+40h] [rbp-58h]
  unsigned __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  ++*(_DWORD *)(a1 + 748);
  dbctx_id = get_dbctx_id();
  sub_277730(&v23, dbctx_id);
  dbctx_qty = get_dbctx_qty(&v23);
  if ( dbctx_qty )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( j__switch_dbctx(v5) )
      {
        v8 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v9 = *(__int64 (**)(void))(*v8 + 168LL);
        if ( v9 == IDAApplication__::vfunc_21 )
        {
          v8 = v24;
          get_builtin_widgets_state(v24);
          v10 = v24[0];
          v11 = v24[1];
        }
        else
        {
          v10 = v9();
          v11 = v19;
        }
        if ( v11 | v10 )
          break;
      }
LABEL_9:
      if ( dbctx_qty == ++v5 )
        goto LABEL_32;
    }
    if ( (v10 & 0x400000000000400LL) != 0 )
      sub_3C7040(v8);
    sub_5110E0(v10, v11, a2);
    v13 = 0;
    if ( (v10 & 0x2000000) != 0 )
      sub_28E8C0(-1);
    sub_27EA50(v10, v11, a3, v12, v13);
    if ( (v10 & 0x4000000) != 0 && *(char *)(*((_QWORD *)qword_8CF010 + 4) + 9LL) < 0 )
      QT::QWidget::update(*((QT::QWidget **)qword_8CF010 + 87));
    v14 = (_QWORD *)v10;
    v15 = (_QWORD *)v11;
    sub_18DE90(v10);
    if ( v10 >= 0 )
    {
      if ( (v11 & 2) != 0 )
        goto LABEL_25;
    }
    else
    {
      QT::QEvent::QEvent(v24, 3001);
      v25 = v10;
      v24[0] = &refresh_dirty_widgets_event_t___vtable;
      v26 = v11;
      Child_helper = sub_41A4D0("Vault files");
      if ( Child_helper )
        Child_helper = QT::qt_qFindChild_helper(Child_helper, 0, 0, &off_878400, 1);
      v15 = v24;
      sub_51B5E0(Child_helper, v24);
      v14 = v24;
      v24[0] = &refresh_dirty_widgets_event_t___vtable;
      QT::QEvent::~QEvent((QT::QEvent *)v24);
      if ( (v11 & 2) != 0 )
      {
LABEL_25:
        QT::QEvent::QEvent(v24, 3001);
        v25 = v10;
        v24[0] = &refresh_dirty_widgets_event_t___vtable;
        v26 = v11;
        v17 = sub_41A4D0("Local files");
        if ( v17 )
          v17 = QT::qt_qFindChild_helper(v17, 0, 0, &off_8795C0, 1);
        v15 = v24;
        sub_51B5E0(v17, v24);
        v14 = v24;
        v24[0] = &refresh_dirty_widgets_event_t___vtable;
        QT::QEvent::~QEvent((QT::QEvent *)v24);
        if ( (v11 & 4) == 0 )
          goto LABEL_5;
        goto LABEL_28;
      }
    }
    if ( (v11 & 4) == 0 )
    {
LABEL_5:
      if ( (v10 & 0x20000000) != 0 )
        sub_349FB0(v14, v15);
      v6 = *(_QWORD *)(a1 + 24) + 16LL;
      v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int8))(*(_QWORD *)v6 + 176LL);
      if ( v7 == IDAApplication__::vfunc_22 )
        mark_builtin_widgets(-1, -1, 0);
      else
        v7(v6, -1, -1, 0);
      goto LABEL_9;
    }
LABEL_28:
    QT::QEvent::QEvent(v24, 3001);
    v25 = v10;
    v24[0] = &refresh_dirty_widgets_event_t___vtable;
    v26 = v11;
    v18 = sub_41A4D0("Worklists");
    if ( v18 )
      v18 = QT::qt_qFindChild_helper(v18, 0, 0, &off_878E40, 1);
    v15 = v24;
    sub_51B5E0(v18, v24);
    v14 = v24;
    v24[0] = &refresh_dirty_widgets_event_t___vtable;
    QT::QEvent::~QEvent((QT::QEvent *)v24);
    goto LABEL_5;
  }
LABEL_32:
  --*(_DWORD *)(a1 + 748);
  sub_277860(&v23);
  return v27 - __readfsqword(0x28u);
}
