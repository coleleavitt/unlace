// Alternative name is '_ZNSt6vectorIPN15google_breakpad16ExceptionHandlerESaIS2_EED2Ev'
__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::~vector(_QWORD *a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_get_Tp_allocator(a1);
  std::_Destroy<google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler *>(*a1, a1[1], Tp_allocator);
  return std::_Vector_base<google_breakpad::ExceptionHandler *>::~_Vector_base(a1);
}

