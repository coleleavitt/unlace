__int64 __fastcall google_breakpad::MemoryRange::Set(google_breakpad::MemoryRange *this, const void *a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)this = a2;
  if ( a2 )
    result = a3;
  else
    result = 0;
  *((_QWORD *)this + 1) = result;
  return result;
}

