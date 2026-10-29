__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::push_back(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = std::move<google_breakpad::ExceptionHandler *&>(a2);
  return std::vector<google_breakpad::ExceptionHandler *>::emplace_back<google_breakpad::ExceptionHandler *>(a1, v2);
}

