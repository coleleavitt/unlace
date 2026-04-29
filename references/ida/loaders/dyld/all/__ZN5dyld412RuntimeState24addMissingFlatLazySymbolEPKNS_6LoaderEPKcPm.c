__int64 __fastcall dyld4::RuntimeState::addMissingFlatLazySymbol(
        dyld4::RuntimeState *this,
        const dyld4::Loader *a2,
        const char *a3,
        unsigned __int64 *a4)
{
  __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x8

  result = lsl::Vector<dyld4::RuntimeState::MissingFlatSymbol>::reserve(
             (char *)this + 592,
             *((_QWORD *)this + 76) + 1LL);
  v9 = *((_QWORD *)this + 75);
  v10 = *((_QWORD *)this + 76);
  *((_QWORD *)this + 76) = v10 + 1;
  v11 = (_QWORD *)(v9 + 24 * v10);
  *v11 = a2;
  v11[1] = a3;
  v11[2] = a4;
  return result;
}
