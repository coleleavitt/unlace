__int64 __fastcall sub_539EF0(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int *v4; // rax
  QT::QAction **v5; // rdx
  QT::QAction **v6; // r12
  QT::QAction *v7; // r13
  const QT::QObject *v8; // rax
  __int64 v9; // rax
  QT::QAction **v10; // r14
  QT::QAction **v11; // rbp
  QT::QMenu *v12; // r15
  QT::QAction *v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r13
  char *v18; // rcx
  __int64 v19; // rax
  QT::QAction **v20; // r14
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  char *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  QT::QAction **v28; // [rsp+0h] [rbp-E0h]
  void *v29; // [rsp+18h] [rbp-C8h] BYREF
  QT::QAction **v30; // [rsp+20h] [rbp-C0h]
  __int64 v31; // [rsp+28h] [rbp-B8h]
  void *v32; // [rsp+38h] [rbp-A8h] BYREF
  QT::QAction **v33; // [rsp+40h] [rbp-A0h]
  __int64 v34; // [rsp+48h] [rbp-98h]
  void *ptr[4]; // [rsp+58h] [rbp-88h] BYREF
  _BYTE v36[40]; // [rsp+78h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+A0h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  QT::QWidget::actions((QT::QWidget *)&v29);
  v4 = (int *)v29;
  if ( !v29 || *(int *)v29 > 1 )
  {
    sub_1821F0((__int64)&v29, 0, 0, 0, v2, v3);
    v4 = (int *)v29;
  }
  v5 = v30;
  v6 = v30;
  if ( !v4 || *v4 > 1 )
  {
    sub_1821F0((__int64)&v29, 0, 0, 0, v2, v3);
    v5 = v30;
  }
  v28 = &v5[v31];
  while ( v28 != v6 )
  {
    v7 = *v6;
    v8 = (const QT::QObject *)QT::QAction::menuObject(*v6);
    v9 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v8);
    if ( v9 )
    {
      sub_539EF0(&v32, v9);
      v10 = v33;
      v11 = &v33[v34];
      if ( v33 == v11 )
      {
LABEL_40:
        if ( v32 && !_InterlockedSub((volatile signed __int32 *)v32, 1u) )
          free(v32);
        goto LABEL_35;
      }
      while ( (unsigned __int8)QT::QAction::isSeparator(*v10) )
      {
        if ( v11 == ++v10 )
          goto LABEL_40;
      }
      v12 = (QT::QMenu *)operator new(0x28u);
      QT::QMenu::QMenu(v12, nullptr);
      QT::QWidget::addActions(v12, &v32);
      v13 = (QT::QAction *)operator new(0x10u);
      QT::QAction::QAction(v13, nullptr);
      QT::QAction::text((QT::QAction *)ptr);
      QT::QAction::setText(v13, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QAction::icon((QT::QAction *)ptr);
      QT::QAction::setIcon(v13, (const QT::QIcon *)ptr);
      QT::QIcon::~QIcon((QT::QIcon *)ptr);
      QT::QAction::toolTip((QT::QAction *)ptr);
      QT::QAction::setToolTip(v13, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QAction::setMenuObject(v13, v12);
      QT::QAction::data((QT::QAction *)v36);
      QT::QAction::setData(v13, (const QT::QVariant *)v36);
      QT::QVariant::~QVariant((QT::QVariant *)v36);
      if ( v32 && !_InterlockedSub((volatile signed __int32 *)v32, 1u) )
        free(v32);
    }
    else
    {
      if ( !(unsigned __int8)QT::QAction::isSeparator(v7) && !(unsigned __int8)QT::QAction::isEnabled(v7) )
        goto LABEL_35;
      v13 = v7;
    }
    if ( v13 )
    {
      v16 = *(_QWORD *)a1;
      v17 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)a1 )
        goto LABEL_27;
      if ( *(int *)v16 > 1 )
      {
        if ( v16 )
          goto LABEL_26;
LABEL_27:
        sub_1821F0(a1, 0, 1, 0, v14, v15);
        v18 = *(char **)(a1 + 8);
        v19 = *(_QWORD *)(a1 + 16);
LABEL_28:
        v20 = (QT::QAction **)&v18[8 * v17];
        goto LABEL_29;
      }
      v22 = *(_QWORD *)(a1 + 8);
      v23 = (v16 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(v16 + 8) - ((__int64)(v22 - v23) >> 3) == v17 )
      {
        if ( v17 || v23 == v22 )
        {
LABEL_26:
          if ( *(int *)v16 > 1 )
            goto LABEL_27;
          v24 = *(_QWORD *)a1;
          if ( !*(_QWORD *)a1 )
            goto LABEL_27;
          v25 = *(char **)(a1 + 8);
          v26 = *(_QWORD *)(v24 + 8);
          v14 = (__int64)&v25[-((v24 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
          v19 = *(_QWORD *)(a1 + 16);
          v27 = v14 >> 3;
          if ( v26 - v19 - (v14 >> 3) <= 0 )
          {
            if ( v14 <= 0 || 3 * v19 >= 2 * v26 )
              goto LABEL_27;
            v18 = &v25[-8 * v27];
            if ( v19 && v18 != v25 && v25 && v18 )
            {
              v18 = (char *)memmove(&v25[-8 * v27], v25, 8 * v19);
              v19 = *(_QWORD *)(a1 + 16);
            }
            *(_QWORD *)(a1 + 8) = v18;
            goto LABEL_28;
          }
          v20 = (QT::QAction **)&v25[8 * v17];
LABEL_29:
          if ( v17 < v19 )
          {
            memmove(v20 + 1, v20, 8 * (v19 - v17));
            v19 = *(_QWORD *)(a1 + 16);
          }
          *(_QWORD *)(a1 + 16) = v19 + 1;
          *v20 = v13;
        }
        else
        {
          *(_QWORD *)(v22 - 8) = v13;
          *(_QWORD *)(a1 + 8) -= 8LL;
          ++*(_QWORD *)(a1 + 16);
        }
      }
      else
      {
        *(_QWORD *)(v22 + 8 * v17) = v13;
        ++*(_QWORD *)(a1 + 16);
      }
      if ( !*(_QWORD *)a1 || **(int **)a1 > 1 )
        sub_1821F0(a1, 0, 0, 0, v14, v15);
    }
LABEL_35:
    ++v6;
  }
  if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
    free(v29);
  return a1;
}
