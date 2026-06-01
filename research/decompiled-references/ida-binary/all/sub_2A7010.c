unsigned __int64 __fastcall sub_2A7010(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rsi
  char v25; // bp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  QT::QObject::QObject((QT::QObject *)a1, nullptr);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = &CIMBridge___vtable;
  QT::QObject::QObject((QT::QObject *)(a1 + 24), nullptr);
  *(_QWORD *)(a1 + 40) = 0;
  v6 = a3;
  *(_QWORD *)(a1 + 24) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 24), v29);
  v9 = *(_QWORD *)(a1 + 16);
  if ( !v9 || *(_BYTE *)(a1 + 48) || !*(_QWORD *)(a1 + 40) )
  {
    if ( under_debugger )
      BUG();
    v23 = 40402;
    interr(40402, v6, v7, v8, a4);
    goto LABEL_20;
  }
  v10 = *(_QWORD *)(v9 + 168);
  if ( v10 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v6);
  *(_QWORD *)(v9 + 168) = a1;
  if ( *(_BYTE *)(a1 + 48) )
    sub_2A6AB0(a4, v10, v6, v7, v8);
  v11 = *(_QWORD *)(a1 + 40);
  QT::QObject::connect(
    &v29,
    v11,
    "2rendererChanged(tcc_renderer_type_t)",
    a1,
    "1customidamemo_renderer_changed(tcc_renderer_type_t)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v29);
  QT::QObject::connect(&v29, v11, "2resized()", a1, "1graphrenderer_gli_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v29);
  v14 = sub_1EB590(v11, v11, v12, v13, a4);
  v15 = *(_QWORD *)(a1 + 16);
  if ( v14 <= 1 )
  {
    sub_465E60(v15, 0);
    v20 = *(_QWORD *)(v11 + 896);
    if ( v20 )
LABEL_11:
      sub_2A69D0(a1, v20);
  }
  else
  {
    v16 = (unsigned __int8)byte_8BA8DC;
    v17 = byte_8BA8DC;
    sub_465E60(v15, (unsigned __int8)byte_8BA8DC);
    if ( v17 )
    {
      sub_2A6E30(*(QT::QWidget **)(a1 + 16), v16, v18, v19);
      QT::QWidget::update(*(QT::QWidget **)(a1 + 16));
    }
    v20 = *(_QWORD *)(v11 + 896);
    if ( v20 )
      goto LABEL_11;
  }
  v21 = *(_QWORD *)(v11 + 904);
  if ( v21 )
    sub_2A69D0(a1, v21);
  v22 = sub_1EB590(v11, v21, v18, v19, a4);
  v23 = *(_QWORD *)(a1 + 16);
  if ( v22 <= 1 )
  {
LABEL_20:
    sub_465E60(v23, 0);
    return v30 - __readfsqword(0x28u);
  }
  v24 = (unsigned __int8)byte_8BA8DC;
  v25 = byte_8BA8DC;
  sub_465E60(v23, (unsigned __int8)byte_8BA8DC);
  if ( v25 )
  {
    sub_2A6E30(*(QT::QWidget **)(a1 + 16), v24, v26, v27);
    QT::QWidget::update(*(QT::QWidget **)(a1 + 16));
  }
  return v30 - __readfsqword(0x28u);
}
