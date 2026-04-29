bool __fastcall Diagnostics::hasError(Diagnostics *this)
{
  return *(_QWORD *)this != 0;
}
