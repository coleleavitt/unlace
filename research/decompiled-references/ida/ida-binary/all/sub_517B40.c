unsigned __int64 __fastcall sub_517B40(QT::QAction *this, QT::QAction *a2)
{
  volatile signed __int32 *v2; // r13
  volatile signed __int32 *v3; // r13
  char isEnabled; // r13
  char isVisible; // r13
  char isCheckable; // r13
  char isChecked; // r13
  unsigned __int64 v8; // r13
  void **v10; // rax
  QT::QString *v11; // rcx
  void **v12; // r14
  void **v13; // rdx
  char v14; // r14
  char v15; // r14
  void **v16; // [rsp+8h] [rbp-120h]
  void **v17; // [rsp+8h] [rbp-120h]
  QT::QString *v18; // [rsp+10h] [rbp-118h]
  void *v19[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+30h] [rbp-F8h]
  void *v21[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-D8h]
  void *v23[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-B8h]
  void *v25[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+90h] [rbp-98h]
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  void **v28; // [rsp+A8h] [rbp-80h]
  __int64 v29; // [rsp+B0h] [rbp-78h]
  _BYTE v30[40]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+E8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  QT::QAction::text((QT::QAction *)v19);
  QT::QAction::text((QT::QAction *)&ptr);
  v2 = (volatile signed __int32 *)ptr;
  if ( v20 != v29 )
  {
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
LABEL_5:
    QT::QAction::setText(this, (const QT::QString *)v19);
    goto LABEL_6;
  }
  v14 = QT::QtPrivate::equalStrings(v20, v28, v20, v19[1]);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(ptr);
  if ( !v14 )
    goto LABEL_5;
LABEL_6:
  QT::QAction::toolTip((QT::QAction *)v21);
  QT::QAction::toolTip((QT::QAction *)&ptr);
  v3 = (volatile signed __int32 *)ptr;
  if ( v22 != v29 )
  {
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
LABEL_10:
    QT::QAction::setToolTip(this, (const QT::QString *)v21);
    goto LABEL_11;
  }
  v15 = QT::QtPrivate::equalStrings(v22, v28, v22, v21[1]);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(ptr);
  if ( !v15 )
    goto LABEL_10;
LABEL_11:
  isEnabled = QT::QAction::isEnabled(a2);
  if ( isEnabled != (unsigned __int8)QT::QAction::isEnabled(this) )
    QT::QAction::setEnabled(this, isEnabled);
  isVisible = QT::QAction::isVisible(a2);
  if ( isVisible != (unsigned __int8)QT::QAction::isVisible(this) )
    QT::QAction::setVisible(this, isVisible);
  isCheckable = QT::QAction::isCheckable(a2);
  if ( isCheckable != (unsigned __int8)QT::QAction::isCheckable(this) )
    QT::QAction::setCheckable(this, isCheckable);
  if ( (unsigned __int8)QT::QAction::isCheckable(this) )
  {
    isChecked = QT::QAction::isChecked(a2);
    if ( isChecked != (unsigned __int8)QT::QAction::isChecked(this) )
      QT::QAction::setChecked(this, isChecked);
  }
  QT::QObject::dynamicPropertyNames((QT::QObject *)&ptr);
  v8 = sub_517A40((__int64)&ptr, (const char **)&off_86D820, 0);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v10 = v28;
    v11 = (QT::QString *)&v28[3 * v29];
    if ( v28 != (void **)v11 )
    {
      do
      {
        if ( *v10 && !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
        {
          v18 = v11;
          v16 = v10;
          free(*v10);
          v11 = v18;
          v10 = v16;
        }
        v10 += 3;
      }
      while ( v11 != (QT::QString *)v10 );
    }
    free(ptr);
  }
  if ( v8 != -1 )
  {
    QT::QObject::property((QT::QObject *)v30, (const char *)a2);
    QT::QVariant::toString((QT::QVariant *)v23);
    QT::QVariant::~QVariant((QT::QVariant *)v30);
    QT::QObject::dynamicPropertyNames((QT::QObject *)&ptr);
    if ( sub_517A40((__int64)&ptr, (const char **)&off_86D820, 0) == -1 )
    {
      v26 = 0;
      *(_OWORD *)v25 = 0;
    }
    else
    {
      QT::QObject::property((QT::QObject *)v30, (const char *)this);
      QT::QVariant::toString((QT::QVariant *)v25);
      QT::QVariant::~QVariant((QT::QVariant *)v30);
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v12 = v28;
      v13 = &v28[3 * v29];
      if ( v28 != v13 )
      {
        do
        {
          if ( *v12 && !_InterlockedSub((volatile signed __int32 *)*v12, 1u) )
          {
            v17 = v13;
            free(*v12);
            v13 = v17;
          }
          v12 += 3;
        }
        while ( v13 != v12 );
      }
      free(ptr);
    }
    if ( v24 != v26 || !(unsigned __int8)QT::QtPrivate::equalStrings(v24, v25[1], v24, v23[1]) )
    {
      QT::QAction::icon((QT::QAction *)&ptr);
      QT::QAction::setIcon(this, (const QT::QIcon *)&ptr);
      QT::QVariant::QVariant((QT::QVariant *)v30, (const QT::QString *)v23);
      QT::QObject::doSetProperty(this, "libui_icon_metadata", (const QT::QVariant *)v30, (QT::QVariant *)v30);
      QT::QVariant::~QVariant((QT::QVariant *)v30);
      QT::QIcon::~QIcon((QT::QIcon *)&ptr);
    }
    if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
      free(v25[0]);
    if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
      free(v23[0]);
  }
  if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
    free(v21[0]);
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  return v31 - __readfsqword(0x28u);
}
