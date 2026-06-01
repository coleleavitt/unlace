unsigned __int64 __fastcall qo_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, _DWORD *a3)
{
  const QT::QString *v6; // rax
  char *v7; // r8
  __int64 *v8; // r10
  size_t v9; // rax
  char *v10; // r8
  size_t v11; // r9
  char *v12; // r8
  __int64 *v13; // r9
  size_t v14; // rax
  char *v15; // r8
  size_t v16; // r13
  char isNull; // bp
  void *v19; // rdi
  __int64 v20; // rdx
  int v21; // ebp
  __int64 v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  char *src; // [rsp+0h] [rbp-A8h]
  char srca; // [rsp+0h] [rbp-A8h]
  _BYTE *srcc; // [rsp+0h] [rbp-A8h]
  __int64 *srcb; // [rsp+0h] [rbp-A8h]
  __int64 *v32; // [rsp+8h] [rbp-A0h]
  char *v33; // [rsp+8h] [rbp-A0h]
  __int64 *v34; // [rsp+8h] [rbp-A0h]
  void *v35; // [rsp+8h] [rbp-A0h]
  __int64 *v36; // [rsp+8h] [rbp-A0h]
  void *v37; // [rsp+8h] [rbp-A0h]
  __int64 *v38; // [rsp+10h] [rbp-98h]
  char *v39; // [rsp+10h] [rbp-98h]
  size_t v40; // [rsp+18h] [rbp-90h]
  char *v41; // [rsp+18h] [rbp-90h]
  char v42[8]; // [rsp+28h] [rbp-80h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v44; // [rsp+50h] [rbp-58h] BYREF
  char *s; // [rsp+58h] [rbp-50h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  QT::QAction::text((QT::QAction *)ptr);
  v6 = (const QT::QString *)QT::QString::remove(ptr, 38, 1);
  QT::QString::toUtf8_helper((QT::QString *)&v44, v6);
  v7 = s;
  v8 = *a2;
  if ( (s || (v7 = (char *)&QT::QByteArray::_empty) != nullptr)
    && (v32 = *a2, src = v7, v9 = strlen(v7), v10 = src, v8 = v32, (v11 = v9) != 0) )
  {
    v19 = (void *)*v32;
    v20 = v9 + 1;
    if ( v32[2] < v9 + 1 )
    {
      v22 = *v32;
      v23 = v32;
      v40 = v9;
      v39 = src;
      v35 = (void *)(v9 + 1);
      srcb = v8;
      v24 = qvector_reserve(v23, v22, v20, 1);
      v8 = srcb;
      v11 = v40;
      v19 = (void *)v24;
      v10 = v39;
      v20 = (__int64)v35;
      *srcb = v24;
    }
    v8[1] = v20;
    v34 = v8;
    srcc = (_BYTE *)v11;
    memmove(v19, v10, v11);
    srcc[*v34] = 0;
  }
  else
  {
    v8[1] = 0;
  }
  if ( v44 && !_InterlockedSub((volatile signed __int32 *)v44, 1u) )
    free(v44);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAction::shortcut((QT::QAction *)&v44);
  srca = QT::QKeySequence::isEmpty((QT::QKeySequence *)&v44);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&v44);
  if ( !srca )
  {
    QT::QAction::shortcut((QT::QAction *)v42);
    QT::QKeySequence::toString(ptr, v42, 1);
    QT::QString::toUtf8_helper((QT::QString *)&v44, (const QT::QString *)ptr);
    v12 = s;
    v13 = *a2;
    if ( (s || (v12 = (char *)&QT::QByteArray::_empty) != nullptr)
      && (v38 = *a2, v33 = v12, v14 = strlen(v12), v15 = v33, v13 = v38, (v16 = v14) != 0) )
    {
      v25 = (void *)v38[3];
      v26 = v14 + 1;
      if ( v38[5] < v14 + 1 )
      {
        v41 = v33;
        v37 = (void *)(v14 + 1);
        v27 = qvector_reserve(v38 + 3, v38[3], v26, 1);
        v13 = v38;
        v15 = v41;
        v25 = (void *)v27;
        v26 = (__int64)v37;
        v38[3] = v27;
      }
      v13[4] = v26;
      v36 = v13;
      memmove(v25, v15, v16);
      *(_BYTE *)(v36[3] + v16) = 0;
    }
    else
    {
      v13[4] = 0;
    }
    if ( v44 && !_InterlockedSub((volatile signed __int32 *)v44, 1u) )
      free(v44);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v42);
    }
    else
    {
      QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v42);
    }
  }
  *a3 = *(_DWORD *)(a1 + 72);
  QT::QAction::icon((QT::QAction *)&v44);
  isNull = QT::QIcon::isNull((QT::QIcon *)&v44);
  QT::QIcon::~QIcon((QT::QIcon *)&v44);
  if ( !isNull )
  {
    QT::QAction::icon((QT::QAction *)&v44);
    v21 = sub_1C7D70((__int64)&v44);
    QT::QIcon::~QIcon((QT::QIcon *)&v44);
    if ( v21 != -1 )
      *a3 = v21;
  }
  return v46 - __readfsqword(0x28u);
}
