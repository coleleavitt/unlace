unsigned __int64 __fastcall sub_1B9D60(QT::QAbstractScrollArea *this, char *s, __int64 a3, __int64 a4)
{
  size_t v5; // rax
  __int64 v6; // rax
  void *v7; // rdx
  void *v8; // rdx
  void *v9; // rdx
  __int64 v10; // rax
  void *v11; // rdx
  void *v12; // rdx
  void *v13; // rdx
  void *v15[4]; // [rsp+10h] [rbp-B8h] BYREF
  void *v16[4]; // [rsp+30h] [rbp-98h] BYREF
  void *v17[4]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr[3]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  sub_202FB0(this, "sampleview_t");
  *((_QWORD *)this + 127) = s;
  *(_QWORD *)this = &sampleview_t___vtable;
  *((_QWORD *)this + 2) = sampleview_t___vtable_at__16;
  *((_QWORD *)this + 13) = sampleview_t___vtable_at__104;
  v5 = 0;
  *((_QWORD *)this + 5) = sampleview_t___vtable_at__40;
  if ( s )
    v5 = strlen(s);
  QT::QString::fromUtf8(ptr, v5, s);
  QT::QWidget::windowTitle((QT::QWidget *)v17);
  v6 = QT::QString::append(v17, "_", 1);
  v7 = *(void **)v6;
  *(_QWORD *)v6 = 0;
  v16[0] = v7;
  v8 = *(void **)(v6 + 8);
  *(_QWORD *)(v6 + 8) = 0;
  v16[1] = v8;
  v9 = *(void **)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0;
  v16[2] = v9;
  v10 = QT::QString::append((QT::QString *)v16, (const QT::QString *)ptr);
  v11 = *(void **)v10;
  *(_QWORD *)v10 = 0;
  v15[0] = v11;
  v12 = *(void **)(v10 + 8);
  *(_QWORD *)(v10 + 8) = 0;
  v15[1] = v12;
  v13 = *(void **)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0;
  v15[2] = v13;
  QT::QWidget::setWindowTitle(this, (const QT::QString *)v15);
  if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
    free(v15[0]);
  if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
    free(v16[0]);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  *((_QWORD *)this + 126) = a4;
  *((_BYTE *)this + 1000) = 0;
  sub_1FC230(this);
  return v19 - __readfsqword(0x28u);
}
