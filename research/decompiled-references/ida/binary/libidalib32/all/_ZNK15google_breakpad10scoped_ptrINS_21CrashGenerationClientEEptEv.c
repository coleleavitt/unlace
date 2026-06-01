__int64 __fastcall google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::operator->(__int64 a1)
{
  if ( !*(_QWORD *)a1 )
    __assert_fail(
      "ptr_ != __null",
      "./src/common/scoped_ptr.h",
      0x77u,
      "C* google_breakpad::scoped_ptr<C>::operator->() const [with C = google_breakpad::CrashGenerationClient]");
  return *(_QWORD *)a1;
}

