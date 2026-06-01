unsigned __int64 __fastcall sub_2E8DE0(QT::QWidget *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  double v4; // xmm0_8
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  int v8; // [rsp+10h] [rbp-28h]
  int v9[2]; // [rsp+18h] [rbp-20h]
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+30h] [rbp-8h]

  *(_QWORD *)v9 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2);
  sub_53A8A0(a1, v2, 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *((_QWORD *)a1 + 6) = a2;
  *((_QWORD *)a1 + 7) = 0;
  *(_QWORD *)a1 = &JumpAnywhereDialog___vtable;
  *((_QWORD *)a1 + 2) = JumpAnywhereDialog___vtable_at__16;
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 9) = 0;
  *((_QWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 11) = 0;
  *((_QWORD *)a1 + 12) = 0;
  *((_QWORD *)a1 + 13) = 0;
  *((_QWORD *)a1 + 14) = 0;
  *((_QWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 17) = 0;
  *((_DWORD *)a1 + 36) = 0;
  *((_QWORD *)a1 + 21) = 0;
  *((_QWORD *)a1 + 26) = 0;
  *((_QWORD *)a1 + 29) = 0;
  *(__m128i *)((char *)a1 + 152) = si128;
  *((_OWORD *)a1 + 11) = 0;
  *((_OWORD *)a1 + 12) = 0;
  *(_OWORD *)((char *)a1 + 216) = 0;
  *((_OWORD *)a1 + 15) = 0;
  v4 = QT::QString::fromUtf8(&ptr, 16, "Jump anywhere...");
  QT::QWidget::setWindowTitle(a1, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  (*(void (__fastcall **)(void **, _QWORD, __int64, double))(**((_QWORD **)a1 + 6) + 160LL))(
    &ptr,
    *((_QWORD *)a1 + 6),
    1,
    v4);
  QT::QWidget::setWindowIcon(a1, (const QT::QIcon *)&ptr);
  QT::QIcon::~QIcon((QT::QIcon *)&ptr);
  QT::QWidget::setMinimumSize(a1, 800, 478);
  sub_2E8810(a1, (int)ptr, v7, v8, v9[0], v10, v11, v12);
  sub_2E6A40();
  return *(_QWORD *)v9 - __readfsqword(0x28u);
}
