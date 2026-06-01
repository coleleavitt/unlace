unsigned __int64 __fastcall sub_39C1C0(QT::QWidget *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int32 *v8; // rax
  __int64 v9; // rsi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+8h] [rbp-70h]
  __int64 v13; // [rsp+10h] [rbp-68h]
  void *v14[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a3, 0);
  v3 = QT::QMetaObject::className((QT::QMetaObject *)&off_88EE60);
  sub_525E40((char *)this + 40, off_868420, 6, v3);
  *(_QWORD *)this = &TextArrows___vtable;
  *((_QWORD *)this + 2) = TextArrows___vtable_at__16;
  *((_QWORD *)this + 5) = TextArrows___vtable_at__40;
  QT::QObject::QObject((QT::QWidget *)((char *)this + 104), nullptr);
  *((_QWORD *)this + 82) = 0;
  *((_QWORD *)this + 83) = 0;
  *((_QWORD *)this + 13) = &HintProvider___vtable;
  sub_2D21B0((const QT::QObject **)this + 13, 0, 0, (__int64)&unk_5C2F25, v4, v5, (__int64)ptr, v12, v13);
  *((_QWORD *)this + 84) = a2;
  *((_QWORD *)this + 92) = (char *)this + 720;
  *((_QWORD *)this + 93) = (char *)this + 720;
  *((_QWORD *)this + 226) = (char *)this + 1792;
  *((_QWORD *)this + 227) = (char *)this + 1792;
  *((_QWORD *)this + 85) = -1;
  *((_QWORD *)this + 86) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_QWORD *)this + 91) = 0;
  *((_QWORD *)this + 94) = 0;
  *((_QWORD *)this + 95) = 0;
  *((_DWORD *)this + 448) = 0;
  *((_QWORD *)this + 225) = 0;
  *((_QWORD *)this + 228) = 0;
  *((_DWORD *)this + 460) = 0;
  *((_QWORD *)this + 231) = 0;
  *((_QWORD *)this + 232) = (char *)this + 1840;
  *((_QWORD *)this + 233) = (char *)this + 1840;
  *((_QWORD *)this + 234) = 0;
  *(_OWORD *)((char *)this + 696) = 0;
  *((_OWORD *)this + 48) = 0;
  if ( !a2 )
    goto LABEL_10;
  QT::QWidget::windowTitle((QT::QWidget *)v14);
  QT::QString::fromUtf8(&ptr, 15, "TextArrows for ");
  QT::QString::append((QT::QString *)&ptr, (const QT::QString *)v14);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    free(ptr);
    v8 = (volatile signed __int32 *)v14[0];
    if ( v14[0] )
    {
LABEL_5:
      if ( !_InterlockedSub(v8, 1u) )
        free(v14[0]);
    }
  }
  else
  {
    v8 = (volatile signed __int32 *)v14[0];
    if ( v14[0] )
      goto LABEL_5;
  }
  v9 = *((_QWORD *)this + 84);
  if ( *(_QWORD *)(v9 + 888) )
  {
    QT::QObject::connect(v14, *(_QWORD *)(v9 + 888), "2model_loaded()", this, "1on_flat_model_loaded()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v14);
    v9 = *((_QWORD *)this + 84);
  }
  QT::QObject::connect(v14, v9 + 624, "2local_changed()", this, "1on_bookmarks_place_cache_local_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v14);
LABEL_10:
  *((_DWORD *)this + 167) |= 1u;
  sub_2D21B0(
    (const QT::QObject **)this + 13,
    (__int64)this,
    (__int64)this,
    (__int64)"on_hint",
    v6,
    v7,
    (__int64)ptr,
    v12,
    v13);
  return v15 - __readfsqword(0x28u);
}
