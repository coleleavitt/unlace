unsigned __int64 __fastcall sub_3D8560(__m128i *this, int a2, int a3, __int64 a4)
{
  double v6; // xmm0_8
  __m128i si128; // xmm0
  __int64 v8; // rax
  void *v9; // rdi
  QT::QApplication *v10; // rdi
  QT::QWidget *v11; // rax
  QT::QWidget *v12; // r15
  __int64 active; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  __m128i v16; // xmm0
  _QWORD *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbp
  QT::QVBoxLayout *v27; // rbp
  QT::QElapsedTimer *v29; // [rsp+8h] [rbp-70h]
  char *v30; // [rsp+10h] [rbp-68h]
  _BYTE ptr[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  sub_53A8A0(this, a4, 0);
  *((_DWORD *)this + 22) = a2;
  *((_OWORD *)this + 4) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 2) = ViewSwitcher___vtable_at__16;
  v30 = (char *)(this + 4);
  v29 = (QT::QElapsedTimer *)(this + 6);
  this->m128i_i64[0] = (__int64)&ViewSwitcher___vtable;
  *((_DWORD *)this + 23) = a3;
  *(this + 6) = _mm_unpacklo_epi64((__m128i)0x8000000000000000LL, (__m128i)0x8000000000000000LL);
  v6 = QT::QString::fromUtf8(ptr, 12, "Switch to...");
  QT::QWidget::setWindowTitle((QT::QWidget *)this, (const QT::QString *)ptr);
  if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    free(*(void **)ptr);
  (*(void (__fastcall **)(_BYTE *, _QWORD *, _QWORD, double))(*QT::QCoreApplication::self + 144LL))(
    ptr,
    QT::QCoreApplication::self,
    unk_8CA080,
    v6);
  QT::QWidget::setWindowIcon((QT::QWidget *)this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  sub_2DDEB0((__int64)ptr, 2);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v8 = *(_QWORD *)&ptr[16];
  v9 = *((void **)this + 8);
  memset(ptr, 0, sizeof(ptr));
  *((_QWORD *)this + 10) = v8;
  *(this + 4) = si128;
  if ( v9 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v9, 1u) )
      free(v9);
    if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
      free(*(void **)ptr);
  }
  v10 = (QT::QApplication *)QT::QCoreApplication::self;
  v11 = (QT::QWidget *)sub_47A7A0(QT::QCoreApplication::self);
  v12 = v11;
  if ( v11 )
    active = QT::QWidget::window(v11);
  else
    active = QT::QApplication::activeWindow(v10);
  *((_QWORD *)this + 6) = active;
  v15 = qalloc_or_throw(200);
  *(_QWORD *)v15 = &stru_86F6A0;
  *(_QWORD *)(v15 + 8) = 4278190084LL;
  *(_OWORD *)(v15 + 16) = -1;
  v16 = _mm_loadl_epi64((const __m128i *)&off_869890);
  *(_QWORD *)(v15 + 32) = 0;
  v17 = (_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 40) = 0;
  *(_DWORD *)(v15 + 48) = 2;
  *(_DWORD *)(v15 + 72) = -1;
  *(__m128i *)(v15 + 56) = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)&off_869880);
  do
  {
    *v17 = 0;
    v17 += 3;
    *((_OWORD *)v17 - 1) = 0;
  }
  while ( v17 != (_QWORD *)(v15 + 176) );
  *(_DWORD *)(v15 + 176) = 0;
  v18 = *(unsigned int *)(v15 + 12);
  if ( ((*(_DWORD *)(v15 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v15 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, ((*(_DWORD *)(v15 + 12) >> 19) & 0x3Fu) - 1, v18, v14, 0.0);
      BUG();
    }
    *(_BYTE *)(v15 + 11) = ((*(_DWORD *)(v15 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v15 + 12) = v18 & 0xFE07FFFF;
  }
  *(_QWORD *)v15 = windowlist_chooser_t___vtable;
  *(_QWORD *)(v15 + 184) = this;
  *(_QWORD *)(v15 + 192) = v30;
  *(_DWORD *)(v15 + 72) = 46;
  v19 = sub_4A5040(v15, "Switch to...", 0, 0.0);
  *((_QWORD *)this + 7) = v19;
  QT::QObject::installEventFilter(*(QT::QObject **)(v19 + 2472), (QT::QObject *)this);
  v20 = *((_QWORD *)this + 10);
  if ( v20 > 0 )
  {
    v21 = *((_QWORD *)this + 9);
    v22 = v21 + 8 * v20;
    v23 = v21;
    while ( 1 )
    {
      v24 = v23;
      if ( v22 == v23 )
        break;
      v23 += 8;
      if ( v12 == *(QT::QWidget **)(v23 - 8) )
      {
        memset(ptr, 0, sizeof(ptr));
        v25 = (v24 - v21) >> 3;
        if ( (int)v25 >= 0 )
        {
          v26 = (int)v25;
          *(_QWORD *)ptr = qvector_reserve(ptr, 0, 1, 8);
          *(_QWORD *)(*(_QWORD *)ptr + 8LL * (*(_QWORD *)&ptr[8])++) = v26;
        }
        goto LABEL_24;
      }
    }
  }
  memset(ptr, 0, sizeof(ptr));
LABEL_24:
  sub_4A8AF0(*((_QWORD *)this + 7), ptr, -1);
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(_QWORD *)ptr, ptr);
  }
  *(_QWORD *)ptr = _mm_sub_epi32(
                     _mm_add_epi32(
                       _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(*((_QWORD *)this + 7) + 32LL) + 28LL)),
                       _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
                     _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(*((_QWORD *)this + 7) + 32LL) + 20LL))).m128i_u64[0];
  v27 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v27);
  QT::QBoxLayout::addWidget(v27, *((_QWORD *)this + 7), 0, 0);
  QT::QLayout::setContentsMargins(v27, 0, 0, 0, 0);
  QT::QWidget::setLayout((QT::QWidget *)this, v27);
  QT::QWidget::resize(this, ptr);
  sub_5192F0(this);
  QT::QWidget::setFocus(*((_QWORD *)this + 7), 7);
  *((_BYTE *)this + 112) = 1;
  QT::QElapsedTimer::start(v29);
  return v32 - __readfsqword(0x28u);
}
