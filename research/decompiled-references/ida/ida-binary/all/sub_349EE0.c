void __fastcall sub_349EE0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QPlainTextEdit *v9; // rbp
  volatile signed __int32 *v10; // rax

  v9 = (QT::QPlainTextEdit *)(a1 - 16);
  *(_QWORD *)a1 = TNoteBox___vtable_at__16;
  *(_QWORD *)(a1 - 16) = &TNoteBox___vtable;
  sub_349CC0(a2, a3, a4, a5, a6, a7, a8, a9);
  v10 = *(volatile signed __int32 **)(a1 + 24);
  qword_8CF078 = nullptr;
  if ( v10 && !_InterlockedSub(v10, 1u) )
    free(*(void **)(a1 + 24));
  QT::QPlainTextEdit::~QPlainTextEdit(v9);
  operator delete(v9, 0x48u);
}
