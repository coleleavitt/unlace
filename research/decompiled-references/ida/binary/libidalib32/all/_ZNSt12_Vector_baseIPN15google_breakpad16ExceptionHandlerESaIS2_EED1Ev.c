// Alternative name is '_ZNSt12_Vector_baseIPN15google_breakpad16ExceptionHandlerESaIS2_EED2Ev'
__int64 __fastcall std::_Vector_base<google_breakpad::ExceptionHandler *>::~_Vector_base(_QWORD *a1)
{
  std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_deallocate(a1, *a1, (__int64)(a1[2] - *a1) >> 3);
  return std::_Vector_base<google_breakpad::ExceptionHandler *>::_Vector_impl::~_Vector_impl(a1);
}

