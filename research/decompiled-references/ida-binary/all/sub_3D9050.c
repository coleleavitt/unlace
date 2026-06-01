unsigned __int64 __fastcall windowlist_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v6; // rax
  __int64 v8; // r14
  const void *v9; // r15
  __int64 *v10; // r9
  size_t v11; // rax
  size_t v12; // r8
  unsigned __int64 v13; // r14
  bool v14; // zf
  int v15; // ebx
  void *v17; // rdi
  size_t v18; // rdx
  void *v19; // rsi
  __int64 v20; // rbx
  __int64 *v21; // r15
  void *v22; // rsi
  __int64 v23; // rax
  __int64 **v24; // [rsp+0h] [rbp-108h]
  __int64 *v26; // [rsp+18h] [rbp-F0h]
  size_t v27; // [rsp+18h] [rbp-F0h]
  __int64 *v28; // [rsp+18h] [rbp-F0h]
  __int64 *v29; // [rsp+20h] [rbp-E8h]
  size_t v30; // [rsp+20h] [rbp-E8h]
  size_t v31; // [rsp+28h] [rbp-E0h]
  char v32[8]; // [rsp+38h] [rbp-D0h] BYREF
  __m128i ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  void *v34[4]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-78h]
  char v37[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
  v40 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v6 + 8 * a5);
  QT::QObject::QObject((QT::QObject *)v37, nullptr);
  v38 = 0;
  *(_QWORD *)v37 = &object_lifecycle_monitor_t___vtable;
  sub_478D00(v37, a2);
  QT::QWidget::windowTitle((QT::QWidget *)v34);
  QT::QString::toUtf8_helper((QT::QString *)&v35, (const QT::QString *)v34);
  v9 = (const void *)v35.m128i_i64[1];
  v10 = *v24;
  if ( (v35.m128i_i64[1] || (v9 = &QT::QByteArray::_empty) != nullptr)
    && (v26 = *v24, v11 = strlen((const char *)v9), v10 = v26, (v12 = v11) != 0) )
  {
    v17 = (void *)*v26;
    v18 = v11 + 1;
    if ( v26[2] < v11 + 1 )
    {
      v31 = v11;
      v30 = v11 + 1;
      v23 = qvector_reserve(v26, *v26, v18, 1);
      v10 = v26;
      v12 = v31;
      v17 = (void *)v23;
      v18 = v30;
      *v26 = v23;
    }
    v10[1] = v18;
    v29 = v10;
    v27 = v12;
    memmove(v17, v9, v12);
    *(_BYTE *)(*v29 + v27) = 0;
  }
  else
  {
    v10[1] = 0;
  }
  if ( v35.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v35.m128i_i64[0], 1u) )
    free((void *)v35.m128i_i64[0]);
  if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
    free(v34[0]);
  if ( v8 == sub_30F160((__int64)qword_8CD748) )
  {
    v20 = a5 + 1;
    v21 = *v24 + 3;
    QT::QAction::shortcut((QT::QAction *)ptr);
    QT::QKeySequence::toString(v34, ptr, 1);
    QT::QString::toUtf8_helper((QT::QString *)&v35, (const QT::QString *)v34);
    v22 = (void *)v35.m128i_i64[1];
    if ( !v35.m128i_i64[1] )
      v22 = &QT::QByteArray::_empty;
    sub_1ADAF0(v21, (__int64)v22, v20);
    if ( v35.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v35.m128i_i64[0], 1u) )
      free((void *)v35.m128i_i64[0]);
    if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
      free(v34[0]);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
  }
  else
  {
    sub_30F130(&v35, (__int64)qword_8CD748);
    v13 = v36;
    if ( v35.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v35.m128i_i64[0], 1u) )
    {
      free((void *)v35.m128i_i64[0]);
      if ( a5 >= v13 )
        goto LABEL_14;
    }
    else if ( a5 >= v13 )
    {
      goto LABEL_14;
    }
    v28 = *v24 + 3;
    sub_30F130(ptr, (__int64)qword_8CD748);
    QT::QAction::shortcut((QT::QAction *)v32);
    QT::QKeySequence::toString(v34, v32, 1);
    QT::QString::toUtf8_helper((QT::QString *)&v35, (const QT::QString *)v34);
    v19 = (void *)v35.m128i_i64[1];
    if ( !v35.m128i_i64[1] )
      v19 = &QT::QByteArray::_empty;
    sub_1ADAF0(v28, (__int64)v19, a5 + 1);
    if ( v35.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v35.m128i_i64[0], 1u) )
      free((void *)v35.m128i_i64[0]);
    if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
      free(v34[0]);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v32);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
  }
LABEL_14:
  v14 = v39 == 0;
  *a3 = *(_DWORD *)(a1 + 72);
  if ( v14 )
  {
    if ( v38 )
    {
      QT::QWidget::windowIcon((QT::QWidget *)&v35);
      v15 = sub_1C7D70((__int64)&v35);
      QT::QIcon::~QIcon((QT::QIcon *)&v35);
      if ( v15 != -1 )
        *a3 = v15;
    }
  }
  *(_QWORD *)v37 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v37);
  return v40 - __readfsqword(0x28u);
}
