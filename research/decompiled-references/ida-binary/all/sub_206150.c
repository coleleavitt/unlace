unsigned __int64 __fastcall sub_206150(__int64 a1, QT::QWidget **a2, double a3)
{
  void *p_ptr; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebp
  QT::QWidget *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rsi
  QT::QAction *v18; // rbp
  QT::QWidget *v19; // rbp
  QT::QAction *v20; // rax
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rdx
  unsigned __int64 v25; // rcx
  double v26; // xmm0_8
  size_t v27; // rax
  const char *v28; // r13
  __int64 v29; // r13
  QT::QAction *v30; // rbp
  __int64 v31; // rcx
  __int64 *v32; // rsi
  size_t v33; // rax
  struct _Unwind_Exception *v34; // rbx
  QT::QObject *v35; // [rsp+8h] [rbp-110h]
  __int64 v36; // [rsp+10h] [rbp-108h]
  unsigned __int64 v37; // [rsp+18h] [rbp-100h]
  const char *v38; // [rsp+28h] [rbp-F0h]
  void *v39; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-E0h]
  char *s; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+58h] [rbp-C0h]
  void *v43; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  void *v46; // [rsp+98h] [rbp-80h]
  __int64 v47; // [rsp+A0h] [rbp-78h]
  _BYTE v48[40]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v49; // [rsp+D8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  p_ptr = &ptr;
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v8 = v47;
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    p_ptr = ptr;
    free(ptr);
    if ( v8 <= 0 )
      goto LABEL_4;
  }
  else if ( v8 <= 0 )
  {
    goto LABEL_4;
  }
  QT::QWidget::actions((QT::QWidget *)&v43);
  if ( !v43 || *(int *)v43 > 1 )
    sub_1821F0((__int64)&v43, 0, 0, 0, v11, v12);
  QT::QAction::text((QT::QAction *)&ptr);
  p_ptr = v46;
  if ( !v46 )
    p_ptr = &QT::QString::_empty;
  v13 = QT::QString::compare_helper(p_ptr, v47, "&Synchronize with", 17, 1);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    p_ptr = ptr;
    free(ptr);
  }
  if ( v43 && !_InterlockedSub((volatile signed __int32 *)v43, 1u) )
  {
    p_ptr = v43;
    free(v43);
  }
  if ( v13 )
    goto LABEL_4;
  v14 = *a2;
  QT::QWidget::actions((QT::QWidget *)&ptr);
  if ( !ptr || *(int *)ptr > 1 )
  {
    v14 = nullptr;
    sub_1821F0((__int64)&ptr, 0, 0, 0, v15, v16);
  }
  v6 = v47;
  p_ptr = *((void **)v46 + v47 - 1);
  if ( p_ptr )
    (*(void (__fastcall **)(void *, QT::QWidget *))(*(_QWORD *)p_ptr + 32LL))(p_ptr, v14);
  if ( !ptr || _InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
LABEL_4:
    if ( (*(_BYTE *)(a1 + 564) & 0x20) != 0 )
      goto LABEL_5;
    goto LABEL_30;
  }
  p_ptr = ptr;
  free(ptr);
  if ( (*(_BYTE *)(a1 + 564) & 0x20) != 0 )
    goto LABEL_5;
LABEL_30:
  a3 = 0.0;
  v39 = nullptr;
  v40 = 0;
  v36 = qword_8CB508;
  if ( !qword_8CB508 )
  {
    a3 = 0.0;
    v36 = operator new(0x18u);
    *(_QWORD *)v36 = 0;
    qword_8CB508 = v36;
    *(_OWORD *)(v36 + 8) = 0;
  }
  v17 = (const char *)&v39;
  sub_1E80E0((__int64 *)v36, (unsigned __int64 *)&v39, a1);
  v37 = v40;
  if ( (_QWORD)v40 )
  {
    sub_5392E0(a2, 0, 1);
    v35 = (QT::QObject *)operator new(0x28u);
    QT::QMenu::QMenu(v35, *a2);
    v18 = (QT::QAction *)QT::QMenu::menuAction(v35);
    QT::QString::fromUtf8(&ptr, 17, "&Synchronize with");
    QT::QAction::setText(v18, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v19 = *a2;
    v20 = (QT::QAction *)QT::QMenu::menuAction(v35);
    QT::QWidget::addAction(v19, v20);
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v29 = (__int64)v39 + 17 * v22;
      v30 = (QT::QAction *)operator new(0x10u);
      QT::QAction::QAction(v30, v35);
      s = nullptr;
      v42 = 0;
      v32 = (__int64 *)sub_1E7840((__int64 *)v36, (_OWORD *)v29);
      if ( v32 )
        sub_1FA020((__int64 *)&s, v32, a1, v31);
      else
        sub_1F9F60((__int64 *)&s, (const char *)v29);
      if ( (_QWORD)v42 )
      {
        v23 = v42 - 1;
        v24 = s;
        v25 = (unsigned __int64)(v42 - 1) >> 63;
        if ( !s )
          goto LABEL_62;
      }
      else
      {
        v24 = (char *)&s1;
        LOBYTE(v25) = 0;
        v23 = 0;
        if ( !&s1 )
          goto LABEL_62;
      }
      if ( !(_BYTE)v25 )
        goto LABEL_42;
LABEL_62:
      v23 = 0;
      if ( !v24 )
      {
LABEL_42:
        v26 = QT::QString::fromUtf8(&ptr, v23, v24);
        goto LABEL_43;
      }
      v38 = v24;
      v33 = strlen(v24);
      v26 = QT::QString::fromUtf8(&ptr, v33, v38);
LABEL_43:
      QT::QAction::setText(v30, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      QT::QAction::setCheckable(v30, 1);
      QT::QAction::setChecked(v30, *(_BYTE *)(v29 + 16));
      v43 = nullptr;
      v44 = 0;
      sub_201C50((__int64 *)&v43, v29);
      v27 = 0;
      v28 = &s1;
      if ( (_QWORD)v44 )
      {
        v28 = (const char *)v43;
        if ( v43 )
        {
          if ( *(_BYTE *)v43 )
            v27 = strlen((const char *)v43 + 1) + 1;
        }
      }
      a3 = QT::QString::fromUtf8(&ptr, v27, v28, v26);
      QT::QVariant::QVariant((QT::QVariant *)v48, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      QT::QAction::setData(v30, (const QT::QVariant *)v48);
      QT::QVariant::~QVariant((QT::QVariant *)v48);
      QT::QObject::connect(&ptr, v30, "2triggered()", a1, "1onSyncRequested()", 0);
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
      QT::QWidget::addAction(v35, v30);
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        a3 = qfree(v43, (const char *)v30, a3);
      }
      if ( s )
      {
        *(_QWORD *)&v42 = 0;
        a3 = qfree(s, (const char *)v30, a3);
      }
      v22 = ++v21;
      if ( v21 >= v37 )
      {
        v17 = nullptr;
        sub_5392E0(a2, 0, 1);
        break;
      }
    }
  }
  p_ptr = v39;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    a3 = qfree(v39, v17);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
      goto LABEL_6;
LABEL_35:
    v9 = -1;
    goto LABEL_8;
  }
LABEL_5:
  if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
    goto LABEL_35;
LABEL_6:
  if ( !*(_QWORD *)(a1 + 424) )
  {
    v34 = (struct _Unwind_Exception *)sub_1E69C0(a3, (__int64)p_ptr, 0, v6, v7);
    _Unwind_Resume(v34);
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 816LL))(a1);
LABEL_8:
  sub_277EB0(a1 + 104, a2, v9);
  return v49 - __readfsqword(0x28u);
}
