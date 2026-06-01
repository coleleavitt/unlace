_QWORD *__fastcall __gnu_cxx::new_allocator<google_breakpad::ExceptionHandler *>::construct<google_breakpad::ExceptionHandler *,google_breakpad::ExceptionHandler *>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax

  v3 = *(_QWORD *)std::forward<google_breakpad::ExceptionHandler *>(a3);
  result = (_QWORD *)operator new(8u, a2);
  *result = v3;
  return result;
}

