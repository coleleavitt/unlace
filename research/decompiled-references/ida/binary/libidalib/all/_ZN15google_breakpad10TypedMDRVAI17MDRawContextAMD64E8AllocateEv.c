__int64 __fastcall google_breakpad::TypedMDRVA<MDRawContextAMD64>::Allocate(google_breakpad::UntypedMDRVA *a1)
{
  unsigned __int64 v1; // rax

  *((_DWORD *)a1 + 314) = 1;
  v1 = google_breakpad::minidump_size<MDRawContextAMD64>::size();
  return google_breakpad::UntypedMDRVA::Allocate(a1, v1);
}

