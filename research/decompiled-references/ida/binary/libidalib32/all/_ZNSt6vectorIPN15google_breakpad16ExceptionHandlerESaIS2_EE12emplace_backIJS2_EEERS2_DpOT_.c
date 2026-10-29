__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::emplace_back<google_breakpad::ExceptionHandler *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
  {
    v3 = std::forward<google_breakpad::ExceptionHandler *>(a2);
    v4 = std::vector<google_breakpad::ExceptionHandler *>::end(a1);
    std::vector<google_breakpad::ExceptionHandler *>::_M_realloc_insert<google_breakpad::ExceptionHandler *>(a1, v4, v3);
  }
  else
  {
    v2 = std::forward<google_breakpad::ExceptionHandler *>(a2);
    std::allocator_traits<std::allocator<google_breakpad::ExceptionHandler *>>::construct<google_breakpad::ExceptionHandler *,google_breakpad::ExceptionHandler *>(
      a1,
      *(_QWORD *)(a1 + 8),
      v2);
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return std::vector<google_breakpad::ExceptionHandler *>::back(a1);
}

