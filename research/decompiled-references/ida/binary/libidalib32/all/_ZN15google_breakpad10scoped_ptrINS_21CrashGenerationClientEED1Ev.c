// Alternative name is '_ZN15google_breakpad10scoped_ptrINS_21CrashGenerationClientEED2Ev'
__int64 __fastcall google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::~scoped_ptr(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
  return result;
}

