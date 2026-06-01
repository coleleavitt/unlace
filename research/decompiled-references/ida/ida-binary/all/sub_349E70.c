void __fastcall TNoteBox__::vfunc_4(
        QT::QPlainTextEdit *this,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  volatile signed __int32 *v9; // rax

  *((_QWORD *)this + 2) = TNoteBox___vtable_at__16;
  *(_QWORD *)this = &TNoteBox___vtable;
  sub_349CC0(a2, a3, a4, a5, a6, a7, a8, a9);
  v9 = *((volatile signed __int32 **)this + 5);
  qword_8CF078 = nullptr;
  if ( v9 && !_InterlockedSub(v9, 1u) )
    free(*((void **)this + 5));
  QT::QPlainTextEdit::~QPlainTextEdit(this);
  operator delete(this, 0x48u);
}
