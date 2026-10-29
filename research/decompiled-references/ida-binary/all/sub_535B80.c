__int64 __fastcall sub_535B80(
        QT::QWidget **a1,
        __m128i *a2,
        QT::QWidget *a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // rax
  void *v11; // rdx
  void *v12; // rdx
  __int64 v13; // rdx
  void **v14; // rdx
  void *v15; // rdi
  int v16; // edx
  __int64 v17; // rax
  QT::QAction *v18; // rax
  __int64 v19; // rdx
  const QT::QObject *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  QT::QMenu *v23; // r13
  QT::QAction *v24; // rax
  char v25; // [rsp+8h] [rbp-80h]
  QT::QAction *v26; // [rsp+8h] [rbp-80h]
  unsigned __int8 v27; // [rsp+8h] [rbp-80h]
  void *v28; // [rsp+10h] [rbp-78h] BYREF
  void *v29; // [rsp+18h] [rbp-70h]
  __int64 v30; // [rsp+20h] [rbp-68h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  *a1 = a3;
  result = 1;
  if ( a2[1].m128i_i64[0] )
  {
    if ( !a2->m128i_i64[0] || *(int *)a2->m128i_i64[0] > 1 )
      sub_1B21C0(a2, 0, 0, 0, a5, a6);
    v10 = a2->m128i_i64[1];
    v11 = *(void **)v10;
    *(_QWORD *)v10 = 0;
    v28 = v11;
    v12 = *(void **)(v10 + 8);
    *(_QWORD *)(v10 + 8) = 0;
    v29 = v12;
    v13 = *(_QWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = 0;
    v30 = v13;
    v14 = (void **)a2->m128i_i64[1];
    if ( *v14 && !_InterlockedSub((volatile signed __int32 *)*v14, 1u) )
      free(*v14);
    v15 = v29;
    a2->m128i_i64[1] += 24;
    --a2[1].m128i_i64[0];
    if ( !v15 )
      v15 = &QT::QString::_empty;
    v16 = QT::QString::compare_helper(v15, v30, &unk_5C2F25, 0, 1);
    v17 = a2[1].m128i_i64[0];
    if ( v16 || v17 )
    {
      v25 = v17 != 0;
      QT::QWidget::actions((QT::QWidget *)ptr);
      v18 = sub_533040((__int64)ptr, (const QT::QString *)&v28, v25);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v26 = v18;
        free(ptr[0]);
        v18 = v26;
      }
      v19 = a2[1].m128i_i64[0];
      if ( v18 )
      {
        if ( v19 )
        {
          v20 = (const QT::QObject *)QT::QAction::menuObject(v18);
          v21 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v20);
          result = sub_535B80(a1, a2, v21, a4);
LABEL_21:
          if ( v28 )
          {
            if ( !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
            {
              v27 = result;
              free(v28);
              return v27;
            }
          }
          return result;
        }
        a1[1] = v18;
      }
      else if ( v19 )
      {
        if ( a4 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
          *(_OWORD *)ptr = 0;
          v32 = 0;
          v23 = (QT::QMenu *)sub_53F320(v22, ptr, &v28, a3, 0.0);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          v24 = (QT::QAction *)QT::QMenu::menuAction(v23);
          QT::QWidget::addAction(a3, v24);
          result = sub_535B80(a1, a2, v23, 1);
        }
        else
        {
          result = 0;
        }
        goto LABEL_21;
      }
    }
    result = 1;
    goto LABEL_21;
  }
  return result;
}
