__int64 __fastcall google_breakpad::TypedMDRVA<MDRawHeader>::Allocate(google_breakpad::UntypedMDRVA *a1)
{
  unsigned __int64 v1; // rax

  *((_DWORD *)a1 + 14) = 1;
  v1 = google_breakpad::minidump_size<MDRawHeader>::size();
  return google_breakpad::UntypedMDRVA::Allocate(a1, v1);
}

