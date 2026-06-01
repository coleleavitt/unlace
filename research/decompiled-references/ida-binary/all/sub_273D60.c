unsigned __int64 __fastcall sub_273D60(QT::QWidget *this, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  const char *merging_database_title; // r12
  __m128i *v5; // rax
  __m128i v6; // xmm0
  size_t v7; // rax
  int v9; // r14d
  const char *v10; // rdx
  char *v11; // rdx
  _BYTE v12[8]; // [rsp+8h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-50h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  QT::QSplitter::QSplitter(this, *(QT::QWidget **)a2);
  *((_QWORD *)this + 7) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *((_QWORD *)this + 2) = diff_source_panel_t___vtable_at__16;
  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)this = &diff_source_panel_t___vtable;
  *((_DWORD *)this + 16) = v2;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 5) = 0;
  v3 = sub_277DF0();
  merging_database_title = (const char *)get_merging_database_title(*((unsigned int *)this + 16));
  if ( !merging_database_title )
  {
    v9 = *((_DWORD *)this + 16);
    if ( (unsigned __int8)is_diff_merge_mode() )
    {
      v11 = "Left";
      if ( v9 )
        v11 = "Right";
      merging_database_title = v11;
    }
    else
    {
      merging_database_title = "Local";
      if ( v9 )
      {
        v10 = "Remote";
        if ( v9 != 1 )
          v10 = "Common";
        merging_database_title = v10;
      }
    }
  }
  QT::QObject::connect(ptr, v3, "2start_merge_step()", this, "1on_start_merge_step()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(
    ptr,
    v3,
    "2sync_required(const diffable_widget_sync_data_t &)",
    this,
    "1on_sync_required(const diffable_widget_sync_data_t &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, v3, "2details_visibility_requested(int)", this, "1sync_details_visibility(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v13.m128i_i64[1] = 0;
  v13.m128i_i64[0] = (__int64)sub_272070;
  ptr[1] = nullptr;
  ptr[0] = &QT::QSplitter::splitterMoved;
  v5 = (__m128i *)operator new(0x20u);
  v6 = _mm_load_si128(&v13);
  v5->m128i_i32[0] = 1;
  v5[1] = v6;
  v5->m128i_i64[1] = (__int64)sub_271FF0;
  QT::QObject::connectImpl(v12, this, ptr, this, &v13, v5, 0, 0, &QT::QSplitter::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v12);
  QT::QSplitter::setOrientation(this, 2);
  v7 = strlen(merging_database_title);
  QT::QString::fromUtf8(ptr, v7, merging_database_title);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  sub_4B8B20(this, 256);
  return v15 - __readfsqword(0x28u);
}
