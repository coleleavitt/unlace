__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::max_size(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<std::allocator<google_breakpad::ExceptionHandler *>>::max_size(Tp_allocator);
}

