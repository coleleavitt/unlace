_QWORD *__fastcall google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::reset(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)*a1;
  if ( a2 != *a1 )
  {
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    *a1 = a2;
    return a1;
  }
  return result;
}

